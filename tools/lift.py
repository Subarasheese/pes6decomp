#!/usr/bin/env python3
"""Lift original functions to C instruction by instruction, and keep what tools/equiv.py accepts.

    lift.py LIST [--jobs N] [--limit N] [--image main|game]
    lift.py --show ADDRESS            print the lifted C of one function of PES6_TARGET's image

LIST is a CSV with image,address columns (the exhibition list works); every listed function without
accepted C is tried. The lifted C is not a readable reconstruction: each register is a 64-bit local
variable, each instruction one statement, each branch a goto, in the original's order (a delay slot
runs before its branch takes effect, and only on the taken path of a branch-likely). What it is, is
C that does what the instructions do, written by a script from the instructions alone, so it needs
no decompiler and has no translation to get wrong beyond this file's instruction table.

  registers   a0-a7 and f12-f19 that the code reads before writing are the parameters; every other
              register starts at 0. The prologue's saves of ra/s0-s7/fp and their restores are the
              compiler's business and are dropped; the rest of the frame is a local array `sp` points to.
  calls       a callee gets the argument registers it reads (tools/equiv.py callee_inputs), as the
              variables hold them at the call; its result goes to v0, or to f0 when the code after the
              call reads f0 first. A jump through an address built in place is a call by name.
  addresses   absolute, as the instructions build them (lui/addiu, gp-relative): the data stays where
              the original has it.
  not lifted  jump tables, 128-bit and unaligned (lwl/ldl...) operations, VU0, COP0, syscalls, and a
              function that changes sp outside its prologue and epilogue. Those are reported.

An accepted function is written to build/gen/<image>/func_<ADDR>.c with its record in
build/gen/<image>.jsonl; tools/gen_equiv.py --admit admits it like any generated draft.
"""
import contextlib
import io
import json
import multiprocessing
import os
import re
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
sys.path.insert(0, HERE)

GPR = ["zero", "at", "v0", "v1", "a0", "a1", "a2", "a3", "a4", "a5", "a6", "a7", "t4", "t5", "t6", "t7",
       "s0", "s1", "s2", "s3", "s4", "s5", "s6", "s7", "t8", "t9", "k0", "k1", "gp", "sp", "fp", "ra"]
SAVED = set(range(16, 24)) | {30, 31}
COMPILERS = ("ee-gcc-2.9-G0", "ee-gcc-2.9", "mwcc-3.0.1b210")   # G0 first: no gp-relative literals
REVIEW = ("Lifted from the original instructions by tools/lift.py (registers as variables, one statement per "
          "instruction) and admitted because tools/equiv.py found it equivalent to the original on generated "
          "cases (see docs/equivalent.md); compiler/structural checks as for every draft. Not a readable "
          "reconstruction, and behavioural evidence on test cases, not a semantic-equivalence proof.")


class Unsupported(Exception):
    pass


def sx16(v):
    return v - 0x10000 if v & 0x8000 else v


class Ins:
    __slots__ = ("w", "op", "rs", "rt", "rd", "sa", "fn", "imm", "simm", "addr")

    def __init__(self, w, addr):
        self.w, self.addr = w, addr
        self.op, self.rs, self.rt, self.rd = w >> 26, (w >> 21) & 31, (w >> 16) & 31, (w >> 11) & 31
        self.sa, self.fn, self.imm = (w >> 6) & 31, w & 63, w & 0xFFFF
        self.simm = sx16(self.imm)

    def branch_target(self):
        return self.addr + 4 + (self.simm << 2)

    def jump_target(self):
        return ((self.addr + 4) & 0xF0000000) | ((self.w & 0x3FFFFFF) << 2)

    def is_cond_branch(self):
        return self.op in (4, 5, 6, 7, 20, 21, 22, 23) or (self.op == 1 and self.rt in (0, 1, 2, 3)) \
            or (self.op == 17 and self.rs == 8)

    def is_likely(self):
        return self.op in (20, 21, 22, 23) or (self.op == 1 and self.rt in (2, 3)) or (self.op == 17 and self.rs == 8 and self.rt & 2)

    def is_jump(self):
        return self.op in (2, 3) or (self.op == 0 and self.fn in (8, 9))

    def is_transfer(self):
        return self.is_cond_branch() or self.is_jump()


class Lifter:
    def __init__(self, image, address, words, callee_inputs, name_of, gp, static_mem=None, caller_float=None, use=None):
        self.caller_float = caller_float
        self.use = use
        self.image, self.address, self.gp = image, address, gp
        self.static = static_mem
        self.q_valid, self.uses_q, self.tables = set(), set(), {}
        self.indirect_tail = set()
        self.ins = [Ins(w, address + 4 * i) for i, w in enumerate(words)]
        self.end = address + 4 * len(words)
        self.callee_inputs, self.name_of = callee_inputs, name_of
        self.reads, self.writes = set(), set()          # of the statement being built: ("g", n) / ("f", n)
        self.used_g, self.used_f = set(), set()
        self.callees = {}                               # name -> (int count, float count, returns float)
        self.uses_acc = self.uses_fcc = self.uses_hilo = self.uses_hilo1 = self.needs_sqrt = False
        self.frame = 0
        self.saved_slots = {}

    # ---- operands ----------------------------------------------------------------------------------

    def g(self, r):
        if r == 0:
            return "0"
        self.reads.add(("g", r))
        self.used_g.add(r)
        return GPR[r]

    def setg(self, r, expr):
        if r == 0:
            return ";"
        self.writes.add(("g", r))
        self.used_g.add(r)
        self.q_valid.discard(r)
        return f"{GPR[r]} = {expr};"

    def f(self, r, member="f"):
        self.reads.add(("f", r))
        self.used_f.add(r)
        return f"f{r}.{member}"

    def setf(self, r, expr, member="f"):
        self.writes.add(("f", r))
        self.used_f.add(r)
        return f"f{r}.{member} = {expr};"

    def mem(self, typ, i):
        base = self.g(i.rs)
        if i.rs == 0:
            return f"(*(volatile {typ} *) {i.simm & 0xFFFFFFFF:#x})"
        # volatile: every load and store of the original happens, in its order (no forwarding or reordering)
        return f"(*(volatile {typ} *) (u32) ({base} + {i.simm}))" if i.simm else f"(*(volatile {typ} *) (u32) {base})"

    # ---- one instruction that is not a transfer ------------------------------------------------------

    def stmt(self, k):
        i = self.ins[k]
        self.reads, self.writes = set(), set()
        if k in self.skip:
            return ";"
        op, fn = i.op, i.fn
        g, setg = self.g, self.setg
        if i.w == 0:
            return ";"
        if op == 0:
            rs, rt, rd, sa = i.rs, i.rt, i.rd, i.sa
            if fn == 0: return setg(rd, f"(s32) ((u32) {g(rt)} << {sa})")
            if fn == 2: return setg(rd, f"(s32) ((u32) {g(rt)} >> {sa})")
            if fn == 3: return setg(rd, f"(s32) {g(rt)} >> {sa}")
            if fn == 4: return setg(rd, f"(s32) ((u32) {g(rt)} << ({g(rs)} & 31))")
            if fn == 6: return setg(rd, f"(s32) ((u32) {g(rt)} >> ({g(rs)} & 31))")
            if fn == 7: return setg(rd, f"(s32) {g(rt)} >> ({g(rs)} & 31)")
            if fn == 10: return f"if ({g(rt)} == 0) {setg(rd, g(rs))}"
            if fn == 11: return f"if ({g(rt)} != 0) {setg(rd, g(rs))}"
            if fn == 13: return ";"                                   # break: the compiler's divide check
            if fn in (16, 18):
                self.uses_hilo = True
                return setg(rd, "hi" if fn == 16 else "lo")
            if fn in (17, 19):
                self.uses_hilo = True
                return f"{'hi' if fn == 17 else 'lo'} = {g(rs)};"
            if fn == 20: return setg(rd, f"(s64) ((u64) {g(rt)} << ({g(rs)} & 63))")
            if fn == 22: return setg(rd, f"(s64) ((u64) {g(rt)} >> ({g(rs)} & 63))")
            if fn == 23: return setg(rd, f"{g(rt)} >> ({g(rs)} & 63)")
            if fn in (24, 25):
                self.uses_hilo = True
                c = "(s64) (s32)" if fn == 24 else "(s64) (u64) (u32)"
                extra = (" " + setg(rd, "lo")) if rd else ""
                return f"{{ s64 m_ = {c} {g(rs)} * {c} {g(rt)}; lo = (s32) m_; hi = (s32) (m_ >> 32);{extra} }}"
            if fn in (26, 27):
                self.uses_hilo = True
                c = "(s32)" if fn == 26 else "(u32)"
                return (f"if ({c} {g(rt)} != 0) {{ s64 q_ = (s32) ({c} {g(rs)} / {c} {g(rt)}); "
                        f"hi = (s32) ({c} {g(rs)} % {c} {g(rt)}); lo = q_; }}")
            if fn in (45, 37) and (rt == 0 or rs == 0): return setg(rd, g(rs if rt == 0 else rt))     # a move
            if fn in (32, 33): return setg(rd, f"(s32) ((u32) {g(rs)} + (u32) {g(rt)})")
            if fn in (34, 35): return setg(rd, f"(s32) ((u32) {g(rs)} - (u32) {g(rt)})")
            if fn == 36: return setg(rd, f"{g(rs)} & {g(rt)}")
            if fn == 37: return setg(rd, f"{g(rs)} | {g(rt)}")
            if fn == 38: return setg(rd, f"{g(rs)} ^ {g(rt)}")
            if fn == 39: return setg(rd, f"~({g(rs)} | {g(rt)})")
            if fn == 42: return setg(rd, f"{g(rs)} < {g(rt)}")
            if fn == 43: return setg(rd, f"(u64) {g(rs)} < (u64) {g(rt)}")
            if fn in (44, 45): return setg(rd, f"(s64) ((u64) {g(rs)} + (u64) {g(rt)})")
            if fn in (46, 47): return setg(rd, f"(s64) ((u64) {g(rs)} - (u64) {g(rt)})")
            if fn == 56: return setg(rd, f"(s64) ((u64) {g(rt)} << {sa})")
            if fn == 58: return setg(rd, f"(s64) ((u64) {g(rt)} >> {sa})")
            if fn == 59: return setg(rd, f"{g(rt)} >> {sa}")
            if fn == 60: return setg(rd, f"(s64) ((u64) {g(rt)} << {sa + 32})")
            if fn == 62: return setg(rd, f"(s64) ((u64) {g(rt)} >> {sa + 32})")
            if fn == 63: return setg(rd, f"{g(rt)} >> {sa + 32}")
            raise Unsupported(f"special function {fn}")
        rs, rt = i.rs, i.rt
        if op in (8, 9): return setg(rt, f"(s32) ((u32) {g(rs)} + {i.simm & 0xFFFFFFFF:#x}U)" if rs else f"{i.simm}")
        if op == 10: return setg(rt, f"{g(rs)} < {i.simm}")
        if op == 11: return setg(rt, f"(u64) {g(rs)} < (u64) (s64) {i.simm}")
        if op == 12: return setg(rt, f"{g(rs)} & {i.imm:#x}")
        if op == 13: return setg(rt, f"{g(rs)} | {i.imm:#x}" if rs else f"{i.imm:#x}")
        if op == 14: return setg(rt, f"{g(rs)} ^ {i.imm:#x}")
        if op == 15: return setg(rt, f"(s32) {(i.imm << 16) & 0xFFFFFFFF:#x}U")
        if op in (24, 25): return setg(rt, f"(s64) ((u64) {g(rs)} + (u64) (s64) {i.simm})")
        loads = {32: "s8", 33: "s16", 35: "s32", 36: "u8", 37: "u16", 39: "u32", 55: "s64"}
        stores = {40: "u8", 41: "u16", 43: "u32", 63: "u64"}
        if op in loads:
            return setg(rt, self.mem(loads[op], i))
        if op == 30:                                                  # lq: the address's low 4 bits are ignored
            self.uses_q.add(rt)
            lo = setg(rt, "*(volatile s64 *) a_")
            return f"{{ u32 a_ = (u32) ({g(rs)} + {i.simm}) & ~15U; {lo} qh_{GPR[rt]} = *(volatile u64 *) (a_ + 8); }}"
        if op == 31:                                                  # sq: low half, then the upper half
            if rt:
                self.uses_q.add(rt)
            hi = f"qh_{GPR[rt]}" if rt else "0"
            return (f"{{ u32 a_ = (u32) ({g(rs)} + {i.simm}) & ~15U; *(volatile u64 *) a_ = (u64) {g(rt)}; "
                    f"*(volatile u64 *) (a_ + 8) = {hi}; }}")
        if op in stores:
            return f"{self.mem(stores[op], i)} = ({stores[op]}) {g(rt)};"
        if op in (34, 38, 42, 46, 26, 27, 44, 45):
            return self.unaligned(i)
        if op == 28:
            return self.mmi(i)
        if op == 49: return self.setf(rt, self.mem("f32", i))
        if op == 57: return f"{self.mem('f32', i)} = {self.f(rt)};"
        if op == 17:
            return self.cop1(i)
        if op in (18, 54, 62):
            return self.vu0(i)
        raise Unsupported(f"opcode {op}")

    def unaligned(self, i):
        """lwl/lwr/swl/swr and the 64-bit ldl/ldr/sdl/sdr, by their definition on a little-endian machine."""
        g, op, rt = self.g, i.op, i.rt
        a = f"u32 a_ = (u32) ({g(i.rs)} + {i.simm});"
        if op == 34:   # lwl
            return (f"{{ {a} u32 s_ = 24 - 8 * (a_ & 3); u32 w_ = *(volatile u32 *) (a_ & ~3U); "
                    + self.setg(rt, f"(s32) ((w_ << s_) | ((u32) {g(rt)} & ((1U << s_) - 1)))") + " }")
        if op == 38:   # lwr
            return (f"{{ {a} u32 s_ = 8 * (a_ & 3); u32 w_ = *(volatile u32 *) (a_ & ~3U); u32 m_ = 0xFFFFFFFFU >> s_; "
                    + self.setg(rt, f"(s32) (((u32) {g(rt)} & ~m_) | (w_ >> s_))") + " }")
        if op == 42:   # swl
            return (f"{{ {a} u32 s_ = 24 - 8 * (a_ & 3); volatile u32 *p_ = (volatile u32 *) (a_ & ~3U); "
                    f"*p_ = (*p_ & ~(0xFFFFFFFFU >> s_)) | ((u32) {g(rt)} >> s_); }}")
        if op == 46:   # swr
            return (f"{{ {a} u32 s_ = 8 * (a_ & 3); volatile u32 *p_ = (volatile u32 *) (a_ & ~3U); "
                    f"*p_ = (*p_ & ((1U << s_) - 1)) | ((u32) {g(rt)} << s_); }}")
        if op == 26:   # ldl
            return (f"{{ {a} u32 s_ = 56 - 8 * (a_ & 7); u64 d_ = *(volatile u64 *) (a_ & ~7U); "
                    + self.setg(rt, f"(s64) ((d_ << s_) | ((u64) {g(rt)} & (((u64) 1 << s_) - 1)))") + " }")
        if op == 27:   # ldr
            return (f"{{ {a} u32 s_ = 8 * (a_ & 7); u64 d_ = *(volatile u64 *) (a_ & ~7U); u64 m_ = ~(u64) 0 >> s_; "
                    + self.setg(rt, f"(s64) (((u64) {g(rt)} & ~m_) | (d_ >> s_))") + " }")
        if op == 44:   # sdl
            return (f"{{ {a} u32 s_ = 56 - 8 * (a_ & 7); volatile u64 *p_ = (volatile u64 *) (a_ & ~7U); "
                    f"*p_ = (*p_ & ~(~(u64) 0 >> s_)) | ((u64) {g(rt)} >> s_); }}")
        return (f"{{ {a} u32 s_ = 8 * (a_ & 7); volatile u64 *p_ = (volatile u64 *) (a_ & ~7U); "
                f"*p_ = (*p_ & (((u64) 1 << s_) - 1)) | ((u64) {g(rt)} << s_); }}")

    def mmi(self, i):
        """The multimedia instructions the game code uses: the second multiplier (hi1/lo1), multiply-add,
        and a few 128-bit rearrangements, on the low half and the qh_ shadow of each register."""
        import rabbitizer as R
        m = R.Instruction(i.w, i.addr, R.InstrCategory.R5900).disassemble().split()[0]
        g, setg, rs, rt, rd = self.g, self.setg, i.rs, i.rt, i.rd
        one = m.endswith("1")
        H, L = ("hi1", "lo1") if one else ("hi", "lo")
        if m in ("mult1", "multu1", "div1", "divu1", "mfhi1", "mflo1", "mthi1", "mtlo1", "madd", "maddu", "madd1", "maddu1"):
            if one: self.uses_hilo1 = True
            else: self.uses_hilo = True
        if m in ("mult1", "multu1"):
            c = "(s64) (s32)" if m == "mult1" else "(s64) (u64) (u32)"
            extra = (" " + setg(rd, L)) if rd else ""
            return f"{{ s64 m_ = {c} {g(rs)} * {c} {g(rt)}; {L} = (s32) m_; {H} = (s32) (m_ >> 32);{extra} }}"
        if m in ("div1", "divu1"):
            c = "(s32)" if m == "div1" else "(u32)"
            return (f"if ({c} {g(rt)} != 0) {{ s32 q_ = (s32) ({c} {g(rs)} / {c} {g(rt)}); "
                    f"{H} = (s32) ({c} {g(rs)} % {c} {g(rt)}); {L} = q_; }}")
        if m in ("mfhi1", "mflo1"):
            return setg(rd, H if m == "mfhi1" else L)
        if m in ("mthi1", "mtlo1"):
            return f"{H if m == 'mthi1' else L} = (s32) {g(rs)};"
        if m in ("madd", "maddu", "madd1", "maddu1"):
            c = "(s64) (s32)" if m.startswith("madd") and not m.startswith("maddu") else "(s64) (u64) (u32)"
            extra = (" " + setg(rd, L)) if rd else ""
            return (f"{{ s64 m_ = (s64) (((u64) (u32) {H} << 32) | (u32) {L}) + {c} {g(rs)} * {c} {g(rt)}; "
                    f"{L} = (s32) m_; {H} = (s32) (m_ >> 32);{extra} }}")
        Q = lambda r: f"qh_{GPR[r]}" if r else "(u64) 0"
        for r in (rs, rt, rd):
            if r: self.uses_q.add(r)
        if m == "pcpyld":
            return f"{{ u64 h_ = (u64) {g(rs)}; {setg(rd, f'(s64) (u64) {g(rt)}')} qh_{GPR[rd]} = h_; }}" if rd else ";"
        if m == "pextlw":
            if not rd: return ";"
            return (f"{{ u64 s_ = (u64) {g(rs)}, t_ = (u64) {g(rt)}; "
                    + setg(rd, "(s64) ((t_ & 0xFFFFFFFFU) | (s_ << 32))") + f" qh_{GPR[rd]} = (t_ >> 32) | ((s_ >> 32) << 32); }}")
        if m == "prot3w":
            if not rd: return ";"
            return (f"{{ u64 l_ = (u64) {g(rt)}, h_ = {Q(rt)}; "
                    + setg(rd, "(s64) ((l_ >> 32) | ((h_ & 0xFFFFFFFFU) << 32))") + f" qh_{GPR[rd]} = (l_ & 0xFFFFFFFFU) | ((h_ >> 32) << 32); }}")
        if m == "paddub":
            if not rd: return ";"
            return (f"{{ u64 x_[2], y_[2], z_[2]; s32 n_; x_[0] = (u64) {g(rs)}; x_[1] = {Q(rs)}; y_[0] = (u64) {g(rt)}; y_[1] = {Q(rt)}; "
                    "z_[0] = z_[1] = 0; for (n_ = 0; n_ < 16; n_++) { u32 b_ = (u32) ((x_[n_ >> 3] >> (8 * (n_ & 7))) & 0xFF) + "
                    "(u32) ((y_[n_ >> 3] >> (8 * (n_ & 7))) & 0xFF); if (b_ > 0xFF) b_ = 0xFF; z_[n_ >> 3] |= (u64) b_ << (8 * (n_ & 7)); } "
                    + setg(rd, "(s64) z_[0]") + f" qh_{GPR[rd]} = z_[1]; }}")
        raise Unsupported(f"MMI {m}")

    def vu0(self, i):
        """A VU0 macro-mode instruction as inline assembly (the only assembly drafts may contain): the
        compilers cannot emit it from C, and the VU0 registers are state the compiler never touches."""
        import rabbitizer as R
        text = " ".join(R.Instruction(i.w, i.addr, R.InstrCategory.R5900).disassemble().split())
        if text.startswith(".word"):                                # rabbitizer names some (vsqrt) only in a comment
            m = re.search(r"#\s*(v[a-z0-9.]+[^#]*)#", text)
            if not m:
                raise Unsupported(f"VU0 instruction {text[:40]}")
            text = m.group(1).strip()
        for reg in ("ACC", "Q", "P", "R", "I"):
            text = re.sub(r"\$" + reg + r"\b", reg, text)
        mnemonic = text.split()[0]
        if i.op in (54, 62):                                         # lqc2 / sqc2 $vfN, off(base)
            base = f"(u32) {self.g(i.rs)}" if i.rs else "0"
            return f'__asm__ volatile("{mnemonic} $vf{i.rt}, {i.simm}(%0)" : : "r"({base}) : "memory");'
        if i.rs in (1, 2):                                           # qmfc2 / cfc2: VU0 -> EE register
            src = text.split(",")[-1].strip()
            return f'{{ s32 t_; __asm__ volatile("{mnemonic} %0, {src}" : "=r"(t_)); {self.setg(i.rt, "t_")} }}'
        if i.rs in (5, 6):                                           # qmtc2 / ctc2: EE register -> VU0
            dst = text.split(",")[-1].strip()
            val = self.g(i.rt)
            return f'__asm__ volatile("{mnemonic} %0, {dst}" : : "r"((s32) {val}));'
        return f'__asm__ volatile("{text}");'


    def cop1(self, i):
        f, setf = self.f, self.setf
        fmt, ft, fs, fd, fn = i.rs, i.rt, i.rd, i.sa, i.fn
        if fmt == 0: return self.setg(i.rt, f(fs, "i"))
        if fmt == 4: return setf(fs, f"(s32) {self.g(i.rt)}", "i")
        if fmt == 20 and fn == 32: return setf(fd, f"(f32) {f(fs, 'i')}")
        if fmt != 16:
            raise Unsupported(f"cop1 format {fmt}")
        binary = {0: "+", 1: "-", 2: "*", 3: "/"}
        if fn in binary: return setf(fd, f"{f(fs)} {binary[fn]} {f(ft)}")
        if fn == 5: return setf(fd, f"{f(fs, 'i')} & 0x7FFFFFFF", "i")
        if fn == 6: return setf(fd, f(fs, "i"), "i")
        if fn == 7: return setf(fd, f"{f(fs, 'i')} ^ (s32) 0x80000000U", "i")
        if fn == 36: return setf(fd, f"(s32) {f(fs)}", "i")
        if fn == 40: return setf(fd, f"({f(fs)} >= {f(ft)}) ? {f(fs)} : {f(ft)}")
        if fn == 41: return setf(fd, f"({f(fs)} <= {f(ft)}) ? {f(fs)} : {f(ft)}")
        if fn in (24, 25, 26):
            self.uses_acc = True
            return f"acc = {f(fs)} {binary[fn - 24] if fn != 26 else '*'} {f(ft)};"
        if fn in (28, 29):
            self.uses_acc = True
            return setf(fd, f"acc {'+' if fn == 28 else '-'} {f(fs)} * {f(ft)}")
        if fn in (30, 31):
            self.uses_acc = True
            return f"acc = acc {'+' if fn == 30 else '-'} {f(fs)} * {f(ft)};"
        if fn == 4:
            self.needs_sqrt = True
            return setf(fd, f"sqrtf({f(ft)})")
        if fn == 22:
            self.needs_sqrt = True
            return setf(fd, f"{f(fs)} / sqrtf({f(ft)})")
        compare = {48: None, 50: "==", 52: "<", 54: "<="}
        if fn in compare:
            self.uses_fcc = True
            return "fcc = 0;" if fn == 48 else f"fcc = {f(fs)} {compare[fn]} {f(ft)};"
        raise Unsupported(f"cop1 function {fn}")

    def condition(self, i):
        g = self.g
        if i.op in (4, 20): return f"{g(i.rs)} == {g(i.rt)}"
        if i.op in (5, 21): return f"{g(i.rs)} != {g(i.rt)}"
        if i.op in (6, 22): return f"{g(i.rs)} <= 0"
        if i.op in (7, 23): return f"{g(i.rs)} > 0"
        if i.op == 1: return f"{g(i.rs)} {'<' if i.rt in (0, 2) else '>='} 0"
        self.uses_fcc = True
        return "fcc" if i.rt & 1 else "!fcc"

    # ---- structure -----------------------------------------------------------------------------------

    def prepare(self):
        ins = self.ins
        n = len(ins)
        for k, i in enumerate(ins):
            if i.is_transfer() and (k + 1 >= n or ins[k + 1].is_transfer()):
                raise Unsupported("a transfer in a delay slot or at the end")
        if not (ins[-2].is_jump() or (ins[-2].op in (4,) and ins[-2].rs == ins[-2].rt)):
            raise Unsupported("the function does not end with a jump")
        self.skip = set()
        # frame: addiu sp, sp, -N at the top; addiu sp, sp, +N in epilogues
        for k, i in enumerate(ins[:6]):
            if i.op in (9, 25) and i.rs == 29 and i.rt == 29 and i.simm < 0:
                self.frame = -i.simm
                self.skip.add(k)
                break
        written = set()
        for k, i in enumerate(ins):
            if k in self.skip:
                continue
            if i.op in (9, 25) and i.rs == 29 and i.rt == 29:
                if i.simm != self.frame or not self.frame:
                    raise Unsupported("sp changes outside the prologue and epilogue")
                self.skip.add(k)
                continue
            writes_sp = (i.op == 0 and i.rd == 29 and i.fn not in (8, 9, 24, 25, 26, 27, 17, 19) and i.w != 0) or \
                        (i.op in (8, 9, 10, 11, 12, 13, 14, 15, 24, 25, 32, 33, 35, 36, 37, 39, 55) and i.rt == 29)
            if writes_sp:
                raise Unsupported("sp is written")
            if i.op in (63, 31, 43) and i.rs == 29 and i.rt in SAVED and i.rt not in written:      # sd/sq/sw save
                self.saved_slots[i.simm] = i.rt
                self.skip.add(k)
                continue
            if i.op in (55, 30, 35) and i.rs == 29 and self.saved_slots.get(i.simm) == i.rt:        # restore
                self.skip.add(k)
                continue
            if i.op == 57 and i.rs == 29 and i.rt >= 20 and ("f", i.rt) not in written:              # swc1 f20-f31 save
                self.saved_slots[i.simm] = ("f", i.rt)
                self.skip.add(k)
                continue
            if i.op == 49 and i.rs == 29 and self.saved_slots.get(i.simm) == ("f", i.rt):
                self.skip.add(k)
                continue
            if i.op == 49:
                written.add(("f", i.rt))
            elif i.op == 17 and i.rs == 4:
                written.add(("f", i.rd))
            elif i.op == 17 and i.rs in (16, 20) and i.fn not in (24, 25, 26, 30, 31, 48, 50, 52, 54):
                written.add(("f", i.sa))
            if i.op in (16, 47):
                raise Unsupported("COP0 or cache")
            if i.op == 18 and i.rs == 8:
                raise Unsupported("VU0 branch (bc2)")
            if i.op == 0 and i.fn in (12, 15):
                raise Unsupported("syscall/sync")
            if i.op == 0 and i.fn not in (8, 9, 24, 25, 26, 27, 17, 19):
                written.add(i.rd)
            elif i.op in (8, 9, 10, 11, 12, 13, 14, 15, 24, 25, 32, 33, 35, 36, 37, 39, 55):
                written.add(i.rt)
            elif i.op == 17 and i.rs == 0:
                written.add(i.rt)
            elif i.op == 3 or (i.op == 0 and i.fn == 9):
                written.add(31)
        self.labels = set()
        for k, i in enumerate(ins):
            if i.op == 0 and i.fn == 8 and i.rs != 31 and self.constant_before(k, i.rs) is None:
                try:
                    targets = self.jump_table(k)
                except Unsupported:
                    self.indirect_tail.add(k)        # a tail call through a pointer: every argument goes on
                    continue
                self.tables[k] = targets
                for tgt in targets:
                    j = (tgt - self.address) // 4
                    if j > 0 and ins[j - 1].is_transfer():
                        raise Unsupported("a jump table entry into a delay slot")
                    self.labels.add(j)
        for k, i in enumerate(ins):
            t = None
            if i.is_cond_branch():
                t = i.branch_target()
            elif i.op == 2 and self.address <= i.jump_target() < self.end:
                t = i.jump_target()
            if t is None:
                continue
            if not self.address <= t < self.end:
                raise Unsupported("a branch leaves the function")
            j = (t - self.address) // 4
            if j > 0 and ins[j - 1].is_transfer():
                raise Unsupported("a branch into a delay slot")
            self.labels.add(j)

    def jump_table(self, k):
        """Targets of the jr at k when it jumps through a table: lw rX, lo(rY) with rY = table base + index."""
        ins = self.ins
        reg = ins[k].rs
        j = k - 1
        while j >= 0 and not ins[j].is_transfer():
            x = ins[j]
            if x.op == 35 and x.rt == reg:
                break
            if (x.op == 0 and x.rd == reg and x.w) or (x.op not in (0, 2, 3, 40, 41, 43, 63, 31, 57) and x.rt == reg):
                raise Unsupported("jump table or computed jump")
            j -= 1
        else:
            raise Unsupported("jump table or computed jump")
        load = ins[j]
        base = None
        y = j - 1
        while y >= 0 and not ins[y].is_transfer():
            x = ins[y]
            if x.op == 0 and x.fn in (33, 45) and x.rd == load.rs:
                for r in (x.rs, x.rt):
                    c = self.constant_before(y, r)
                    if c is not None:
                        base = (c + load.simm) & 0xFFFFFFFF
                break
            y -= 1
        if base is None:
            c = self.constant_before(j, load.rs)
            if c is None:
                raise Unsupported("jump table or computed jump")
            base = (c + load.simm) & 0xFFFFFFFF
        if self.static is None:
            raise Unsupported("jump table without memory")
        out = []
        for n in range(1024):
            a = base + 4 * n
            if a + 4 > len(self.static):
                break
            v = struct.unpack_from("<I", self.static, a)[0]
            if not (self.address <= v < self.end) or v & 3:
                break
            out.append(v)
        if not out:
            raise Unsupported("jump table or computed jump")
        return sorted(set(out))

    def constant_before(self, k, reg):
        """The constant `reg` holds at instruction k when lui/addiu/ori built it in the same straight run."""
        val = None
        j = k - 1
        chain = []
        while j >= 0 and not self.ins[j].is_transfer() and j not in self.labels | {k}:
            chain.append(self.ins[j])
            j -= 1
        if (k in self.labels):
            return None
        regs = {}
        for i in reversed(chain):
            if i.op == 15:
                regs[i.rt] = (i.imm << 16) & 0xFFFFFFFF
            elif i.op in (9, 13) and i.rs in regs:
                regs[i.rt] = (regs[i.rs] | i.imm) if i.op == 13 else (regs[i.rs] + i.simm) & 0xFFFFFFFF
            elif i.op == 0 and i.w != 0:
                regs.pop(i.rd, None)
            elif i.op in (8, 10, 11, 12, 14, 24, 25, 32, 33, 35, 36, 37, 39, 55, 9, 13):
                regs.pop(i.rt, None)
        return regs.get(reg, val)

    def float_result(self, k):
        """Does the code after the call at k read f0 before writing it (the callee returns a float)?"""
        return float_after([i.w for i in self.ins], k)

    def call(self, k, target, tail=False):
        """The C call for a direct call to `target` made at instruction k."""
        if not hasattr(self, "voids"):
            self.voids = {}
        if self.static is not None and not tail:
            self.voids[self.name_of(target)] = caller_use(self.image, target, self.static) == "void" \
                and not self.float_result(k) and not int_after([i.w for i in self.ins], k)
        ints, floats = self.callee_inputs(target)
        ni = max([r - 3 for r in ints if 4 <= r <= 11], default=0)
        nf = max([r - 11 for r in floats if 12 <= r <= 19], default=0)
        name = self.name_of(target)
        is_float = (self.returns_float if tail else self.float_result(k))
        if self.static is not None and not tail:
            said = callers_say_float(self.image, target, self.static)
            if said is not None:
                is_float = said
            if not is_float and body_returns_float(self.image, target, self.static):
                is_float = True
        old = self.callees.get(name)
        if old:
            ni, nf, is_float = max(ni, old[0]), max(nf, old[1]), is_float or old[2]
        self.callees[name] = (ni, nf, is_float)
        return name, target

    def call_text(self, name):
        ni, nf, is_float = self.callees[name]
        if name != self.symbol and self.voids.get(name):
            args = [self.g(4 + n) for n in range(ni)] + [self.f(12 + n) for n in range(nf)]
            return f"{name}({', '.join(args)});"
        if name == self.symbol:                    # recursion: the arguments are this function's parameters
            for n in range(8):
                self.g(4 + n) if n < 4 else None
            expr = f"{name}(@SELF@)"
            if self.returns_float:
                return self.setf(0, expr)
            return self.setg(2, expr)
        args = [self.g(4 + n) for n in range(ni)] + [self.f(12 + n) for n in range(nf)]
        expr = f"{name}({', '.join(args)})"
        if is_float:
            return self.setf(0, expr)
        return self.setg(2, expr)

    def returns(self):
        """Float when the last register a return path sets, of v0 and f0, is f0."""
        kinds = set()
        for k, i in enumerate(self.ins):
            if not (i.op == 0 and i.fn == 8 and i.rs == 31):
                continue
            for j in range(k + 1, max(-1, k - 14), -1):
                x = self.ins[j]
                if j != k + 1 and j != k and (x.is_transfer() or (j + 1) in self.labels):
                    break
                if x.op == 17 and ((x.rs == 16 and x.sa == 0 and x.fn not in (24, 25, 26, 30, 31, 48, 50, 52, 54)) or
                                   (x.rs == 4 and x.rd == 0) or (x.rs == 20 and x.sa == 0)):
                    kinds.add("float"); break
                if x.op == 49 and x.rt == 0:
                    kinds.add("float"); break
                wrote_v0 = (x.op == 0 and x.rd == 2 and x.w != 0 and x.fn not in (8, 24, 25, 26, 27)) or \
                           (x.op in (8, 9, 10, 11, 12, 13, 14, 15, 24, 25, 32, 33, 35, 36, 37, 39, 55) and x.rt == 2) or \
                           (x.op == 17 and x.rs == 0 and x.rt == 2)
                if wrote_v0:
                    kinds.add("int"); break
        return "float" in kinds and "int" not in kinds

    def wide(self):
        """Does the function use 64-bit integer operations (then registers are s64, else s32)?"""
        for k, i in enumerate(self.ins):
            if k in self.skip or i.w == 0:
                continue
            if i.op == 0 and i.fn in (20, 22, 23, 44, 46, 47, 56, 58, 59, 60, 62, 63):
                return True
            if i.op == 0 and i.fn == 45 and i.rs and i.rt:
                return True
            if i.op in (24, 25, 39, 55, 63, 30, 31, 26, 27, 44, 45):
                return True
            if i.op == 28 and i.fn in (8, 9, 40, 41):
                return True
        return False

    def lift(self, symbol):
        self.symbol = symbol
        self.prepare()
        self.returns_float = (self.use == "float") if self.use in ("float", "int") else \
            (self.returns() if self.caller_float is None else self.caller_float)
        self.returns_void = self.use == "void"
        ins = self.ins
        body, rw = [], []                                  # rw: (reads, writes) per emitted instruction, in order

        def take(k):
            s = self.stmt(k)
            rw.append((set(self.reads), set(self.writes)))
            return s

        def note():
            rw.append((set(self.reads), set(self.writes)))

        ret = "return;" if self.returns_void else ("return f0.f;" if self.returns_float else "return v0;")
        k = 0
        while k < len(ins):
            i = ins[k]
            if k in self.labels:
                body.append(f"L_{i.addr:08X}:;")
                self.q_valid = set()
            if not i.is_transfer():
                s = take(k)
                if s != ";":
                    body.append(f"    {s}")
                k += 1
                continue
            if i.is_cond_branch():
                self.reads, self.writes = set(), set()
                cond = self.condition(i)
                note()
                d = take(k + 1)
                label = f"L_{i.branch_target():08X}"
                always = i.op == 4 and i.rs == i.rt
                if always:
                    body.append(f"    {d} goto {label};" if d != ";" else f"    goto {label};")
                elif i.is_likely():
                    body.append(f"    if ({cond}) {{ {d} goto {label}; }}")
                elif d == ";":
                    body.append(f"    if ({cond}) goto {label};")
                else:
                    body.append(f"    {{ s32 c_ = {cond}; {d} if (c_) goto {label}; }}")
            elif i.op == 2 and self.address <= i.jump_target() < self.end:
                d = take(k + 1)
                body.append(f"    {d} goto L_{i.jump_target():08X};" if d != ";" else f"    goto L_{i.jump_target():08X};")
            elif i.op in (2, 3):
                d = take(k + 1)
                name, _ = self.call(k, i.jump_target(), tail=i.op == 2)
                self.reads, self.writes = set(), set()
                c = self.call_text(name)
                note()
                body.append(f"    {d} {c}".replace("    ; ", "    ") + (f" {ret}" if i.op == 2 else ""))
            elif i.fn == 8 and i.rs == 31:
                d = take(k + 1)
                self.reads, self.writes = set(), set()
                self.f(0) if self.returns_float else self.g(2)
                note()
                body.append(f"    {d} {ret}" if d != ";" else f"    {ret}")
            else:                                           # jr reg / jalr reg
                const = self.constant_before(k, i.rs)
                if const is not None and const % 4 == 0 and 0x00100000 <= const < 0x02000000:
                    d = take(k + 1)
                    name, _ = self.call(k, const, tail=i.fn == 8)
                    self.reads, self.writes = set(), set()
                    c = self.call_text(name)
                    note()
                    body.append(f"    {d} {c}" + (f" {ret}" if i.fn == 8 else ""))
                elif k in self.indirect_tail:
                    self.reads, self.writes = set(), set()
                    fp = self.g(i.rs)
                    note()
                    d = take(k + 1)
                    self.reads, self.writes = set(), set()
                    ints = ", ".join(self.g(r) for r in range(4, 12))
                    flts = ", ".join(self.f(r) for r in range(12, 20))
                    R_ = "s64"
                    proto = ", ".join(["s64"] * 8 + ["f32"] * 8)
                    if self.returns_void:
                        call = f"((void (*)({proto})) t_)({ints}, {flts}); return;"
                    elif self.returns_float:
                        call = f"return ((f32 (*)({proto})) t_)({ints}, {flts});"
                    else:
                        call = f"return ((s64 (*)({proto})) t_)({ints}, {flts});"
                    note()
                    body.append(f"    {{ u32 t_ = (u32) {fp}; {d} {call} }}")
                elif k in self.tables:
                    self.reads, self.writes = set(), set()
                    reg = self.g(i.rs)
                    note()
                    d = take(k + 1)
                    chain = " ".join(f"if (t_ == {x:#x}U) goto L_{x:08X};" for x in self.tables[k])
                    body.append(f"    {{ u32 t_ = (u32) {reg}; {d} {chain} }}")
                elif i.fn == 9:
                    self.reads, self.writes = set(), set()
                    fp = self.g(i.rs)
                    note()
                    d = take(k + 1)
                    self.reads, self.writes = set(), set()
                    args = ", ".join(self.g(r) for r in (4, 5, 6, 7))
                    c = self.setg(2, f"((s64 (*)(s64, s64, s64, s64)) t_)({args})")    # through a pointer
                    note()
                    body.append(f"    {{ u32 t_ = (u32) {fp}; {d} {c} }}")
                else:
                    raise Unsupported("jump table or computed jump")
            k += 2

        # parameters: argument registers read before any write, in address order
        written, entry = set(), set()
        for reads, writes in rw:
            entry |= reads - written
            written |= writes
        bad = [GPR[r] for kind, r in entry if kind == "g" and (r in SAVED or r == 26 or r == 27) and r != 31]
        if bad:
            raise Unsupported(f"reads {bad[0]} before writing it")
        # an argument register read anywhere is a parameter: on some path it may be read before any write
        # (the textual order above is not the control flow), and an extra parameter only starts the
        # variable with the caller's value, as the original register does
        read_any = set().union(*(reads for reads, _ in rw)) if rw else set()
        ni = max([r - 3 for kind, r in read_any if kind == "g" and 4 <= r <= 11], default=0)
        nf = max([r - 11 for kind, r in read_any if kind == "f" and 12 <= r <= 19], default=0)
        R = "s64" if self.wide() else "s32"
        params = [f"{R} {GPR[4 + n]}" for n in range(ni)] + [f"f32 fa{12 + n}" for n in range(nf)]
        out = [f"/* compiler: {{compiler}} */",
               "/* Lifted from the original instructions by tools/lift.py: registers are variables, each statement is",
               " * one instruction, branches are gotos. Behaviour-level C, not a readable reconstruction. */",
               '#include "pes6/m2c.h"', ""]
        body = [b.replace("@SELF@", ", ".join([GPR[4 + n] for n in range(ni)] + [f"f{12 + n}.f" for n in range(nf)])) for b in body]
        for n in range(nf):
            self.used_f.add(12 + n)
        for name, (ci, cf, is_float) in sorted(self.callees.items()):
            if name == symbol:
                continue
            proto = ", ".join([R] * ci + ["f32"] * cf) or "void"
            kind = "void" if getattr(self, "voids", {}).get(name) else ("f32" if is_float else R)
            out.append(f"{kind} {name}({proto});")
        if self.needs_sqrt:
            out.append("f32 sqrtf(f32);")
        rtype = "void" if self.returns_void else ("f32" if self.returns_float else R)
        out += ["", f"{rtype} {symbol}({', '.join(params) or 'void'}) {{"]
        self.used_g |= {r for r in self.uses_q if r}
        locals_ = sorted(r for r in self.used_g if not (4 <= r < 4 + ni) and r not in (0, 28, 29))
        if 2 not in self.used_g and not self.returns_float:
            locals_ = sorted(set(locals_) | {2})
        if locals_:
            out.append(f"    {R} " + ", ".join(f"{GPR[r]} = 0" for r in locals_) + ";")
        for r in sorted(self.uses_q):
            out.append(f"    u64 qh_{GPR[r]} = 0;")
        if self.uses_hilo1:
            out.append(f"    {R} hi1 = 0, lo1 = 0;")
        if 28 in self.used_g:
            out.append(f"    {R} gp = {self.gp:#x};")
        if self.returns_float:
            self.used_f.add(0)
        for r in sorted(self.used_f):
            init = f"fa{r}" if 12 <= r < 12 + nf else "0"
            # volatile: the compiler may neither fold a float register into a constant nor reorder the
            # operands of mul.s/add.s, whose EE rounding depends on the operand order
            out.append(f"    volatile union {{ f32 f; s32 i; }} f{r} = {{ {init} }};")
        if self.uses_hilo:
            out.append(f"    {R} hi = 0, lo = 0;")
        if self.uses_fcc:
            out.append("    s32 fcc = 0;")
        if self.uses_acc:
            out.append("    f32 acc = 0;")
        if 29 in self.used_g:
            if not self.frame:
                raise Unsupported("uses sp without a frame")
            out.append(f"    s64 frame[{(self.frame + 7) // 8}];")
            out.append(f"    {R} sp = (s32) (u32) frame;")
        out.append("")
        out += body
        out.append("}")
        return "\n".join(out) + "\n"


# ---- driving -------------------------------------------------------------------------------------

_CALLS = {}


def _f0_use(i):
    """'read', 'write' or None: what instruction i does with f0."""
    if i.op == 17:
        if i.rs == 0 and i.rd == 0: return "read"
        if i.rs == 4 and i.rd == 0: return "write"
        if i.rs == 16:
            reads = [i.rd] + ([i.rt] if i.fn in (0, 1, 2, 3, 24, 25, 26, 28, 29, 30, 31, 40, 41, 48, 50, 52, 54) else [])
            if 0 in reads: return "read"
            if i.fn not in (24, 25, 26, 30, 31, 48, 50, 52, 54) and i.sa == 0: return "write"
        if i.rs == 20 and i.rd == 0: return "read"
    elif i.op == 57 and i.rt == 0: return "read"
    elif i.op == 49 and i.rt == 0: return "write"
    return None


def _v0_use(i):
    """'read', 'write' or None: what instruction i does with v0."""
    if i.w == 0:
        return None
    reads = set()
    if i.op == 0:
        if i.fn in (8, 9): reads = {i.rs}
        elif i.fn in (16, 18): reads = set()
        elif i.fn in (0, 2, 3, 56, 58, 59, 60, 62, 63): reads = {i.rt}
        else: reads = {i.rs, i.rt}
    elif i.op in (4, 5, 20, 21, 40, 41, 43, 63, 31, 42, 46, 44, 45):
        reads = {i.rs, i.rt}
    elif i.op in (1, 6, 7, 22, 23) or 8 <= i.op <= 14 or i.op in (24, 25) or 32 <= i.op <= 39 \
            or i.op in (49, 57, 55, 30, 26, 27, 34, 38, 54, 62):
        reads = {i.rs}
    elif i.op == 17 and i.rs == 4:
        reads = {i.rt}
    elif i.op == 28:
        reads = {i.rs, i.rt}
    elif i.op == 18 and i.rs in (5, 6):
        reads = {i.rt}
    if 2 in reads:
        return "read"
    writes = None
    if i.op == 0 and i.fn not in (8, 24, 25, 26, 27, 17, 19, 13):
        writes = i.rd
    elif 8 <= i.op <= 15 or i.op in (24, 25) or 32 <= i.op <= 39 or i.op in (55, 30):
        writes = i.rt
    elif i.op == 17 and i.rs == 0:
        writes = i.rt
    return "write" if writes == 2 else None


def _first_use(words, k, use):
    """What the code after the call at index k does first with the register `use` watches: 'read',
    'write' or None. Straight-line: at a branch or jump its delay slot still counts (it runs before
    control leaves), then the scan stops."""
    n = len(words)
    j = k + 2
    while j < min(n, k + 48):
        i = Ins(words[j], 0)
        u = use(i)
        if u:
            return u
        if i.is_transfer():
            if j + 1 < n:
                u = use(Ins(words[j + 1], 0))
                if u:
                    return u
            return None
        j += 1
    return None


def float_after(words, k):
    """Does the code after the call at index k read f0 before writing it?"""
    return _first_use(words, k, _f0_use) == "read"


def int_after(words, k):
    """Does the code after the call at index k read v0 before writing it?"""
    return _first_use(words, k, _v0_use) == "read"


def body_returns_float(image, target, static_mem):
    """True when the function at `target` sets f0 last before returning on every return path that sets
    v0 or f0 at all (its own code, for a callee whose call sites do not settle it)."""
    import match
    try:
        span = match.function_span(target)
    except SystemExit:
        return False
    words = list(struct.unpack_from(f"<{span // 4}I", static_mem, target))
    while len(words) > 2 and words[-1] == 0 and not Ins(words[-2], 0).is_transfer():
        words.pop()
    if len(words) < 2:
        return False
    probe = Lifter(image, target, words, None, None, 0)
    probe.labels = set()
    for i in probe.ins:
        if i.is_cond_branch() and target <= i.branch_target() < target + 4 * len(words):
            probe.labels.add((i.branch_target() - target) // 4)
    try:
        return probe.returns()
    except Exception:
        return False


def caller_use(image, address, static_mem):
    """'float', 'int' or 'void' from what the direct callers of `address` read after the call; None without
    callers."""
    if image not in _CALLS:
        callers_say_float(image, address, static_mem)
    sites = _CALLS[image].get(address, [])
    if not sites:
        return None
    if any(float_after(w, k) for w, k in sites[:60]):
        return "float"
    if any(int_after(w, k) for w, k in sites[:60]):
        return "int"
    return "void"


def callers_say_float(image, address, static_mem):
    """True/False when the direct callers of `address` in the image's code agree on whether its result is
    read from f0; None without callers (or when they disagree: the function's own code then decides)."""
    if image not in _CALLS:
        import match
        calls = {}
        spans = [(0x00100000, 0x00372AE0)]
        if image != "main":
            ta, tt = match.load_text()
            spans.append((ta, ta + len(tt)))
        for lo, hi in spans:
            words = struct.unpack_from(f"<{(hi - lo) // 4}I", static_mem, lo)
            for k, w in enumerate(words):
                if w >> 26 == 3:
                    calls.setdefault(((lo + 4 * k + 4) & 0xF0000000) | ((w & 0x3FFFFFF) << 2), []).append((words, k))
        _CALLS[image] = calls
    sites = _CALLS[image].get(address, [])
    votes = {float_after(words, k) for words, k in sites[:40]}
    return votes.pop() if len(votes) == 1 else None


def lifted(image, address, base_mem):
    import equiv
    import match
    import symbols
    text_addr, text = match.load_text()
    words = match.trim_padding(match.words_at(text_addr, text, address, match.function_span(address)))
    while len(words) > 2 and words[-1] == 0 and not Ins(words[-2], 0).is_transfer():
        words = words[:-1]                                  # alignment padding after the last delay slot
    lifter = Lifter(image, address, words, lambda t: equiv.callee_inputs(t, base_mem, image),
                    lambda t: symbols.symbol(t), equiv.GP, equiv.static_memory(image),
                    callers_say_float(image, address, equiv.static_memory(image)),
                    caller_use(image, address, equiv.static_memory(image)))
    return lifter.lift(symbols.symbol(address)), symbols.symbol(address)


def one(image, address, base_mem):
    import draft_fix
    import equiv
    import match
    try:
        text, symbol = lifted(image, int(address, 16), base_mem)
    except Unsupported as e:
        return {"address": address, "verdict": "NO-LIFT", "detail": f"lift: {e}"}
    work = os.path.join(ROOT, "build", "tmp", "lift")
    os.makedirs(work, exist_ok=True)
    path = os.path.join(work, f"{image}_{address}.c")
    why = None
    for comp in (COMPILERS[1:] if "sqrtf(" in text else COMPILERS):
        src = text.replace("{compiler}", comp)
        open(path, "w").write(src)
        try:
            with contextlib.redirect_stdout(io.StringIO()), contextlib.redirect_stderr(io.StringIO()):
                obj = match.compile_c(path)
        except SystemExit:
            why = why or "does not compile"
            continue
        try:
            r = equiv.judge(image, int(address, 16), path, symbol, base_mem, obj)
        finally:
            os.remove(obj)
        if r["verdict"] != "EQUIVALENT" and re.search(r"case: (float )?return ", r.get("detail", "")) \
                and "@VOIDTRY@" not in text:
            # the only difference is the value left in v0/f0: a function whose callers (if any) do not
            # read it may be void; try that form under the same compiler
            vtext = re.sub(r"(?m)^(?:s32|s64|f32) (" + re.escape(symbol) + r"\()", r"void \1", src)
            vtext = vtext.replace("return v0;", "return;").replace("return f0.f;", "return;")
            open(path, "w").write(vtext)
            try:
                with contextlib.redirect_stdout(io.StringIO()), contextlib.redirect_stderr(io.StringIO()):
                    vobj = match.compile_c(path)
                r2 = equiv.judge(image, int(address, 16), path, symbol, base_mem, vobj)
                os.remove(vobj)
                if r2["verdict"] == "EQUIVALENT":
                    r, src = r2, vtext
            except SystemExit:
                open(path, "w").write(src)
        if r["verdict"] != "EQUIVALENT":
            why = why or f"{r['verdict']}: {r.get('detail', '')[:90]}"
            continue
        ok, reason = draft_fix.admissible(image, address, symbol, path, comp)
        if not ok:
            why = why or f"not admissible: {reason[:70]}"
            continue
        return {"address": address, "verdict": "EQUIVALENT", "source": f"build/gen/{image}/func_{address}.c", "compiler": comp,
                "memory": r.get("memory"), "cases": r.get("cases"), "holdout": r.get("holdout"), "coverage": r.get("coverage"),
                "repair": "tools/lift.py", "review": REVIEW, "text": src}
    return {"address": address, "verdict": "LIFT-FAILED", "detail": f"lift: {why}"}


def _worker(args):
    image, addresses = args
    import equiv
    base = equiv.build_memory(image)
    out = []
    for address in addresses:
        try:
            r = one(image, address, base)
        except (Exception, SystemExit) as e:           # the tools exit on bad input: never lose a worker
            r = {"address": address, "verdict": "LIFT-FAILED", "detail": f"lift: {type(e).__name__}: {e}"}
        if r["verdict"] == "EQUIVALENT":
            open(os.path.join(ROOT, r["source"]), "w").write(r.pop("text"))
            with open(os.path.join(ROOT, "build", "gen", f"{image}.jsonl"), "a") as fh:
                fh.write(json.dumps(r) + "\n")
        print(image, address, r["verdict"], r.get("detail", ""), flush=True)
        out.append(r)
    return out


def main():
    a = sys.argv[1:]
    if not a:
        sys.exit(__doc__)
    if a[0] == "--show":
        import equiv
        image = os.environ.get("PES6_TARGET") or "main"
        try:
            print(lifted(image, int(a[1], 16), equiv.build_memory(image))[0].replace("{compiler}", COMPILERS[0]))
        except Unsupported as e:
            sys.exit(f"not lifted: {e}")
        return
    import draft_fix
    jobs = int(a[a.index("--jobs") + 1]) if "--jobs" in a else 4
    limit = int(a[a.index("--limit") + 1]) if "--limit" in a else 0
    only = a[a.index("--image") + 1] if "--image" in a else None
    if not only:
        # one process per image: the tools read the target image when they are first imported
        import subprocess
        for image in ("main", "game"):
            env = {k: v for k, v in os.environ.items() if k != "PES6_TARGET"}
            if image != "main":
                env["PES6_TARGET"] = image
            subprocess.run([sys.executable, os.path.abspath(__file__), a[0], "--image", image, "--jobs", str(jobs)]
                           + (["--limit", str(limit)] if limit else []), env=env)
        return
    if (os.environ.get("PES6_TARGET") or "main") != only:
        sys.exit(f"--image {only} needs PES6_TARGET={'' if only == 'main' else only}")
    for image, rows in draft_fix.targets(a[0]).items():
        if only and image != only:
            continue
        done = set()
        for line in open(os.path.join(ROOT, "build", "gen", f"{image}.jsonl")):
            try:
                r = json.loads(line)
            except ValueError:
                continue
            (done.add if r.get("verdict") == "EQUIVALENT" else done.discard)(r["address"])
        addresses = [x for x, _ in rows if x not in done][:limit or None]
        print(f"{image}: {len(addresses)} functions", flush=True)
        counts = {}
        with multiprocessing.get_context("fork").Pool(jobs) as pool:
            for out in pool.imap_unordered(_worker, [(image, addresses[i:i + 6]) for i in range(0, len(addresses), 6)]):
                for r in out:
                    key = r["verdict"] if r["verdict"] == "EQUIVALENT" else re.sub(r"[0-9A-Fa-f]{6,}|\d+", "#", r.get("detail", ""))[:60]
                    counts[key] = counts.get(key, 0) + 1
        for key, n in sorted(counts.items(), key=lambda x: -x[1]):
            print(f"  {n:5} {key}", flush=True)


if __name__ == "__main__":
    main()
