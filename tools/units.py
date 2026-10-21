#!/usr/bin/env python3
"""Propose translation units (object files) for the progress report.

The executable has no symbols or file names, so the units are estimated:

- Libraries are placed by their named functions (config/symbol_addrs.txt) and by the code they
  reference: each library starts at its first identified function (LIBRARIES below).
- Game code is split where no file-local link crosses: a call to a function whose callers all sit
  within SPAN functions (a static helper), or static data referenced only by functions within
  SPAN of each other (file-scope data), keeps those functions in one unit. Neighbouring pieces
  are then joined until each unit has at least MIN_BYTES of code. The result is a plausible
  partition, not the original file list; edit config/units.txt to move a boundary once real
  evidence is found.

Writes config/units.txt: "START_ADDRESS NAME" per unit, in address order.

    units.py [--span 60] [--min-bytes 4096]
"""
import argparse
import collections
import csv
import os
import re

import match
import project

ROOT = match.ROOT
OUT = os.path.join(ROOT, "config", "units.txt")
ASM = os.path.join(ROOT, "build", "splat", "asm", "nonmatchings", "core", "text")

# Library units: (start address, name). Each runs up to the next entry. The start of each is its
# first function identified by name (Sony SDK, libgcc, newlib) or by the strings its code uses
# (CRI's "(c)CRI" / SVM_* messages, SceNetcnfif). An entry named None returns to game code.
LIBRARIES = [
    (0x00100000, "sdk/crt0"),
    (0x00100400, "sdk/libgraph"),       # sceGs*
    (0x001021D8, "sdk/libdma"),         # sceDma*
    (0x00102A80, "sdk/libvu0"),         # sceVu*
    (0x00102D00, "sdk/libdev"),         # sceDevVu*
    (0x00103838, "sdk/libvifpk"),       # packet building helpers
    (0x00105040, "sdk/libkernel"),      # AddIntcHandler, sceSifDma*, queues
    (0x00106640, "sdk/deci2"),          # sceDeci2*
    (0x00106920, "sdk/tty"),            # sceTty*
    (0x00108178, "sdk/sifcmd"),         # sceSif*Cmd, sceSif*Rpc
    (0x0010A480, "sdk/fileio"),         # sceFs*
    (0x0010D610, "sdk/iopheap"),        # sceSifInitIopHeap
    (0x0010DB60, "sdk/loadfile"),       # _lf_bind, _sceSifLoadModule
    (0x00111C90, "sdk/libpad"),         # scePad*
    (0x00112E30, "sdk/libsdr"),         # sceSd*
    (0x001132C8, "sdk/libcdvd"),        # sceCd*
    (0x0011C750, "runtime/libgcc"),     # copysign, __muldi3, soft-float
    (0x00120240, None),
    (0x00155A30, "middleware/cri"),     # CRI ADX / SVM
    (0x0017A780, None),
    (0x001C02D8, "runtime/newlib"),     # _malloc_r, stdio, mprec, strtol...
    (0x001CD5A0, None),
    (0x002D9590, "sdk/netcnfif"),       # SceNetcnfif*
    (0x002DB160, None),
]


def function_sizes():
    """[(address, size)] of the code's functions in address order, padding excluded."""
    text_addr, text = match.load_text()
    text_end = project.CONFIG["game"].get("text_end", text_addr + len(text))
    out = []
    for r in csv.DictReader(open(match.FUNCTIONS)):
        addr = int(r["address"], 16)
        if addr >= text_end:
            continue
        span = min(int(r["max_size"]), text_end - addr)
        out.append((addr, 4 * len(match.trim_padding(match.words_at(text_addr, text, addr, span)))))
    return sorted(out)


def links(funcs):
    """{function index: set of indexes it calls}, {data address: set of referencing indexes}."""
    index = {a: i for i, (a, _) in enumerate(funcs)}
    gp = project.CONFIG["game"]["gp"]
    text_end = project.CONFIG["game"].get("text_end", 0)
    call = re.compile(r"\bjal\s+func_([0-9A-F]{8})")
    absolute = re.compile(r"\(0x([0-9A-F]+) (?:>>|&)|%(?:hi|lo)\(D_([0-9A-F]+)\)")
    gp_rel = re.compile(r"%gp_rel\(D_([0-9A-F]+)\)|(-?0x[0-9A-F]+)\(\$28\)")
    calls, data = collections.defaultdict(set), collections.defaultdict(set)
    for a, _ in funcs:
        path = os.path.join(ASM, f"func_{a:08X}.s")
        if not os.path.exists(path):
            continue
        i = index[a]
        for line in open(path):
            for m in call.finditer(line):
                t = int(m.group(1), 16)
                if t in index and t != a:
                    calls[i].add(index[t])
            for m in absolute.finditer(line):
                x = int(m.group(1) or m.group(2), 16)
                if x >= text_end:
                    data[x].add(i)
            m = gp_rel.search(line)
            if m:
                data[int(m.group(1), 16) if m.group(1) else gp + int(m.group(2), 16)].add(i)
    return calls, data


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--span", type=int, default=60, help="max functions between file-local links")
    ap.add_argument("--min-bytes", type=int, default=4096, help="smallest game unit")
    a = ap.parse_args()

    funcs = function_sizes()
    n = len(funcs)
    calls, data = links(funcs)

    # Groups of indexes that must share a unit: a callee with all its callers, or a data address
    # with all its users, when they lie within --span functions of each other.
    callers = collections.defaultdict(set)
    for i, targets in calls.items():
        for t in targets:
            callers[t].add(i)
    reach = list(range(n))
    for group in [cs | {t} for t, cs in callers.items()] + list(data.values()):
        lo, hi = min(group), max(group)
        if hi > lo and hi - lo <= a.span:
            reach[lo] = max(reach[lo], hi)
    free = []  # free[i]: no file-local link crosses the gap after function i
    far = 0
    for i in range(n - 1):
        far = max(far, reach[i])
        free.append(far <= i)

    # Zone of each function: a library name, or None for game code.
    starts = [s for s, _ in LIBRARIES]
    def zone(addr):
        k = max(j for j, s in enumerate(starts) if s <= addr) if addr >= starts[0] else 0
        return k, LIBRARIES[k][1]

    units = []  # (start address, name)
    cur_zone, cur_bytes = None, 0
    for i, (addr, size) in enumerate(funcs):
        k, name = zone(addr)
        if k != cur_zone:
            units.append((addr, name or f"game/unit_{addr:08X}"))
            cur_zone, cur_bytes = k, 0
        elif name is None and free[i - 1] and cur_bytes >= a.min_bytes:
            units.append((addr, f"game/unit_{addr:08X}"))
            cur_bytes = 0
        cur_bytes += size

    with open(OUT, "w") as f:
        f.write("# Translation units proposed by tools/units.py (first function, name). Library units\n"
                "# come from named functions; game units are estimated from file-local calls and data.\n")
        for addr, name in units:
            f.write(f"{addr:08x} {name}\n")
    kinds = collections.Counter(name.split("/")[0] for _, name in units)
    print(f"{len(units)} units ({', '.join(f'{v} {k}' for k, v in sorted(kinds.items()))}) -> {OUT}")


if __name__ == "__main__":
    main()
