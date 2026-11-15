#!/usr/bin/env python3
"""Check tools/r5900sim.py instruction by instruction against real PS2 hardware results.

    python3 tools/r5900_check.py PS2AUTOTESTS_DIR [-v]

ps2autotests (https://github.com/unknownbrackets/ps2autotests, ISC licence) records what a real PS2
computed for each 128-bit multimedia (MMI) instruction (tests/cpu/ee_simd/*.expected). For every line
the instruction is assembled with GNU as (-march=r5900), its operands are put in registers the way the
test program did, it runs in the simulator, and the result register (and HI/LO where the test prints
them) must equal the hardware's. The FPU is checked separately by tools/ee_float_check.py.
"""
import os
import re
import subprocess
import sys
import tempfile

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import r5900sim as S  # noqa: E402

AS = "mips-linux-gnu-as"
M64 = (1 << 64) - 1
C_HILO = {"C_HILO": (0x0123456789ABCDEF, 0x123456789ABCDEF0, 0x23456789ABCDEF01, 0x456789ABCDEF0123),
          "C_HILO_ZERO": (0, 0, 0, 0),
          "C_HILO_PATTERN": (0, 0x10001234, 0, 0xF000ABCD)}       # hi, lo, hi1, lo1
SHIFT_IMM = {"psllh", "psrlh", "psrah", "psllw", "psrlw", "psraw"}
UNARY = {"pabsh", "pabsw", "plzcw", "pcpyh", "pexch", "pexcw", "pexeh", "pexew", "pext5", "ppac5",
         "prevh", "prot3w"}
HILO_ONLY = {"pdivw", "pdivuw", "pdivbw"}


def constants(root):
    out = {}
    for fn in ("shared.h", "muldiv.cpp", "funnel.cpp", "shuffle.cpp", "logic.cpp", "arithmetic.cpp", "compare.cpp"):
        p = os.path.join(root, "tests/cpu/ee_simd", fn)
        if not os.path.exists(p):
            continue
        for m in re.finditer(r"\b(C_\w+)\[4\]\s*=\s*\{([^}]*)\}", open(p).read()):
            words = [int(w.strip(), 0) for w in m.group(2).split(",") if w.strip()]
            out[m.group(1)] = sum((w & 0xFFFFFFFF) << (32 * i) for i, w in enumerate(words))
    return out


def operand(tok, cf):
    tok = tok.strip()
    if tok in cf:
        return cf[tok]
    v = int(tok) & 0xFFFFFFFF
    v64 = S.sx64(v)                          # lui/ori sign-extends, pcpyld copies the low doubleword up
    return v64 | (v64 << 64)


def assemble(lines):
    with tempfile.TemporaryDirectory() as d:
        src = os.path.join(d, "t.s")
        open(src, "w").write(".set noreorder\n" + "\n".join(lines) + "\n")
        obj = os.path.join(d, "t.o")
        r = subprocess.run([AS, "-march=r5900", "-EL", src, "-o", obj], capture_output=True, text=True)
        if r.returncode:
            raise RuntimeError(r.stderr)
        b = subprocess.run(["mips-linux-gnu-objcopy", "-O", "binary", "-j", ".text", obj, "/dev/stdout"],
                           capture_output=True).stdout
    return [int.from_bytes(b[4 * i:4 * i + 4], "little") for i in range(len(lines))]


def asm_text(op, sa=None):
    if op in SHIFT_IMM:
        return f"{op} $3,$5,{sa}"
    if op in UNARY:
        return f"{op} $3,$5"
    if op in HILO_ONLY:
        return f"{op} $4,$5"
    if op.startswith("pmfhl") or op in ("pmfhi", "pmflo"):
        return f"{op} $3"
    if op in ("pmthi", "pmtlo", "pmthl.lw"):
        return f"{op} $4"
    return f"{op} $3,$4,$5"


def words(text):
    return [int(w, 16) for w in text.split()]


def run_case(m, ins, regs, hilo):
    m.reset_regs()
    m.writes.clear()
    for r, v in regs.items():
        m.gpr[r] = v
    hi, lo, hi1, lo1 = hilo
    m.hi, m.lo = hi | (hi1 << 64), lo | (lo1 << 64)
    m.pc, m.npc, m.cur = 0x1000, 0x1004, 0x1000
    m.exec(ins, 0x1000)
    return m


def check(root, verbose=False):
    cf = constants(root)
    cases = []
    for fn in ("arithmetic", "compare", "logic", "shuffle", "muldiv"):
        for line in open(os.path.join(root, "tests/cpu/ee_simd", fn + ".expected")):
            m = re.match(r"  (\S+) (.*?): ([0-9a-f ]+?)(?: H: ([0-9a-f]+) ([0-9a-f]+) L: ([0-9a-f]+) ([0-9a-f]+))?$",
                         line.rstrip())
            hl_only = re.match(r"  (\S+) (.*?): H: ([0-9a-f]+) ([0-9a-f]+) L: ([0-9a-f]+) ([0-9a-f]+)$", line.rstrip())
            if hl_only:
                op, args = hl_only.group(1), hl_only.group(2)
                rd_words, hl = None, tuple(int(hl_only.group(i), 16) for i in (3, 4, 5, 6))
            elif m:
                op, args = m.group(1), m.group(2)
                rd_words = words(m.group(3))
                hl = tuple(int(m.group(i), 16) for i in (4, 5, 6, 7)) if m.group(4) else None
            else:
                continue
            cases.append((fn, line.rstrip(), op, args, rd_words, hl))

    texts = []
    plans = []
    for fn, line, op, args, rd_words, hl in cases:
        init = C_HILO["C_HILO"]
        # the destination's starting value: 0x1337 for integer operands, C_GARBAGE1 for named ones
        regs = {3: cf["C_GARBAGE1"] if re.search(r"\bC_", args) else 0x1337 | (0x1337 << 64)}
        sa = None
        mh = re.match(r"(.*) \((C_HILO\w*)\)$", args)
        if mh:
            args, init = mh.group(1), C_HILO[mh.group(2)]
        parts = [p for p in args.split(", ")] if args and args.strip() != "-> $0" else []
        try:
            if op in SHIFT_IMM:
                regs[5] = operand(parts[0], cf)
                sa = int(parts[1])
            elif op in UNARY:
                regs[5] = operand(parts[0], cf)
            elif op.startswith("pmfhl") or op in ("pmfhi", "pmflo"):
                pass
            elif op in ("pmthi", "pmtlo", "pmthl.lw"):
                regs[4] = operand(parts[0], cf)
            else:
                regs[4], regs[5] = operand(parts[0], cf), operand(parts[1], cf)
        except (ValueError, IndexError):
            continue
        text = asm_text(op, sa)
        zero_dest = args.strip() == "-> $0"          # the test writes $0, which must stay zero
        if zero_dest:
            text = text.replace("$3", "$0", 1)
        texts.append(text)
        plans.append((fn, line, op, regs, init, rd_words, hl, zero_dest))
    code = assemble(texts)

    m = S.Machine()
    tot, bad = 0, []
    for ins, (fn, line, op, regs, init, rd_words, hl, zero_dest) in zip(code, plans):
        tot += 1
        try:
            run_case(m, ins, regs, init)
        except S.Unimplemented as e:
            bad.append((fn, line, f"unimplemented: {e}"))
            continue
        got = []
        dest = None if (op in ("pmthi", "pmtlo", "pmthl.lw") or op in HILO_ONLY) else 0 if zero_dest else 3
        ok = True
        if rd_words is not None and dest is not None:
            v = m.gpr[dest]
            g = [(v >> (32 * k)) & 0xFFFFFFFF for k in (3, 2, 1, 0)]
            got.append(" ".join(f"{w:08x}" for w in g))
            ok &= g == rd_words
        if hl is not None:
            g = (m.hi & M64, m.hi >> 64, m.lo & M64, m.lo >> 64)
            got.append("H: %016x %016x L: %016x %016x" % g)
            ok &= g == hl
        if not ok:
            bad.append((fn, line, "got " + " ".join(got)))
    return tot, bad


ALU_IMM = {"addiu", "andi", "ori", "xori", "slti", "sltiu", "daddiu"}
ALU_SHIFT = {"sll", "srl", "sra", "dsll", "dsrl", "dsra", "dsll32", "dsrl32", "dsra32"}
DIVS = {"div", "divu", "div1", "divu1"}
HILO_MOVES_FROM = {"mfhi", "mflo", "mfhi1", "mflo1"}
HILO_MOVES_TO = {"mthi", "mtlo", "mthi1", "mtlo1"}


def check_ee(root):
    """tests/cpu/ee: ALU (low 64 bits compared: the upper half holds whatever the register had) and
    multiply/divide with HI/LO and HI1/LO1."""
    gar1 = constants(root)["C_GARBAGE1"]
    cf = {}
    for m_ in re.finditer(r"\b(C_\w+)\[4\]\s*=\s*\{([^}]*)\}", open(os.path.join(root, "tests/cpu/ee/shared.h")).read()):
        ws = [int(w.strip(), 0) for w in m_.group(2).split(",") if w.strip()]
        cf[m_.group(1)] = sum((w & 0xFFFFFFFF) << (32 * i) for i, w in enumerate(ws))

    def opnd(tok):
        tok = tok.strip()
        return cf[tok] if tok in cf else S.sx64(int(tok) & 0xFFFFFFFF)

    plans, texts = [], []
    for fn in ("alu", "muldiv"):
        for line in open(os.path.join(root, "tests/cpu/ee", fn + ".expected")):
            line = line.rstrip()
            m = re.match(r"  (\S+) (.*?): ?([0-9a-f ]*?)\s*(?:H: ([0-9a-f]+) ([0-9a-f]+) L: ([0-9a-f]+) ([0-9a-f]+))?$", line)
            if not m or m.group(1).endswith(":"):
                continue
            op, args = m.group(1), m.group(2)
            rdw = words(m.group(3)) if m.group(3).strip() else None
            hl = tuple(int(m.group(i), 16) for i in (4, 5, 6, 7)) if m.group(4) else None
            zero_dest = args.strip() == "-> $0"
            parts = args.split(", ") if args and not zero_dest else []
            # the destination's starting value: SET_U32<0x1337> (low half) for integer operands, C_GARBAGE1 for named
            regs = {3: gar1 if re.search(r"\bC_", args) else (gar1 & ~M64) | 0x1337}
            try:
                if op == "lui":
                    text = f"lui $3,{int(parts[0]) & 0xFFFF}"
                elif op in ALU_IMM:
                    regs[4] = opnd(parts[0])
                    text = f"{op} $3,$4,{int(parts[1])}"
                elif op in ALU_SHIFT:
                    regs[4] = opnd(parts[0])
                    text = f"{op} $3,$4,{int(parts[1])}"
                elif op in DIVS:
                    regs[4], regs[5] = opnd(parts[0]), opnd(parts[1])
                    text = f"{op} $0,$4,$5"
                elif op in HILO_MOVES_FROM:
                    text = f"{op} $0" if zero_dest else f"{op} $3"
                elif op in HILO_MOVES_TO:
                    regs[4] = opnd(parts[0])
                    text = f"{op} $4"
                else:
                    regs[4], regs[5] = opnd(parts[0]), opnd(parts[1])
                    text = f"{op} $3,$4,$5"
            except (ValueError, IndexError, KeyError):
                continue
            texts.append(text)
            plans.append((fn, line, op, regs, rdw, hl, zero_dest))
    code = assemble(texts)
    m = S.Machine()
    tot, bad = 0, []
    for ins, (fn, line, op, regs, rdw, hl, zero_dest) in zip(code, plans):
        tot += 1
        try:
            run_case(m, ins, regs, C_HILO["C_HILO"])
        except S.Unimplemented as e:
            bad.append((fn, line, f"unimplemented: {e}"))
            continue
        ok, got = True, []
        if rdw and op not in DIVS and op not in HILO_MOVES_TO:
            v = m.gpr[0 if zero_dest else 3] & M64
            g = [(v >> 32) & 0xFFFFFFFF, v & 0xFFFFFFFF]
            got.append(" ".join(f"{w:08x}" for w in g))
            ok &= g == rdw[2:]
        if hl is not None:
            g = (m.hi & M64, m.hi >> 64, m.lo & M64, m.lo >> 64)
            got.append("H: %016x %016x L: %016x %016x" % g)
            ok &= g == hl
        if not ok:
            bad.append((fn, line, "got " + " ".join(got)))
    return tot, bad


def check_branch(root):
    """tests/cpu/ee/branch: for each branch and operands, was it followed, did it set $ra, did the
    delay slot run (branch-likely skips it when not taken). Runs the test's own instruction sequence."""
    cf = {}
    for m_ in re.finditer(r"\b(C_\w+)\[4\]\s*=\s*\{([^}]*)\}", open(os.path.join(root, "tests/cpu/ee/shared.h")).read()):
        ws = [int(w.strip(), 0) for w in m_.group(2).split(",") if w.strip()]
        cf[m_.group(1)] = sum((w & 0xFFFFFFFF) << (32 * i) for i, w in enumerate(ws))

    def opnd(tok):
        tok = tok.strip()
        return cf[tok] if tok in cf else S.sx64(int(tok) & 0xFFFFFFFF)

    two = {"beq", "bne", "beql", "bnel"}
    progs = {}
    m = S.Machine()
    tot, bad = 0, []
    for line in open(os.path.join(root, "tests/cpu/ee/branch.expected")):
        line = line.rstrip()
        mm = re.match(r"  (\S+) (.*?): (followed|skipped), (set|ignored) ra, (ran|skipped) delay slot$", line)
        if not mm:
            continue
        op, args = mm.group(1), mm.group(2)
        want = (mm.group(3) == "followed", mm.group(4) == "set", mm.group(5) == "ran")
        if op not in progs:
            br = f"{op} $4,$5,1f" if op in two else f"{op} $4,1f"
            src = ["lui $2,0", "or $25,$0,$31", br, "ori $2,$2,4", "b 2f", "nop",
                   "1: ori $2,$2,1", "2: beq $25,$31,3f", "nop", "or $31,$0,$25", "ori $2,$2,2", "3: jr $31", "nop"]
            progs[op] = assemble(src)
        parts = args.split(", ")
        m.reset_regs()
        m.gpr[4] = opnd(parts[0])
        if op in two:
            m.gpr[5] = opnd(parts[1])
        code = b"".join(w.to_bytes(4, "little") for w in progs[op])
        m.load(0x1000, code)
        tot += 1
        m.call(0x1000, max_steps=100)
        r = m.gpr[2] & 0xFFFFFFFF
        got = (bool(r & 1), bool(r & 2), bool(r & 4))
        if got != want:
            bad.append(("branch", line, f"got followed={got[0]} ra={got[1]} slot={got[2]}"))
    return tot, bad


def main():
    root = sys.argv[1]
    rc = 0
    for name, fn in (("MMI", check), ("EE integer", check_ee), ("Branches", check_branch)):
        tot, bad = fn(root)
        print(f"{name}: {tot - len(bad)}/{tot} results agree with the hardware, {len(bad)} differ")
        for b in bad[: (len(bad) if "-v" in sys.argv else 20)]:
            print("  ", *b)
        rc |= bool(bad)
    return rc


if __name__ == "__main__":
    sys.exit(main())
