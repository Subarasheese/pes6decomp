#!/usr/bin/env python3
"""The symbol file splat reads: one generic name per address (func_ADDR for functions, D_ADDR for
the rest) from config/symbol_addrs.txt. splat refuses that file as is (several names per address,
`// type:data`), and the build expects generic names in splat's output: it maps real names to
addresses itself (tools/symbols.py, PROVIDE in the linker script).
Usage: splat_symbols.py CONFIG.yaml OUT_DIR -> OUT_DIR/symbol_addrs_splat.txt, OUT_DIR/<config>"""
import os
import re
import sys

config, out = sys.argv[1], sys.argv[2]
os.makedirs(out, exist_ok=True)
seen, lines = set(), []
for line in open("config/symbol_addrs.txt"):
    m = re.match(r"\s*([A-Za-z_$][\w$]*)\s*=\s*0x([0-9A-Fa-f]+)\s*;(.*)", line)
    if not m or int(m.group(2), 16) in seen:
        continue
    addr = int(m.group(2), 16)
    seen.add(addr)
    func = "type:func" in m.group(3) or m.group(1).startswith("func_")
    lines.append(f"func_{addr:08X} = 0x{addr:08X}; // type:func\n" if func else f"D_{addr:08X} = 0x{addr:08X};\n")
symbols = os.path.join(out, "symbol_addrs_splat.txt")
open(symbols, "w").writelines(lines)
text = open(config).read().replace("config/symbol_addrs.txt", symbols.replace(os.sep, "/"))
# base_path is relative to the config file, which now lives in OUT_DIR
root = os.path.relpath(".", out).replace(os.sep, "/")
text = re.sub(r"(?m)^(\s*base_path:\s*)\.\.\s*$", lambda m: m.group(1) + root, text)
open(os.path.join(out, os.path.basename(config)), "w").write(text)
print(f"{len(lines)} symbols for splat -> {symbols}")
