"""R5900 (PS2 Emotion Engine) interpreter for behaviour checks of decompiled functions.

    m = Machine()
    m.load(addr, bytes)               # code and data
    m.gpr[4] = arg0 ...
    r = m.call(entry, max_steps=...)  # runs until the function returns to the sentinel
    r.v0, m.writes, m.calls, m.covered

Covers what PS2 game code runs on the EE core: the MIPS III/IV integer set with the R5900
additions (128-bit GPRs, three-operand mult, HI1/LO1 pipeline, SA, lq/sq), branch delay slots and
branch-likely, the EE FPU (COP1, bit-exact through ee_float.py), the multimedia instructions (MMI0-3)
and VU0 in macro mode (COP2). VU0 micro programs (vcallms), the kernel and hardware registers are
outside: syscalls, calls listed in `stubs` and accesses outside RAM/scratchpad go to hooks.

Registers: gpr[i] is a 128-bit int; hi/lo are 128-bit (HI1/LO1 in the upper 64 bits); fpr[i] are
32-bit float patterns; vf[i] are lists of four 32-bit patterns (x, y, z, w); vi[i] 16-bit.
"""
import struct

import ee_float as F

M8, M16, M32, M64, M128 = 0xFF, 0xFFFF, 0xFFFFFFFF, 0xFFFFFFFFFFFFFFFF, (1 << 128) - 1
RAM_SIZE = 32 << 20
SCRATCH = 0x70000000
SENTINEL = 0x01FFFFF0           # return address handed to a called function: reaching it ends the run


class Unimplemented(Exception):
    pass


class Fault(Exception):
    pass


def sx(v, bits):
    v &= (1 << bits) - 1
    return v - (1 << bits) if v >> (bits - 1) else v


def sx64(v32):
    """32-bit value sign-extended to 64 bits (as an unsigned 64-bit int)."""
    return sx(v32, 32) & M64


class Result:
    def __init__(self, m, steps, reason):
        self.v0 = m.gpr[2] & M64
        self.v1 = m.gpr[3] & M64
        self.f0 = m.fpr[0]
        self.steps = steps
        self.reason = reason


class Machine:
    def __init__(self):
        self.mem = bytearray(RAM_SIZE)
        self.scratch = bytearray(0x4000)
        self.reset_regs()
        self.stubs = {}             # address -> callable(machine) for calls not to execute
        self.call_hook = None       # callable(machine, target) -> True if handled (called for every jal/jalr)
        self.syscall_hook = None    # callable(machine, number)
        self.io_read = None         # callable(addr, size) -> value, for addresses outside RAM/scratchpad
        self.io_write = None        # callable(addr, size, value)
        self.writes = []            # (addr, size, value) of every store, in order
        self.calls = []             # (target, args snapshot) of every call that left the code under test
        self.covered = set()        # addresses of executed instructions
        self.record_writes = True
        self.readonly = []           # (lo, hi) ranges a store must not touch, e.g. code
        self.reads = None            # a set to collect word addresses of every load (None: off)
        self.mirrors = True          # False: no mirrors, past RAM faults; "kseg": only kseg0/kseg1 mirror RAM
        self._dec = {}

    def reset_regs(self):
        self.gpr = [0] * 32
        self.hi = 0
        self.lo = 0
        self.sa = 0
        self.fpr = [0] * 32
        self.acc = 0
        self.acc_of = False
        self.fcr31 = 0x01000001 & ~1
        self.vf = [[0, 0, 0, 0] for _ in range(32)]
        self.vf[0] = [0, 0, 0, 0x3F800000]
        self.vi = [0] * 16
        self.vacc = [0, 0, 0, 0]
        self.q = 0x3F800000
        self.p = 0
        self.i = 0
        self.r = 0x3F800000
        self.vu_status = 0
        self.vu_mac = 0
        self.vu_clip = 0
        self.pc = 0
        self.cur = 0
        self.cop0 = [0] * 32

    # ---- memory -----------------------------------------------------------------------------------

    def _where(self, addr, size):
        a = addr & M32
        if (a & 0xF0000000) == SCRATCH:
            o = a & 0x3FFF
            if o + size <= 0x4000:
                return self.scratch, o
        if self.mirrors == "kseg":
            p = a & 0x1FFFFFFF if 0x80000000 <= a < 0xC0000000 else a
        elif not self.mirrors:
            p = a
        else:
            p = a & 0x1FFFFFFF if a >= 0x80000000 else a & 0x0FFFFFFF if a >= 0x20000000 and a < 0x40000000 else a
        if p + size <= RAM_SIZE:
            return self.mem, p
        return None, a

    def load(self, addr, data):
        buf, o = self._where(addr, len(data))
        if buf is None:
            raise Fault(f"load outside memory at {addr:08x}")
        buf[o:o + len(data)] = data
        self._dec.clear()

    def read(self, addr, size):
        if addr & (size - 1) and size in (2, 4, 8, 16):
            raise Fault(f"unaligned {size}-byte read at {addr:08x} (pc {self.cur:08x})")
        if self.reads is not None:
            self.reads.add(addr & ~3 & M32)
        buf, o = self._where(addr, size)
        if buf is None:
            if self.io_read:
                return self.io_read(addr & M32, size) & ((1 << (8 * size)) - 1)
            raise Fault(f"read of {size} bytes outside memory at {addr & M32:08x} (pc {self.cur:08x})")
        return int.from_bytes(buf[o:o + size], "little")

    def write(self, addr, size, value):
        if addr & (size - 1) and size in (2, 4, 8, 16):
            raise Fault(f"unaligned {size}-byte write at {addr:08x} (pc {self.cur:08x})")
        value &= (1 << (8 * size)) - 1
        buf, o = self._where(addr, size)
        if buf is self.mem:
            for lo, hi in self.readonly:          # checked on the physical address: mirrors included
                if lo <= o + size - 1 and o < hi:
                    raise Fault(f"write into read-only memory at {addr & M32:08x} (pc {self.cur:08x})")
        if buf is None:
            if self.io_write:
                self.io_write(addr & M32, size, value)
                if self.record_writes:
                    self.writes.append((addr & M32, size, value))
                return
            raise Fault(f"write of {size} bytes outside memory at {addr & M32:08x} (pc {self.cur:08x})")
        buf[o:o + size] = value.to_bytes(size, "little")
        if self.record_writes:
            self.writes.append((addr & M32, size, value))
        if buf is self.mem and self._dec:
            for k in range(o & ~3, o + size, 4):
                self._dec.pop(k, None)

    def _fetch(self, pc):
        """An instruction fetch: not a data read, so not in `reads`."""
        reads, self.reads = self.reads, None
        try:
            return self.read(pc, 4)
        finally:
            self.reads = reads

    def r32(self, a):
        return self.read(a, 4)

    def w32(self, a, v):
        self.write(a, 4, v)

    # ---- registers --------------------------------------------------------------------------------

    def g(self, r):
        return self.gpr[r] & M64

    def g32(self, r):
        return self.gpr[r] & M32

    def set64(self, r, v):
        if r:
            self.gpr[r] = (self.gpr[r] & ~M64 & M128) | (v & M64)

    def set32(self, r, v):
        """Write a 32-bit result sign-extended to 64 bits (upper 64 bits of the register unchanged)."""
        if r:
            self.gpr[r] = (self.gpr[r] & ~M64 & M128) | sx64(v)

    def set128(self, r, v):
        if r:
            self.gpr[r] = v & M128

    # ---- running ----------------------------------------------------------------------------------

    def call(self, entry, ra=SENTINEL, max_steps=2_000_000):
        """Run the function at entry until it returns to ra. Raises Fault/Unimplemented."""
        self.gpr[31] = ra
        self.pc = entry & M32
        self.npc = self.pc + 4
        steps = 0
        while self.pc != ra:
            if steps >= max_steps:
                return Result(self, steps, "step limit")
            self.step()
            steps += 1
        return Result(self, steps, "returned")

    def step(self):
        pc = self.pc
        self.covered.add(pc)
        ins = self._dec.get(pc)
        if ins is None:
            ins = self._fetch(pc)
            self._dec[pc] = ins
        npc = self.npc
        self.pc, self.npc = npc, npc + 4
        self.cur = pc
        self.exec(ins, pc)

    def _branch(self, target, pc, link=None, likely=False, taken=True):
        """Branch with a delay slot: the slot at pc+4 runs, then control goes to target."""
        if link is not None:
            self.set64(link, pc + 8)
        if taken:
            self.npc = target & M32
        elif likely:
            # branch-likely not taken: the delay slot is skipped
            self.pc, self.npc = pc + 8, pc + 12

    def _jump(self, target, pc, link):
        """j/jal/jr/jalr: run the delay slot, then either transfer or hand the call to a hook."""
        if link is not None:
            self.set64(link, pc + 8)
            # the delay slot executes before the call
            slot = self.pc
            self.covered.add(slot)
            ins = self._dec.get(slot)
            if ins is None:
                ins = self._fetch(slot)
                self._dec[slot] = ins
            self.pc, self.npc = slot + 4, slot + 8
            self.exec(ins, slot)
            if self.call_hook and self.call_hook(self, target):
                self.pc, self.npc = pc + 8, pc + 12
                return
            if target in self.stubs:
                self.calls.append((target, self.args()))
                self.stubs[target](self)
                self.pc, self.npc = pc + 8, pc + 12
                return
            self.pc, self.npc = target, target + 4
            return
        self.npc = target & M32

    def args(self):
        """The argument registers at a call: a0-a3, t0-t3 (EABI), f12-f19."""
        return tuple(self.g(r) for r in (4, 5, 6, 7, 8, 9, 10, 11)) + tuple(self.fpr[12:20])

    # ---- the instruction set ----------------------------------------------------------------------

    def exec(self, x, pc):
        op = x >> 26
        rs, rt, rd, sa = (x >> 21) & 31, (x >> 16) & 31, (x >> 11) & 31, (x >> 6) & 31
        imm = x & 0xFFFF
        simm = imm - 0x10000 if imm & 0x8000 else imm
        if op == 0:
            return self._special(x, rs, rt, rd, sa, pc)
        if op == 1:
            return self._regimm(x, rs, rt, simm, pc)
        if op in (2, 3):
            t = ((pc + 4) & 0xF0000000) | ((x & 0x3FFFFFF) << 2)
            return self._jump(t, pc, 31 if op == 3 else None)
        if 4 <= op <= 7 or 20 <= op <= 23:
            a = sx(self.g(rs), 64)
            b = sx(self.g(rt), 64)
            k = op & 3
            cond = a == b if k == 0 else a != b if k == 1 else a <= 0 if k == 2 else a > 0
            return self._branch(pc + 4 + (simm << 2), pc, likely=op >= 20, taken=cond)
        if op == 8 or op == 9:                       # addi, addiu
            return self.set32(rt, self.g32(rs) + simm)
        if op == 10:
            return self.set64(rt, 1 if sx(self.g(rs), 64) < simm else 0)
        if op == 11:
            return self.set64(rt, 1 if self.g(rs) < (simm & M64) else 0)
        if op == 12:
            return self.set64(rt, self.g(rs) & imm)
        if op == 13:
            return self.set64(rt, self.g(rs) | imm)
        if op == 14:
            return self.set64(rt, self.g(rs) ^ imm)
        if op == 15:
            return self.set32(rt, imm << 16)
        if op == 16:
            return self._cop0(x, rs, rt, rd, pc)
        if op == 17:
            return self._cop1(x, rs, rt, rd, sa, simm, pc)
        if op == 18:
            return self._cop2(x, rs, rt, rd, pc)
        if op == 24 or op == 25:                     # daddi, daddiu
            return self.set64(rt, self.g(rs) + simm)
        if op == 26 or op == 27:                     # ldl, ldr
            return self._ldlr(op == 26, rt, (self.g32(rs) + simm) & M32)
        if op == 28:
            return self._mmi(x, rs, rt, rd, sa, pc)
        if op == 30:                                 # lq
            a = (self.g32(rs) + simm) & ~15 & M32
            return self.set128(rt, self.read(a, 8) | (self.read(a + 8, 8) << 64))
        if op == 31:                                 # sq
            a = (self.g32(rs) + simm) & ~15 & M32
            v = self.gpr[rt]
            self.write(a, 8, v & M64)
            self.write(a + 8, 8, v >> 64)
            return
        addr = (self.g32(rs) + simm) & M32
        if op == 32:
            return self.set64(rt, sx(self.read(addr, 1), 8) & M64)
        if op == 33:
            return self.set64(rt, sx(self.read(addr, 2), 16) & M64)
        if op == 34 or op == 38:                     # lwl, lwr
            return self._lwlr(op == 34, rt, addr)
        if op == 35:
            return self.set32(rt, self.read(addr, 4))
        if op == 36:
            return self.set64(rt, self.read(addr, 1))
        if op == 37:
            return self.set64(rt, self.read(addr, 2))
        if op == 39:
            return self.set64(rt, self.read(addr, 4))
        if op == 40:
            return self.write(addr, 1, self.gpr[rt])
        if op == 41:
            return self.write(addr, 2, self.gpr[rt])
        if op == 42 or op == 46:                     # swl, swr
            return self._swlr(op == 42, rt, addr)
        if op == 43:
            return self.write(addr, 4, self.gpr[rt])
        if op == 44 or op == 45:                     # sdl, sdr
            return self._sdlr(op == 44, rt, addr)
        if op == 47 or op == 51:                     # cache, pref
            return
        if op == 49:                                 # lwc1
            self.fpr[rt] = self.read(addr, 4)
            return
        if op == 54:                                 # lqc2
            a = addr & ~15
            if rt:
                v = self.read(a, 8) | (self.read(a + 8, 8) << 64)
                self.vf[rt] = [(v >> (32 * k)) & M32 for k in range(4)]
            return
        if op == 55:                                 # ld
            return self.set64(rt, self.read(addr, 8))
        if op == 57:                                 # swc1
            return self.write(addr, 4, self.fpr[rt])
        if op == 62:                                 # sqc2
            a = addr & ~15
            v = self.vf[rt]
            self.write(a, 8, v[0] | (v[1] << 32))
            self.write(a + 8, 8, v[2] | (v[3] << 32))
            return
        if op == 63:                                 # sd
            return self.write(addr, 8, self.gpr[rt] & M64)
        raise Unimplemented(f"opcode {op} ({x:08x}) at {pc:08x}")

    def _lwlr(self, left, rt, addr):
        a = addr & ~3
        w = self.read(a, 4)
        sh = addr & 3
        old = self.g(rt) & M32
        if left:
            v = (old & (M32 >> (8 * (sh + 1)))) | (w << (8 * (3 - sh)))
            return self.set32(rt, v)
        v = (old & ~(M32 >> (8 * sh)) & M32) | (w >> (8 * sh))
        if sh == 0:
            return self.set32(rt, v)
        self.set64(rt, (self.g(rt) & ~M32 & M64) | (v & M32))

    def _swlr(self, left, rt, addr):
        a = addr & ~3
        w = self.read(a, 4)
        sh = addr & 3
        v = self.g(rt) & M32
        if left:
            new = (w & (~(M32 >> (8 * (3 - sh))) & M32)) | (v >> (8 * (3 - sh)))
        else:
            new = (w & ((1 << (8 * sh)) - 1)) | ((v << (8 * sh)) & M32)
        self.write(a, 4, new)

    def _ldlr(self, left, rt, addr):
        a = addr & ~7
        d = self.read(a, 8)
        sh = addr & 7
        old = self.g(rt)
        if left:
            v = (old & (M64 >> (8 * (sh + 1)))) | ((d << (8 * (7 - sh))) & M64)
        else:
            v = (old & ~(M64 >> (8 * sh)) & M64) | (d >> (8 * sh))
        self.set64(rt, v)

    def _sdlr(self, left, rt, addr):
        a = addr & ~7
        d = self.read(a, 8)
        sh = addr & 7
        v = self.g(rt)
        if left:
            new = (d & (~(M64 >> (8 * (7 - sh))) & M64)) | (v >> (8 * (7 - sh)))
        else:
            new = (d & ((1 << (8 * sh)) - 1)) | ((v << (8 * sh)) & M64)
        self.write(a, 8, new)

    def _special(self, x, rs, rt, rd, sa, pc):
        fn = x & 0x3F
        g = self.g
        if fn == 0:
            return self.set32(rd, self.g32(rt) << sa)
        if fn == 2:
            return self.set32(rd, self.g32(rt) >> sa)
        if fn == 3:
            return self.set32(rd, sx(self.g32(rt), 32) >> sa)
        if fn == 4:
            return self.set32(rd, self.g32(rt) << (g(rs) & 31))
        if fn == 6:
            return self.set32(rd, self.g32(rt) >> (g(rs) & 31))
        if fn == 7:
            return self.set32(rd, sx(self.g32(rt), 32) >> (g(rs) & 31))
        if fn == 8:
            return self._jump(self.g32(rs), pc, None)
        if fn == 9:
            return self._jump(self.g32(rs), pc, rd)
        if fn == 10:
            if g(rt) == 0:
                self.set64(rd, g(rs))
            return
        if fn == 11:
            if g(rt) != 0:
                self.set64(rd, g(rs))
            return
        if fn == 12:
            if self.syscall_hook:
                return self.syscall_hook(self, (x >> 6) & 0xFFFFF)
            raise Unimplemented(f"syscall {self.g32(3):x} at {pc:08x}")
        if fn == 13:
            raise Fault(f"break at {pc:08x}")
        if fn == 15:
            return
        if fn == 16:
            return self.set64(rd, self.hi & M64)
        if fn == 17:
            self.hi = (self.hi & ~M64 & M128) | g(rs)
            return
        if fn == 18:
            return self.set64(rd, self.lo & M64)
        if fn == 19:
            self.lo = (self.lo & ~M64 & M128) | g(rs)
            return
        if fn == 20:
            return self.set64(rd, g(rt) << (g(rs) & 63))
        if fn == 22:
            return self.set64(rd, g(rt) >> (g(rs) & 63))
        if fn == 23:
            return self.set64(rd, sx(g(rt), 64) >> (g(rs) & 63))
        if fn in (24, 25):                           # mult, multu (rd = lo)
            a, b = self.g32(rs), self.g32(rt)
            p = (sx(a, 32) * sx(b, 32)) if fn == 24 else a * b
            self._set_hilo(0, p)
            return self.set64(rd, self.lo & M64)
        if fn in (26, 27):
            self._div(0, fn == 26, self.g32(rs), self.g32(rt))
            return
        if fn in (32, 33):
            return self.set32(rd, self.g32(rs) + self.g32(rt))
        if fn in (34, 35):
            return self.set32(rd, self.g32(rs) - self.g32(rt))
        if fn == 36:
            return self.set64(rd, g(rs) & g(rt))
        if fn == 37:
            return self.set64(rd, g(rs) | g(rt))
        if fn == 38:
            return self.set64(rd, g(rs) ^ g(rt))
        if fn == 39:
            return self.set64(rd, ~(g(rs) | g(rt)))
        if fn == 40:                                 # mfsa
            return self.set64(rd, self.sa)
        if fn == 41:                                 # mtsa
            self.sa = g(rs) & 0xF
            return
        if fn == 42:
            return self.set64(rd, 1 if sx(g(rs), 64) < sx(g(rt), 64) else 0)
        if fn == 43:
            return self.set64(rd, 1 if g(rs) < g(rt) else 0)
        if fn in (44, 45):
            return self.set64(rd, g(rs) + g(rt))
        if fn in (46, 47):
            return self.set64(rd, g(rs) - g(rt))
        if 48 <= fn <= 54:                           # traps
            return
        if fn == 56:
            return self.set64(rd, g(rt) << sa)
        if fn == 58:
            return self.set64(rd, g(rt) >> sa)
        if fn == 59:
            return self.set64(rd, sx(g(rt), 64) >> sa)
        if fn == 60:
            return self.set64(rd, g(rt) << (sa + 32))
        if fn == 62:
            return self.set64(rd, g(rt) >> (sa + 32))
        if fn == 63:
            return self.set64(rd, sx(g(rt), 64) >> (sa + 32))
        raise Unimplemented(f"special {fn} ({x:08x}) at {pc:08x}")

    def _set_hilo(self, pipe, p):
        lo, hi = sx64(p & M32), sx64((p >> 32) & M32)
        sh = 64 * pipe
        keep = ~(M64 << sh) & M128
        self.lo = (self.lo & keep) | (lo << sh)
        self.hi = (self.hi & keep) | (hi << sh)

    def _div(self, pipe, signed, a, b):
        if signed:
            a, b = sx(a, 32), sx(b, 32)
            if b == 0:
                q, r = (1 if a < 0 else -1), a
            elif a == -0x80000000 and b == -1:
                q, r = -0x80000000, 0
            else:
                q = abs(a) // abs(b) * (1 if (a < 0) == (b < 0) else -1)
                r = a - q * b
        else:
            if b == 0:
                q, r = -1, a
            else:
                q, r = a // b, a % b
        sh = 64 * pipe
        keep = ~(M64 << sh) & M128
        self.lo = (self.lo & keep) | (sx64(q & M32) << sh)
        self.hi = (self.hi & keep) | (sx64(r & M32) << sh)

    def _regimm(self, x, rs, rt, simm, pc):
        a = sx(self.g(rs), 64)
        t = pc + 4 + (simm << 2)
        if rt in (0, 2, 16, 18):                     # bltz, bltzl, bltzal, bltzall
            return self._branch(t, pc, link=31 if rt >= 16 else None, likely=rt & 2, taken=a < 0)
        if rt in (1, 3, 17, 19):                     # bgez...
            return self._branch(t, pc, link=31 if rt >= 16 else None, likely=rt & 2, taken=a >= 0)
        if rt == 24:                                 # mtsab
            self.sa = ((self.g32(rs) & 0xF) ^ (simm & 0xF)) & 0xF
            return
        if rt == 25:                                 # mtsah
            self.sa = (((self.g32(rs) & 7) ^ (simm & 7)) * 2) & 0xF
            return
        if 8 <= rt <= 14:                            # traps
            return
        raise Unimplemented(f"regimm {rt} at {pc:08x}")

    def _cop0(self, x, rs, rt, rd, pc):
        if rs == 0:                                  # mfc0
            return self.set32(rt, self.cop0[rd])
        if rs == 4:
            self.cop0[rd] = self.g32(rt)
            return
        if rs == 16:                                 # tlbr, tlbwi, eret, ei, di ...
            return
        if rs == 8:                                  # bc0f/bc0t: treat condition as true
            return self._branch(pc + 4 + (sx(x & 0xFFFF, 16) << 2), pc, likely=rt & 2, taken=rt & 1)
        raise Unimplemented(f"cop0 {rs} at {pc:08x}")

    # ---- COP1: EE FPU -----------------------------------------------------------------------------

    def _cop1(self, x, rs, rt, rd, sa, simm, pc):
        if rs == 0:                                  # mfc1
            return self.set32(rt, self.fpr[rd])
        if rs == 2:                                  # cfc1
            return self.set32(rt, self.fcr31 if rd == 31 else 0x2E30 if rd == 0 else 0)
        if rs == 4:
            self.fpr[rd] = self.g32(rt)
            return
        if rs == 6:
            if rd == 31:
                self.fcr31 = self.g32(rt) & 0x0183FFFF | 0x01000001
            return
        if rs == 8:                                  # bc1f, bc1t, bc1fl, bc1tl
            c = bool(self.fcr31 & 0x800000)
            return self._branch(pc + 4 + (simm << 2), pc, likely=rt & 2, taken=c == bool(rt & 1))
        fs, ft, fd = rd, rt, sa
        fn = x & 0x3F
        f = self.fpr
        if rs == 20:                                 # W format: cvt.s.w
            if fn == 32:
                f[fd] = F.cvt_s_w(f[fs])
                return
            raise Unimplemented(f"cop1.w {fn} at {pc:08x}")
        if rs != 16:
            raise Unimplemented(f"cop1 {rs} at {pc:08x}")
        a, b = f[fs], f[ft]
        if fn == 0:
            f[fd] = int(F.add(a, b))
        elif fn == 1:
            f[fd] = int(F.sub(a, b))
        elif fn == 2:
            f[fd] = int(F.mul(a, b))
        elif fn == 3:
            f[fd] = int(F.div(a, b))
        elif fn == 4:
            f[fd] = int(F.sqrt(b))
        elif fn == 5:
            f[fd] = F.abs_(a)
        elif fn == 6:
            f[fd] = a
        elif fn == 7:
            f[fd] = F.neg(a)
        elif fn == 22:
            f[fd] = int(F.rsqrt(a, b))
        elif fn in (24, 25, 26):                     # adda, suba, mula
            r = (F.add, F.sub, F.mul)[fn - 24](a, b)
            self.acc, self.acc_of = int(r), r.of
        elif fn in (28, 29, 30, 31):                 # madd, msub, madda, msuba
            r = (F.madd if fn in (28, 30) else F.msub)(self.acc, a, b, self.acc_of)
            if fn in (28, 29):
                f[fd] = int(r)
            else:
                self.acc, self.acc_of = int(r), r.of
        elif fn == 36:
            f[fd] = F.cvt_w_s(a)
        elif fn == 40:
            f[fd] = F.max_(a, b)
        elif fn == 41:
            f[fd] = F.min_(a, b)
        elif fn in (48, 50, 52, 54):                 # c.f, c.eq, c.lt, c.le
            ka, kb = F.cmp_value(a), F.cmp_value(b)
            c = {48: False, 50: ka == kb, 52: ka < kb, 54: ka <= kb}[fn]
            self.fcr31 = (self.fcr31 | 0x800000) if c else (self.fcr31 & ~0x800000)
        else:
            raise Unimplemented(f"cop1.s {fn} at {pc:08x}")

    # ---- MMI --------------------------------------------------------------------------------------

    def _mmi(self, x, rs, rt, rd, sa, pc):
        fn = x & 0x3F
        g = self.g
        if fn in (0, 1, 32, 33):                     # madd, maddu, madd1, maddu1
            pipe = 1 if fn >= 32 else 0
            sh = 64 * pipe
            acc = (((self.hi >> sh) & M32) << 32) | ((self.lo >> sh) & M32)
            a, b = self.g32(rs), self.g32(rt)
            p = sx(a, 32) * sx(b, 32) if fn in (0, 32) else a * b
            self._set_hilo(pipe, (acc + p) & M64)
            return self.set64(rd, (self.lo >> sh) & M64)
        if fn == 4:                                  # plzcw
            out = 0
            for k in range(2):
                w = (g(rs) >> (32 * k)) & M32
                s = w >> 31
                n = 0
                for bit in range(30, -1, -1):
                    if ((w >> bit) & 1) == s:
                        n += 1
                    else:
                        break
                out |= n << (32 * k)
            return self.set64(rd, out)
        if fn == 16:
            return self.set64(rd, self.hi >> 64)
        if fn == 17:
            self.hi = (self.hi & M64) | (g(rs) << 64)
            return
        if fn == 18:
            return self.set64(rd, self.lo >> 64)
        if fn == 19:
            self.lo = (self.lo & M64) | (g(rs) << 64)
            return
        if fn in (24, 25):                           # mult1, multu1
            a, b = self.g32(rs), self.g32(rt)
            self._set_hilo(1, sx(a, 32) * sx(b, 32) if fn == 24 else a * b)
            return self.set64(rd, self.lo >> 64)
        if fn in (26, 27):
            return self._div(1, fn == 26, self.g32(rs), self.g32(rt))
        if fn == 48:                                 # pmfhl
            return self._pmfhl(sa, rd)
        if fn == 49:                                 # pmthl.lw
            v = self.gpr[rs]
            self.lo = (self.lo & ~(M32 | (M32 << 64)) & M128) | (v & M32) | (((v >> 64) & M32) << 64)
            self.hi = (self.hi & ~(M32 | (M32 << 64)) & M128) | ((v >> 32) & M32) | (((v >> 96) & M32) << 64)
            return
        if fn in (52, 54, 55, 60, 62, 63):           # psllh, psrlh, psrah, psllw, psrlw, psraw
            bits = 16 if fn < 60 else 32
            s = sa & (bits - 1)
            kind = {52: 0, 54: 1, 55: 2, 60: 0, 62: 1, 63: 2}[fn]
            return self.set128(rd, _lanes(self.gpr[rt], bits, lambda v: _shift(v, s, kind, bits)))
        table = {8: self._mmi0, 40: self._mmi1, 9: self._mmi2, 41: self._mmi3}.get(fn)
        if table:
            return table(sa, rs, rt, rd, pc)
        raise Unimplemented(f"mmi {fn} at {pc:08x}")

    def _pmfhl(self, fmt, rd):
        lo, hi = self.lo, self.hi
        if fmt == 0:                                 # lw
            v = (lo & M32) | ((hi & M32) << 32) | (((lo >> 64) & M32) << 64) | (((hi >> 64) & M32) << 96)
        elif fmt == 1:                               # uw
            v = ((lo >> 32) & M32) | (((hi >> 32) & M32) << 32) | (((lo >> 96) & M32) << 64) | (((hi >> 96) & M32) << 96)
        elif fmt == 2:                               # slw: saturated {hi,lo} words
            v = 0
            for k in range(2):
                w = sx((((hi >> (64 * k)) & M32) << 32) | ((lo >> (64 * k)) & M32), 64)
                w = max(-0x80000000, min(0x7FFFFFFF, w))
                v |= (w & M64) << (64 * k)
        elif fmt in (3, 4):                          # lh, sh
            parts = []
            for k in range(2):
                lw = (lo >> (64 * k)) & M64
                hw = (hi >> (64 * k)) & M64
                for src in (lw, hw):
                    for j in (0, 2):
                        h = (src >> (16 * j)) & M16
                        if fmt == 4:
                            w = sx((src >> (16 * j)) & M32, 32)
                            h = max(-0x8000, min(0x7FFF, w)) & M16
                        parts.append(h)
            # lh: halfwords lo0, lo2, hi0, hi2 for each doubleword
            v = 0
            order = [0, 1, 2, 3, 4, 5, 6, 7]
            for n, i in enumerate(order):
                v |= parts[i] << (16 * n)
        else:
            raise Unimplemented(f"pmfhl fmt {fmt}")
        self.set128(rd, v)

    def _mmi0(self, sa, rs, rt, rd, pc):
        a, b = self.gpr[rs], self.gpr[rt]
        S = self.set128
        if sa in (0, 4, 8):
            bits = {0: 32, 4: 16, 8: 8}[sa]
            return S(rd, _lanes2(a, b, bits, lambda x, y: x + y))
        if sa in (1, 5, 9):
            bits = {1: 32, 5: 16, 9: 8}[sa]
            return S(rd, _lanes2(a, b, bits, lambda x, y: x - y))
        if sa in (2, 6, 10):
            bits = {2: 32, 6: 16, 10: 8}[sa]
            return S(rd, _lanes2(a, b, bits, lambda x, y: -1 if sx(x, bits) > sx(y, bits) else 0))
        if sa in (3, 7):
            bits = 32 if sa == 3 else 16
            return S(rd, _lanes2(a, b, bits, lambda x, y: x if sx(x, bits) >= sx(y, bits) else y))
        if sa in (16, 20, 24):
            bits = {16: 32, 20: 16, 24: 8}[sa]
            return S(rd, _lanes2(a, b, bits, lambda x, y: _sat(sx(x, bits) + sx(y, bits), bits)))
        if sa in (17, 21, 25):
            bits = {17: 32, 21: 16, 25: 8}[sa]
            return S(rd, _lanes2(a, b, bits, lambda x, y: _sat(sx(x, bits) - sx(y, bits), bits)))
        if sa in (18, 22, 26):                       # pextlw, pextlh, pextlb: interleave low halves
            bits = {18: 32, 22: 16, 26: 8}[sa]
            return S(rd, _interleave(a & M64, b & M64, bits))
        if sa in (19, 23, 27):                       # ppacw, ppach, ppacb
            bits = {19: 32, 23: 16, 27: 8}[sa]
            return S(rd, _pack_even(b, bits) | (_pack_even(a, bits) << 64))
        if sa == 30:                                 # pext5
            return S(rd, _lanes(b, 32, _pext5))
        if sa == 31:                                 # ppac5
            return S(rd, _lanes(b, 32, _ppac5))
        raise Unimplemented(f"mmi0 {sa} at {pc:08x}")

    def _mmi1(self, sa, rs, rt, rd, pc):
        a, b = self.gpr[rs], self.gpr[rt]
        S = self.set128
        if sa in (1, 5):                             # pabsw, pabsh
            bits = 32 if sa == 1 else 16
            return S(rd, _lanes(b, bits, lambda v: _absat(v, bits)))
        if sa in (2, 6, 10):
            bits = {2: 32, 6: 16, 10: 8}[sa]
            return S(rd, _lanes2(a, b, bits, lambda x, y: -1 if x == y else 0))
        if sa in (3, 7):
            bits = 32 if sa == 3 else 16
            return S(rd, _lanes2(a, b, bits, lambda x, y: x if sx(x, bits) <= sx(y, bits) else y))
        if sa == 4:                                  # padsbh
            out = 0
            for k in range(8):
                x, y = (a >> (16 * k)) & M16, (b >> (16 * k)) & M16
                out |= (((x - y) if k < 4 else (x + y)) & M16) << (16 * k)
            return S(rd, out)
        if sa in (16, 20, 24):
            bits = {16: 32, 20: 16, 24: 8}[sa]
            return S(rd, _lanes2(a, b, bits, lambda x, y: min(x + y, (1 << bits) - 1)))
        if sa in (17, 21, 25):
            bits = {17: 32, 21: 16, 25: 8}[sa]
            return S(rd, _lanes2(a, b, bits, lambda x, y: max(x - y, 0)))
        if sa in (18, 22, 26):                       # pextuw, pextuh, pextub
            bits = {18: 32, 22: 16, 26: 8}[sa]
            return S(rd, _interleave(a >> 64, b >> 64, bits))
        if sa == 27:                                 # qfsrv
            s = self.sa * 8
            return S(rd, (((a << 128) | b) >> s) & M128)
        raise Unimplemented(f"mmi1 {sa} at {pc:08x}")

    def _mmi2(self, sa, rs, rt, rd, pc):
        a, b = self.gpr[rs], self.gpr[rt]
        S = self.set128
        if sa in (0, 4):                             # pmaddw, pmsubw
            out = 0
            for k in range(2):
                x, y = sx((a >> (64 * k)) & M32, 32), sx((b >> (64 * k)) & M32, 32)
                acc = sx((((self.hi >> (64 * k)) & M32) << 32) | ((self.lo >> (64 * k)) & M32), 64)
                r = (acc + x * y) if sa == 0 else (acc - x * y)
                self._set_hilo(k, r & M64)
                out |= (r & M64) << (64 * k)
            return S(rd, out)
        if sa in (2, 3):                             # psllvw, psrlvw
            out = 0
            for k in range(2):
                w = (b >> (64 * k)) & M32
                s = (a >> (64 * k)) & 31
                r = (w << s) if sa == 2 else (w >> s)
                out |= sx64(r & M32) << (64 * k)
            return S(rd, out)
        if sa == 8:
            return S(rd, self.hi)
        if sa == 9:
            return S(rd, self.lo)
        if sa == 10:                                 # pinth
            out = 0
            for k in range(4):
                out |= ((b >> (16 * k)) & M16) << (32 * k)
                out |= ((a >> (64 + 16 * k)) & M16) << (32 * k + 16)
            return S(rd, out)
        if sa == 12:                                 # pmultw
            out = 0
            for k in range(2):
                p = sx((a >> (64 * k)) & M32, 32) * sx((b >> (64 * k)) & M32, 32)
                self._set_hilo(k, p & M64)
                out |= (p & M64) << (64 * k)
            return S(rd, out)
        if sa == 13:                                 # pdivw
            for k in range(2):
                self._div(k, True, (a >> (64 * k)) & M32, (b >> (64 * k)) & M32)
            return
        if sa == 14:                                 # pcpyld
            return S(rd, (b & M64) | ((a & M64) << 64))
        if sa in (16, 20, 17, 21, 28):               # pmaddh, pmsubh, phmadh, phmsbh, pmulth
            return self._pmh(sa, a, b, rd)
        if sa == 18:
            return S(rd, a & b)
        if sa == 19:
            return S(rd, a ^ b)
        if sa == 26:                                 # pexeh
            return S(rd, _perm16(b, [2, 1, 0, 3, 6, 5, 4, 7]))
        if sa == 27:                                 # prevh
            return S(rd, _perm16(b, [3, 2, 1, 0, 7, 6, 5, 4]))
        if sa == 29:                                 # pdivbw
            d = sx(b & M16, 16)
            for k in range(4):
                n = sx((a >> (32 * k)) & M32, 32)
                if d == 0:
                    q, r = (1 if n < 0 else -1), n
                elif n == -0x80000000 and d == -1:
                    q, r = -0x80000000, 0
                else:
                    q = abs(n) // abs(d) * (1 if (n < 0) == (d < 0) else -1)
                    r = n - q * d
                self._set_lane32(k, q, r)
            return
        if sa == 30:                                 # pexew
            return S(rd, _perm32(b, [2, 1, 0, 3]))
        if sa == 31:                                 # prot3w
            return S(rd, _perm32(b, [1, 2, 0, 3]))
        raise Unimplemented(f"mmi2 {sa} at {pc:08x}")

    def _set_lane32(self, k, lo_word, hi_word):
        sh = 32 * k
        self.lo = (self.lo & ~(M32 << sh) & M128) | ((lo_word & M32) << sh)
        self.hi = (self.hi & ~(M32 << sh) & M128) | ((hi_word & M32) << sh)

    def _pmh(self, sa, a, b, rd):
        """pmaddh/pmsubh/phmadh/phmsbh/pmulth: 16x16 products into the 32-bit lanes of HI/LO."""
        h = [sx((a >> (16 * k)) & M16, 16) * sx((b >> (16 * k)) & M16, 16) for k in range(8)]
        def lanew(reg, k):
            return sx((reg >> (32 * k)) & M32, 32)
        if sa in (16, 20, 28):
            # lanes: LO gets products 0,1,4,5 ; HI gets products 2,3,6,7 (per doubleword)
            sign = -1 if sa == 20 else 1
            lo_idx, hi_idx = [0, 1, 4, 5], [2, 3, 6, 7]
            new_lo = [(lanew(self.lo, n) if sa != 28 else 0) + sign * h[i] for n, i in enumerate(lo_idx)]
            new_hi = [(lanew(self.hi, n) if sa != 28 else 0) + sign * h[i] for n, i in enumerate(hi_idx)]
            self.lo = sum((v & M32) << (32 * n) for n, v in enumerate(new_lo))
            self.hi = sum((v & M32) << (32 * n) for n, v in enumerate(new_hi))
            out = [new_lo[0], new_hi[0], new_lo[2], new_hi[2]]
            return self.set128(rd, sum((v & M32) << (32 * n) for n, v in enumerate(out)))
        # phmadh / phmsbh: pairwise
        # each LO/HI doubleword: low word the pair's sum (difference), high word the odd product
        # (phmsbh stores it inverted)
        if sa == 17:
            s = [h[1] + h[0], h[3] + h[2], h[5] + h[4], h[7] + h[6]]
            odd = [h[1], h[3], h[5], h[7]]
        else:
            s = [h[1] - h[0], h[3] - h[2], h[5] - h[4], h[7] - h[6]]
            odd = [~h[1], ~h[3], ~h[5], ~h[7]]
        self.lo = (s[0] & M32) | ((odd[0] & M32) << 32) | ((s[2] & M32) << 64) | ((odd[2] & M32) << 96)
        self.hi = (s[1] & M32) | ((odd[1] & M32) << 32) | ((s[3] & M32) << 64) | ((odd[3] & M32) << 96)
        return self.set128(rd, sum((v & M32) << (32 * n) for n, v in enumerate(s)))

    def _mmi3(self, sa, rs, rt, rd, pc):
        a, b = self.gpr[rs], self.gpr[rt]
        S = self.set128
        if sa == 0:                                  # pmadduw
            out = 0
            for k in range(2):
                acc = (((self.hi >> (64 * k)) & M32) << 32) | ((self.lo >> (64 * k)) & M32)
                r = (acc + ((a >> (64 * k)) & M32) * ((b >> (64 * k)) & M32)) & M64
                self._set_hilo(k, r)
                out |= r << (64 * k)
            return S(rd, out)
        if sa == 3:                                  # psravw
            out = 0
            for k in range(2):
                w = sx((b >> (64 * k)) & M32, 32) >> ((a >> (64 * k)) & 31)
                out |= sx64(w & M32) << (64 * k)
            return S(rd, out)
        if sa == 8:
            self.hi = a
            return
        if sa == 9:
            self.lo = a
            return
        if sa == 10:                                 # pinteh
            out = 0
            for k in range(4):
                out |= ((b >> (32 * k)) & M16) << (32 * k)
                out |= ((a >> (32 * k)) & M16) << (32 * k + 16)
            return S(rd, out)
        if sa == 12:                                 # pmultuw
            out = 0
            for k in range(2):
                p = ((a >> (64 * k)) & M32) * ((b >> (64 * k)) & M32)
                self._set_hilo(k, p)
                out |= (p & M64) << (64 * k)
            return S(rd, out)
        if sa == 13:                                 # pdivuw
            for k in range(2):
                self._div(k, False, (a >> (64 * k)) & M32, (b >> (64 * k)) & M32)
            return
        if sa == 14:                                 # pcpyud
            return S(rd, (a >> 64) | ((b >> 64) << 64))
        if sa == 18:
            return S(rd, a | b)
        if sa == 19:
            return S(rd, ~(a | b) & M128)
        if sa == 26:                                 # pexch
            return S(rd, _perm16(b, [0, 2, 1, 3, 4, 6, 5, 7]))
        if sa == 27:                                 # pcpyh
            lo_h, hi_h = b & M16, (b >> 64) & M16
            return S(rd, sum(lo_h << (16 * k) for k in range(4)) | sum(hi_h << (64 + 16 * k) for k in range(4)))
        if sa == 30:                                 # pexcw
            return S(rd, _perm32(b, [0, 2, 1, 3]))
        raise Unimplemented(f"mmi3 {sa} at {pc:08x}")

    # ---- COP2: VU0 macro mode ---------------------------------------------------------------------

    def _cop2(self, x, rs, rt, rd, pc):
        if not x & (1 << 25):
            if rs == 1:                              # qmfc2
                v = self.vf[rd]
                return self.set128(rt, v[0] | (v[1] << 32) | (v[2] << 64) | (v[3] << 96))
            if rs == 2:                              # cfc2
                return self.set32(rt, self._vu_ctrl(rd))
            if rs == 5:                              # qmtc2
                if rd:
                    v = self.gpr[rt]
                    self.vf[rd] = [(v >> (32 * k)) & M32 for k in range(4)]
                return
            if rs == 6:                              # ctc2
                return self._vu_set_ctrl(rd, self.g32(rt))
            if rs == 8:                              # bc2f/bc2t: VU0 never busy in macro checks
                return self._branch(pc + 4 + (sx(x & 0xFFFF, 16) << 2), pc, likely=rt & 2, taken=not (rt & 1))
            raise Unimplemented(f"cop2 {rs} at {pc:08x}")
        dest = (x >> 21) & 0xF                       # bit 3 = x ... bit 0 = w
        ft, fs, fd = (x >> 16) & 31, (x >> 11) & 31, (x >> 6) & 31
        o = x & 0x3F
        if o < 0x3C:
            return self._vu_sp1(o, dest, ft, fs, fd, x, pc)
        return self._vu_sp2(((x >> 4) & 0x7C) | (x & 3), dest, ft, fs, x, pc)

    def _vu_ctrl(self, r):
        if r < 16:
            return self.vi[r]
        return {16: self.vu_status, 17: self.vu_mac, 18: self.vu_clip, 20: self.r, 21: self.i,
                22: self.q, 23: self.p}.get(r, 0)

    def _vu_set_ctrl(self, r, v):
        if 0 < r < 16:
            self.vi[r] = v & M16
        elif r == 16:
            self.vu_status = v & 0xFC0
        elif r == 18:
            self.vu_clip = v & 0xFFFFFF
        elif r == 20:
            self.r = (v & 0x7FFFFF) | 0x3F800000
        elif r == 21:
            self.i = v
        elif r == 22:
            self.q = v

    def _fields(self, dest):
        return [k for k in range(4) if dest & (8 >> k)]

    def _vwrite(self, fd, dest, vals, to_acc=False):
        tgt = self.vacc if to_acc else (self.vf[fd] if fd else None)
        if tgt is None:
            return
        for k in self._fields(dest):
            tgt[k] = int(vals[k])

    def _vu_sp1(self, o, dest, ft, fs, fd, x, pc):
        S, T = self.vf[fs], self.vf[ft]
        bc = x & 3
        if o < 0x1C or o in (0x1C, 0x1D, 0x1E, 0x1F) or 0x20 <= o <= 0x2F:
            group = None
            if o < 0x1C:
                group, src = o >> 2, [T[bc]] * 4
                op = {0: "add", 1: "sub", 2: "madd", 3: "msub", 4: "max", 5: "mini", 6: "mul"}[group]
            else:
                op, src = {
                    0x1C: ("mul", [self.q] * 4), 0x1D: ("max", [self.i] * 4), 0x1E: ("mul", [self.i] * 4),
                    0x1F: ("mini", [self.i] * 4), 0x20: ("add", [self.q] * 4), 0x21: ("madd", [self.q] * 4),
                    0x22: ("add", [self.i] * 4), 0x23: ("madd", [self.i] * 4), 0x24: ("sub", [self.q] * 4),
                    0x25: ("msub", [self.q] * 4), 0x26: ("sub", [self.i] * 4), 0x27: ("msub", [self.i] * 4),
                    0x28: ("add", T), 0x29: ("madd", T), 0x2A: ("mul", T), 0x2B: ("max", T),
                    0x2C: ("sub", T), 0x2D: ("msub", T), 0x2F: ("mini", T),
                }.get(o, (None, None))
                if o == 0x2E:                        # vopmsub: fd = ACC - fs.yzx * ft.zxy (xyz only)
                    r = list(self.vf[fd])
                    pairs = [(1, 2), (2, 0), (0, 1)]
                    for k, (i, j) in enumerate(pairs):
                        r[k] = int(F.msub(self.vacc[k], S[i], T[j]))
                    return self._vwrite(fd, 0xE, r)
            return self._vu_arith(op, dest, S, src, fd)
        if o == 0x30:                                # viadd
            return self._vi_set(fd & 15, self.vi[fs & 15] + self.vi[ft & 15])
        if o == 0x31:
            return self._vi_set(fd & 15, self.vi[fs & 15] - self.vi[ft & 15])
        if o == 0x32:                                # viaddi: imm5 in fd field
            return self._vi_set(ft & 15, self.vi[fs & 15] + sx(fd, 5))
        if o == 0x34:
            return self._vi_set(fd & 15, self.vi[fs & 15] & self.vi[ft & 15])
        if o == 0x35:
            return self._vi_set(fd & 15, self.vi[fs & 15] | self.vi[ft & 15])
        if o in (0x38, 0x39):
            raise Unimplemented(f"vcallms (VU0 micro program) at {pc:08x}")
        raise Unimplemented(f"vu0 special1 {o:#x} at {pc:08x}")

    def _vi_set(self, r, v):
        if r:
            self.vi[r] = v & M16

    def _vu_arith(self, op, dest, S, src, fd, to_acc=False):
        r = [0, 0, 0, 0]
        for k in self._fields(dest):
            a, b = S[k], src[k]
            if op == "add":
                r[k] = F.add(a, b)
            elif op == "sub":
                r[k] = F.sub(a, b)
            elif op == "mul":
                r[k] = F.mul(a, b)
            elif op == "madd":
                r[k] = F.madd(self.vacc[k], a, b)
            elif op == "msub":
                r[k] = F.msub(self.vacc[k], a, b)
            elif op == "max":
                r[k] = F.max_(a, b)
            elif op == "mini":
                r[k] = F.min_(a, b)
            else:
                raise Unimplemented(f"vu op {op}")
        self._vwrite(fd, dest, r, to_acc)

    def _vu_sp2(self, o, dest, ft, fs, x, pc):
        S, T = self.vf[fs], self.vf[ft]
        bc = x & 3
        acc_ops = {0x00: "add", 0x01: "add", 0x02: "add", 0x03: "add", 0x04: "sub", 0x05: "sub",
                   0x06: "sub", 0x07: "sub", 0x08: "madd", 0x09: "madd", 0x0A: "madd", 0x0B: "madd",
                   0x0C: "msub", 0x0D: "msub", 0x0E: "msub", 0x0F: "msub", 0x18: "mul", 0x19: "mul",
                   0x1A: "mul", 0x1B: "mul"}
        if o in acc_ops:
            return self._vu_arith(acc_ops[o], dest, S, [T[bc]] * 4, 0, to_acc=True)
        other = {0x1C: ("mul", self.q), 0x1E: ("mul", self.i), 0x20: ("add", self.q), 0x21: ("madd", self.q),
                 0x22: ("add", self.i), 0x23: ("madd", self.i), 0x24: ("sub", self.q), 0x25: ("msub", self.q),
                 0x26: ("sub", self.i), 0x27: ("msub", self.i)}
        if o in other:
            op, v = other[o]
            return self._vu_arith(op, dest, S, [v] * 4, 0, to_acc=True)
        vec = {0x28: "add", 0x29: "madd", 0x2A: "mul", 0x2C: "sub", 0x2D: "msub"}
        if o in vec:
            return self._vu_arith(vec[o], dest, S, T, 0, to_acc=True)
        if 0x10 <= o <= 0x13:                        # vitof0/4/12/15
            n = (0, 4, 12, 15)[o - 0x10]
            r = [_itof(v, n) for v in S]
            return self._vwrite(ft, dest, r)
        if 0x14 <= o <= 0x17:                        # vftoi0/4/12/15
            n = (0, 4, 12, 15)[o - 0x14]
            r = [_ftoi(v, n) for v in S]
            return self._vwrite(ft, dest, r)
        if o == 0x1D:                                # vabs
            return self._vwrite(ft, dest, [v & 0x7FFFFFFF for v in S])
        if o == 0x1F:                                # vclipw: clip flags from fs.xyz against |ft.w|
            w = T[3] & 0x7FFFFFFF
            flags = 0
            for k in range(3):
                v = S[k]
                if F._order(v) > F._order(w):
                    flags |= 1 << (2 * k)
                if F._order(v) < F._order(w | 0x80000000):
                    flags |= 1 << (2 * k + 1)
            self.vu_clip = ((self.vu_clip << 6) | flags) & 0xFFFFFF
            return
        if o == 0x2E:                                # vopmula: ACC = fs.yzx * ft.zxy
            pairs = [(1, 2), (2, 0), (0, 1)]
            for k, (i, j) in enumerate(pairs):
                self.vacc[k] = int(F.mul(S[i], T[j]))
            return
        if o == 0x2F:                                # vnop
            return
        if o == 0x30:                                # vmove
            return self._vwrite(ft, dest, list(S))
        if o == 0x31:                                # vmr32
            return self._vwrite(ft, dest, [S[1], S[2], S[3], S[0]])
        if o in (0x34, 0x35, 0x36, 0x37):            # vlqi, vsqi, vlqd, vsqd (VU0 data memory)
            raise Unimplemented(f"vu0 data memory access at {pc:08x}")
        if o in (0x38, 0x39, 0x3A):                  # vdiv, vsqrt, vrsqrt
            fsf, ftf = (x >> 21) & 3, (x >> 23) & 3
            if o == 0x38:
                self.q = int(F.div(S[fsf], T[ftf]))
            elif o == 0x39:
                self.q = int(F.sqrt(T[ftf] & 0x7FFFFFFF))
            else:
                self.q = int(F.rsqrt(S[fsf], T[ftf]))
            return
        if o == 0x3B:                                # vwaitq
            return
        if o == 0x3C:                                # vmtir: vi[it] = fs.fsf
            fsf = (x >> 21) & 3
            return self._vi_set(ft & 15, S[fsf])
        if o == 0x3D:                                # vmfir: ft = sign-extended vi[is]
            v = sx(self.vi[fs & 15], 16) & M32
            return self._vwrite(ft, dest, [v] * 4)
        if o in (0x3E, 0x3F):
            raise Unimplemented(f"vu0 ilwr/iswr at {pc:08x}")
        if o == 0x40:                                # vrnext
            r = self.r & 0x7FFFFF
            x0 = ((r >> 4) & 1) ^ ((r >> 22) & 1)
            self.r = (((r << 1) | x0) & 0x7FFFFF) | 0x3F800000
            return self._vwrite(ft, dest, [self.r] * 4)
        if o == 0x41:                                # vrget
            return self._vwrite(ft, dest, [self.r] * 4)
        if o == 0x42:                                # vrinit
            fsf = (x >> 21) & 3
            self.r = (S[fsf] & 0x7FFFFF) | 0x3F800000
            return
        if o == 0x43:                                # vrxor
            fsf = (x >> 21) & 3
            self.r = ((self.r ^ S[fsf]) & 0x7FFFFF) | 0x3F800000
            return
        raise Unimplemented(f"vu0 special2 {o:#x} at {pc:08x}")


# ---- lane helpers ---------------------------------------------------------------------------------

def _lanes(v, bits, f):
    m = (1 << bits) - 1
    out = 0
    for k in range(128 // bits):
        out |= (f((v >> (bits * k)) & m) & m) << (bits * k)
    return out


def _lanes2(a, b, bits, f):
    m = (1 << bits) - 1
    out = 0
    for k in range(128 // bits):
        out |= (f((a >> (bits * k)) & m, (b >> (bits * k)) & m) & m) << (bits * k)
    return out


def _sat(v, bits):
    lo, hi = -(1 << (bits - 1)), (1 << (bits - 1)) - 1
    return max(lo, min(hi, v))


def _absat(v, bits):
    s = sx(v, bits)
    if s == -(1 << (bits - 1)):
        return (1 << (bits - 1)) - 1
    return abs(s)


def _shift(v, s, kind, bits):
    if kind == 0:
        return v << s
    if kind == 1:
        return v >> s
    return sx(v, bits) >> s


def _interleave(a64, b64, bits):
    """pextl*/pextu*: alternate lanes of b (even) and a (odd) from 64-bit halves."""
    m = (1 << bits) - 1
    out = 0
    n = 64 // bits
    for k in range(n):
        out |= ((b64 >> (bits * k)) & m) << (2 * bits * k)
        out |= ((a64 >> (bits * k)) & m) << (2 * bits * k + bits)
    return out


def _pack_even(v, bits):
    """ppac*: the even-numbered half-width lanes of a 128-bit value, packed into 64 bits."""
    m = (1 << bits) - 1
    out = 0
    n = 128 // (2 * bits)
    for k in range(n):
        out |= ((v >> (2 * bits * k)) & m) << (bits * k)
    return out


def _perm16(v, order):
    return sum(((v >> (16 * src)) & M16) << (16 * dst) for dst, src in enumerate(order))


def _perm32(v, order):
    return sum(((v >> (32 * src)) & M32) << (32 * dst) for dst, src in enumerate(order))


def _pext5(w):
    r = (w & 0x1F) << 3
    g = ((w >> 5) & 0x1F) << 3
    b = ((w >> 10) & 0x1F) << 3
    a = 0x80 if w & 0x8000 else 0
    return r | (g << 8) | (b << 16) | (a << 24)


def _ppac5(w):
    r = (w >> 3) & 0x1F
    g = (w >> 11) & 0x1F
    b = (w >> 19) & 0x1F
    a = 1 if w & 0x80000000 else 0
    return r | (g << 5) | (b << 10) | (a << 15)


def _itof(v, n):
    """VU itof: signed 32-bit fixed point with n fraction bits -> float (truncating)."""
    v = sx(v, 32)
    if v == 0:
        return 0
    s = 1 if v < 0 else 0
    a = -v if s else v
    nb = a.bit_length()
    m = a >> (nb - 24) if nb > 24 else a << (24 - nb)
    e = nb - 1 - n + 127
    return (s << 31) | (e << 23) | (m & 0x7FFFFF)


def _ftoi(f, n):
    """VU ftoi: float -> signed 32-bit fixed point with n fraction bits, truncating, saturating."""
    e = (f >> 23) & 0xFF
    if e == 0:
        return 0
    m = (f & 0x7FFFFF) | 0x800000
    sh = e - 150 + n
    v = m << sh if sh >= 0 else m >> -sh
    if f & 0x80000000:
        return 0x80000000 if v >= 0x80000000 else (-v) & M32
    return 0x7FFFFFFF if v >= 0x80000000 else v
