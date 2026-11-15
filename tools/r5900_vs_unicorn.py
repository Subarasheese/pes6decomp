#!/usr/bin/env python3
"""Cross-check tools/r5900sim.py against Unicorn on real game functions (control flow, loads/stores).

    ./run.sh python tools/r5900_vs_unicorn.py [--limit N] [--seed S] [-v]

The hardware results (tools/r5900_check.py, tools/ee_float_check.py) cover instructions one at a time.
This covers what they do not: branches, delay slots, branch-likely, jump tables, unaligned and
partial loads and stores, all in real compiled code. Unicorn is a mature MIPS emulator, correct for
the standard MIPS64 instructions, so the check is restricted to leaf functions of the resident
executable that use only those: no MMI, FPU, VU0, lq/sq, EE three-operand mult/div, SA, syscalls or
calls out. Each function runs in both from the same memory image and random registers (argument
registers point into a shared random-filled buffer); every GPR, HI/LO and every memory write must agree.
"""
import os
import random
import struct
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
os.chdir(os.path.dirname(HERE))
import r5900sim as S  # noqa: E402
from unicorn import Uc, UC_ARCH_MIPS, UC_MODE_MIPS64, UC_MODE_LITTLE_ENDIAN, UcError, UC_HOOK_MEM_WRITE, UC_HOOK_CODE  # noqa: E402
from unicorn import mips_const as MC  # noqa: E402

BASE, END = 0x100000, 0x372AE0
BUF = 0x01C00000          # shared random buffer the pointer arguments aim at
BUFSZ = 0x40000
STOP = S.SENTINEL
M64 = (1 << 64) - 1


def functions():
    import csv
    starts = sorted(int(r["address"], 16) for r in csv.DictReader(open("build/functions.csv")))
    return [s for s in starts if BASE <= s < END], starts


def plain(words, start, end):
    """True if the function uses only instructions Unicorn executes like the EE, and calls nothing."""
    for i, x in enumerate(words):
        op = x >> 26
        if op in (0x10, 0x11, 0x12, 0x1C, 0x1E, 0x1F, 0x31, 0x36, 0x39, 0x3E, 0x2F, 0x33, 3):
            return False
        if op == 0:
            fn = x & 0x3F
            if fn in (12, 13, 9, 40, 41) or (fn in (24, 25, 26, 27) and (x >> 11) & 31):
                return False
            if fn == 15:
                return False
        if op == 1 and ((x >> 16) & 31) in (16, 17, 18, 19, 24, 25):
            return False
        if op == 2:
            t = ((start + 4 * i + 4) & 0xF0000000) | ((x & 0x3FFFFFF) << 2)
            if not start <= t < end:
                return False
    return True


def main():
    limit = int(sys.argv[sys.argv.index("--limit") + 1]) if "--limit" in sys.argv else 3000
    seed = int(sys.argv[sys.argv.index("--seed") + 1]) if "--seed" in sys.argv else 1
    verbose = "-v" in sys.argv
    raw = open("orig/SLES_542.03", "rb").read()
    image = raw[2048:]
    funcs, starts = functions()
    rng = random.Random(seed)
    cand = []
    for k, f in enumerate(funcs):
        i = starts.index(f)
        end = starts[i + 1] if i + 1 < len(starts) else END
        ws = list(struct.unpack_from(f"<{(end - f) // 4}I", image, f - BASE))
        if ws and plain(ws, f, end):
            cand.append(f)
    rng.shuffle(cand)
    cand = cand[:limit]
    if "--only" in sys.argv:
        only = {int(x, 16) for x in sys.argv[sys.argv.index("--only") + 1].split(",")}
        cand = [f for f in cand if f in only]

    m = S.Machine()
    m.mirrors = "kseg"                # Unicorn maps kseg0/kseg1 onto RAM but not the EE's other mirrors
    m.load(BASE, image[: 0x1C00000 - BASE])
    # the buffer holds words that are small values or pointers back into it, so whatever the code
    # loads and dereferences stays inside RAM (the two emulators map kernel segments differently)
    def word():
        r = rng.random()
        if r < 0.45:
            return rng.getrandbits(16)
        if r < 0.9:
            return BUF + 0x8000 + (rng.randrange(0, BUFSZ - 0x10000) & ~15)
        return rng.getrandbits(32) & 0x00FFFFFF
    buf = b"".join(struct.pack("<I", word()) for _ in range(BUFSZ // 4))
    snapshot_main = bytes(m.mem)

    agree = disagree = both_fault = 0
    report = []
    for f in cand:
        regs = [0] * 32
        for r in range(1, 32):
            regs[r] = rng.getrandbits(16) if rng.random() < 0.5 else BUF + 0x8000 + (rng.randrange(0, BUFSZ - 0x10000) & ~15)
        regs[28] = 0x3EF370
        regs[29] = 0x01E00000
        regs[31] = STOP
        hi, lo = rng.getrandbits(64), rng.getrandbits(64)

        # simulator
        m.mem[:] = snapshot_main
        m.mem[BUF:BUF + BUFSZ] = buf
        m.reset_regs()
        m.writes.clear()
        m.covered.clear()
        for r in range(32):
            m.gpr[r] = regs[r]
        m.hi, m.lo = hi, lo
        sim_err = None
        try:
            res = m.call(f, ra=STOP, max_steps=20000)
            if res.reason != "returned":
                sim_err = res.reason
        except (S.Fault, S.Unimplemented) as e:
            sim_err = str(e)

        # unicorn
        # a fresh instance each time: after a CPU exception Unicorn stays in exception mode
        uc = Uc(UC_ARCH_MIPS, UC_MODE_MIPS64 | UC_MODE_LITTLE_ENDIAN)
        uc.ctl_set_cpu_model(MC.UC_CPU_MIPS64_VR5432)     # MIPS IV: movn/movz, like the EE
        uc.mem_map(0, 0x2000000)
        uc.mem_write(BASE, image[: 0x1C00000 - BASE])
        uc.mem_write(BUF, buf)
        for r in range(32):
            uc.reg_write(MC.UC_MIPS_REG_0 + r, regs[r])
        uc.reg_write(MC.UC_MIPS_REG_HI, hi)
        uc.reg_write(MC.UC_MIPS_REG_LO, lo)
        uwrites = []
        h = uc.hook_add(UC_HOOK_MEM_WRITE, lambda u, a, ad, sz, v, _: uwrites.append((ad & 0xFFFFFFFF, sz, v & ((1 << (8 * sz)) - 1))))
        uc_err = None
        trail = []
        def on_code(u, a, s, _):
            trail.append(a)
            if len(trail) > 6:
                del trail[0]
        hc = uc.hook_add(UC_HOOK_CODE, on_code)
        last = trail
        try:
            uc.emu_start(f, STOP, count=20000)
            if uc.reg_read(MC.UC_MIPS_REG_PC) != STOP:
                uc_err = "step limit"
        except UcError as e:
            pc = last[-1] if last else 0
            w = struct.unpack_from("<I", image, pc - BASE)[0] if BASE <= pc < END else 0
            uc_err = f"{e} at {pc:08x} ({w:08x}) after {' '.join(f'{x:x}' for x in last[:-1])}"
        uc.hook_del(h)
        uc.hook_del(hc)

        if sim_err or uc_err:
            if sim_err and uc_err:
                both_fault += 1
            else:
                disagree += 1
                report.append(f"{f:08X} fault: sim={sim_err} unicorn={uc_err}")
            continue
        diffs = []
        for r in range(1, 32):
            a, b = m.gpr[r] & M64, uc.reg_read(MC.UC_MIPS_REG_0 + r) & M64
            if a != b:
                diffs.append(f"r{r} {a:016x}/{b:016x}")
        if (m.hi & M64) != uc.reg_read(MC.UC_MIPS_REG_HI) & M64 or (m.lo & M64) != uc.reg_read(MC.UC_MIPS_REG_LO) & M64:
            diffs.append("hi/lo")
        # compare the final value of every byte either side wrote (partial stores are logged differently)
        def final(ws):
            out = {}
            for a, sz, v in ws:
                for k in range(sz):
                    out[(a + k) & 0xFFFFFFFF] = (v >> (8 * k)) & 0xFF
            return out
        fs, fu = final(m.writes), final(uwrites)
        if fs != fu:
            bad = sorted(a for a in set(fs) | set(fu) if fs.get(a) != fu.get(a))
            diffs.append(f"memory differs at {len(bad)} bytes from {bad[0]:08x}")
        if diffs:
            disagree += 1
            report.append(f"{f:08X} " + ", ".join(diffs[:4]))
        else:
            agree += 1
    print(f"{len(cand)} plain leaf functions: {agree} agree, {disagree} disagree, {both_fault} fault in both")
    for line in report[: (len(report) if verbose else 25)]:
        print("  ", line)
    return 1 if disagree else 0


if __name__ == "__main__":
    sys.exit(main())
