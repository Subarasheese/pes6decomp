"""tools/lift.py's multimedia (MMI) instructions against the R5900's definitions: each instruction is
encoded, lifted, compiled with the host compiler and run on random 128-bit registers; the result must be
what the instruction does to the four 32-bit words (eight halfwords, sixteen bytes) of each register."""
import os
import random
import shutil
import subprocess
import tempfile
import unittest

import lift

RS, RT, RD = 4, 5, 6                                          # a0, a1, a2


def encode(group_fn, sa, rs=RS, rt=RT, rd=RD):
    return (28 << 26) | (rs << 21) | (rt << 16) | (rd << 11) | (sa << 6) | group_fn


MMI0, MMI1, MMI3 = 8, 40, 41
CASES = {                                                     # mnemonic: (word, model over 128-bit ints)
    "pextuw": (encode(MMI1, 0x12), lambda s, t, sa: words([w(t, 2), w(s, 2), w(t, 3), w(s, 3)])),
    "pcpyud": (encode(MMI3, 0x0E), lambda s, t, sa: (s >> 64) | ((t >> 64) << 64)),
    "pcpyh": (encode(MMI3, 0x1B, rs=0), lambda s, t, sa: lanes([h(t, 0)] * 4 + [h(t, 4)] * 4, 16)),
    "psubb": (encode(MMI0, 0x09), lambda s, t, sa: lanes([lane(s, i, 8) - lane(t, i, 8) for i in range(16)], 8)),
    "psubw": (encode(MMI0, 0x01), lambda s, t, sa: lanes([w(s, i) - w(t, i) for i in range(4)], 32)),
    "paddh": (encode(MMI0, 0x04), lambda s, t, sa: lanes([h(s, i) + h(t, i) for i in range(8)], 16)),
    "pminh": (encode(MMI1, 0x07), lambda s, t, sa: lanes([min(sh(s, i), sh(t, i)) for i in range(8)], 16)),
    "psrlh": ((28 << 26) | (RT << 16) | (RD << 11) | (5 << 6) | 0x36, lambda s, t, sa: lanes([h(t, i) >> 5 for i in range(8)], 16)),
}


def lane(v, i, bits):
    return (v >> (bits * i)) & ((1 << bits) - 1)


def w(v, i):
    return lane(v, i, 32)


def h(v, i):
    return lane(v, i, 16)


def sh(v, i):
    x = h(v, i)
    return x - 0x10000 if x & 0x8000 else x


def lanes(vals, bits):
    out = 0
    for i, x in enumerate(vals):
        out |= (x & ((1 << bits) - 1)) << (bits * i)
    return out


def words(vals):
    return lanes(vals, 32)


def lifter():
    """A Lifter with only the register bookkeeping mmi() uses."""
    L = object.__new__(lift.Lifter)
    L.reads, L.writes, L.used_g, L.q_valid, L.uses_q = set(), set(), set(), set(), set()
    L.uses_hilo = L.uses_hilo1 = False
    return L


HARNESS = """#include <stdio.h>
#include <stdint.h>
typedef int64_t s64; typedef uint64_t u64; typedef int32_t s32; typedef uint32_t u32;
int main(void) {
    s64 a0, a1, a2 = 0; u64 qh_a0, qh_a1, qh_a2 = 0; unsigned long long x[4];
    while (scanf("%llx %llx %llx %llx", &x[0], &x[1], &x[2], &x[3]) == 4) {
        a0 = (s64) x[0]; qh_a0 = x[1]; a1 = (s64) x[2]; qh_a1 = x[3];
        BODY
        printf("%016llx %016llx\\n", (unsigned long long) qh_a2, (unsigned long long) a2);
    }
    return 0;
}
"""


@unittest.skipUnless(shutil.which("cc"), "needs a host C compiler")
class MmiTests(unittest.TestCase):
    def test_lifted_mmi_matches_the_r5900(self):
        import rabbitizer as R
        rng = random.Random(1)
        regs = [(rng.getrandbits(128), rng.getrandbits(128)) for _ in range(200)]
        regs += [(0, 0), ((1 << 128) - 1, 0), (0, (1 << 128) - 1), (0x8000 * 0x0001000100010001_0001000100010001, 0x7FFF)]
        with tempfile.TemporaryDirectory() as d:
            for name, (word, model) in CASES.items():
                with self.subTest(name):
                    self.assertEqual(R.Instruction(word, 0, R.InstrCategory.R5900).disassemble().split()[0], name)
                    body = lifter().mmi(lift.Ins(word, 0))
                    src, exe = os.path.join(d, name + ".c"), os.path.join(d, name)
                    with open(src, "w") as f:
                        f.write(HARNESS.replace("BODY", body))
                    subprocess.run(["cc", "-O1", "-o", exe, src], check=True)
                    inp = "".join(f"{s & (2**64 - 1):x} {s >> 64:x} {t & (2**64 - 1):x} {t >> 64:x}\n" for s, t in regs)
                    out = subprocess.run([exe], input=inp, capture_output=True, text=True, check=True).stdout.split("\n")
                    for (s, t), line in zip(regs, out):
                        hi, lo = (int(x, 16) for x in line.split())
                        self.assertEqual((hi << 64) | lo, model(s, t, 0) & ((1 << 128) - 1), f"{name} rs={s:032x} rt={t:032x}")


if __name__ == "__main__":
    unittest.main()
