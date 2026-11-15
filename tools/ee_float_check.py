#!/usr/bin/env python3
"""Check tools/ee_float.py against real PS2 hardware results (ps2autotests tests/cpu/ee_fpu/*.expected).

    python3 tools/ee_float_check.py PS2AUTOTESTS_DIR [-v]

ps2autotests (https://github.com/unknownbrackets/ps2autotests, ISC licence) records what a real PS2
printed for each FPU operation. Every arithmetic, multiply-add, divide, sqrt, conversion and compare
line is recomputed here and compared bit for bit.
"""
import os
import re
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import ee_float as F  # noqa: E402


def constants(root):
    out = {}
    for line in open(os.path.join(root, "tests/cpu/ee_fpu/shared.h")):
        m = re.search(r"\b(CF_\w+)\[\d+\]\s*=\s*\{0x([0-9A-Fa-f]+)", line)
        if m:
            out[m.group(1)] = int(m.group(2), 16)
    return out


def val(tok, cf):
    tok = tok.strip()
    if tok in cf:
        return cf[tok]
    return int(tok.split("/")[0], 16)


BIN = {"add": F.add, "sub": F.sub, "mul": F.mul, "div": F.div, "max": F.max_, "min": F.min_,
       "rsqrt": F.rsqrt}
UN = {"abs": F.abs_, "neg": F.neg, "mov": lambda a: a, "sqrt": F.sqrt}
CMP = {"eq": lambda a, b: F.cmp_value(a) == F.cmp_value(b),
       "lt": lambda a, b: F.cmp_value(a) < F.cmp_value(b),
       "le": lambda a, b: F.cmp_value(a) <= F.cmp_value(b),
       "f": lambda a, b: False}


def check(root, verbose=False):
    cf = constants(root)
    tot, bad = 0, []
    for fn in ("arithmetic", "muldiv", "sqrt", "convert", "compare"):
        for line in open(os.path.join(root, "tests/cpu/ee_fpu", fn + ".expected")):
            line = line.rstrip()
            m = re.match(r"  (\S+) (.*): (.*)$", line)
            if not m:
                continue
            op, args, res = m.groups()
            try:
                if op in ("madd", "msub", "madda", "msuba"):
                    am = re.match(r"\((.*?)\) (.*)$", args)
                    acc = val(am.group(1), cf)
                    fs, ft = (val(x, cf) for x in am.group(2).split(", "))
                    r = (F.madd if op.startswith("madd") else F.msub)(acc, fs, ft)
                    if op in ("madd", "msub"):
                        # ACC is printed by reading it through madd: exponent 0 shows as a signed zero
                        shown = acc & 0x80000000 if not (acc >> 23) & 0xFF else acc
                        rm = re.match(r"(\S+) \((.*)\)$", res)
                        got, want = (int(r), shown), (val(rm.group(1), cf), val(rm.group(2), cf))
                    else:
                        got, want = r, val(res, cf)
                elif op in ("adda", "suba", "mula"):
                    a, b = (val(x, cf) for x in args.split(", "))
                    got = {"adda": F.add, "suba": F.sub, "mula": F.mul}[op](a, b)
                    want = val(res, cf)
                elif op in CMP:
                    a, b = (val(x, cf) for x in args.split(", "))
                    got, want = CMP[op](a, b), res.strip() == "true"
                elif op == "cvt.w.s":
                    got, want = F.cvt_w_s(val(args, cf)), val(res, cf)
                elif op == "cvt.s.w":
                    got, want = F.cvt_s_w(val(args, cf)), val(res, cf)
                elif op in BIN:
                    a, b = (val(x, cf) for x in args.split(", "))
                    got, want = BIN[op](a, b), val(res, cf)
                elif op in UN:
                    got, want = UN[op](val(args, cf)), val(res, cf)
                else:
                    continue
            except (ValueError, AttributeError) as e:
                bad.append((fn, line, f"unparsed: {e}"))
                continue
            tot += 1
            if got != want:
                fmt = lambda x: (tuple(f"{v:08x}" for v in x) if isinstance(x, tuple)
                                 else f"{x:08x}" if isinstance(x, int) and not isinstance(x, bool) else x)
                bad.append((fn, line, f"got {fmt(got)}"))
    return tot, bad


def main():
    root = sys.argv[1]
    tot, bad = check(root)
    print(f"{tot - len([b for b in bad if not b[2].startswith('unparsed')])}/{tot} agree, {len(bad)} differ")
    for b in bad[: (len(bad) if "-v" in sys.argv else 25)]:
        print("  ", *b)
    return 0 if not bad else 1


if __name__ == "__main__":
    sys.exit(main())
