#!/usr/bin/env python3
"""Progress report in objdiff's format (objdiff-core/protos/report.proto, JSON mapping), for
progress sites (ByteMatch, decomp.dev) that read it from a CI artifact (tools/publish_progress.py).

    report.py            write progress/report.json from the last full build (tools/build.py)

"Matched" means the function matches on its own (match.py check); "complete" means it is also
linked into the full build that reproduces the original. The report holds only names, sizes and
percentages; nothing from the game.
"""
import csv
import datetime
import json
import os

import inventory
import match
import project

ROOT = match.ROOT
OUT = os.path.join(ROOT, "progress", "report.json") if project.TARGET == "main" else os.path.join(project.BUILD, "report.json")
META = os.path.join(ROOT, "progress", "report.meta.json") if project.TARGET == "main" else os.path.join(project.BUILD, "report.meta.json")  # provenance and the README's counts


# Progress categories, by the prefix of a unit's name (config/units.txt, tools/units.py).
CATEGORIES = {"game": "Game", "sdk": "Sony SDK", "runtime": "C runtime", "middleware": "Middleware"}


def measures(funcs, total_data=None, data=None):
    """Measures of a unit. Its data is, unless given, what its own functions bring from source."""
    total = sum(f["size"] for f in funcs)
    matched = sum(f["size"] for f in funcs if f["matched"])
    complete = sum(f["size"] for f in funcs if f["complete"])
    # Data from source: the constants (.rodata) of the linked functions, placed at their original
    # addresses by tools/build.py and byte-compared there (build/full/report.json data_sizes).
    if data is None:
        data = sum(f.get("data", 0) for f in funcs if f["complete"])
    if total_data is None:
        total_data = data
    n = len(funcs)
    nm = sum(f["matched"] for f in funcs)
    pct = lambda a, b: round(100.0 * a / b, 4) if b else 0.0
    return {
        "fuzzy_match_percent": round(sum(f["size"] * f.get("fuzzy", 100.0 if f["matched"] else 0.0) for f in funcs) / total, 4) if total else 0.0,
        "total_code": str(total), "matched_code": str(matched), "matched_code_percent": pct(matched, total),
        "total_data": str(total_data), "matched_data": str(data), "matched_data_percent": pct(data, total_data),
        "total_functions": n, "matched_functions": nm, "matched_functions_percent": pct(nm, n),
        "complete_code": str(complete), "complete_code_percent": pct(complete, total),
        "complete_data": str(data), "complete_data_percent": pct(data, total_data),
        "total_units": 1, "complete_units": 0,
    }


def main_bss_size():
    """Size of the main executable's .bss: the loaded segment holding the entry point keeps code,
    data and .bss together, and its memory size beyond its file size is the .bss. (The start-up
    code zeroes up to the end of RAM, overlay areas included, so it does not give this bound.)"""
    import struct
    entry, _ = project.load_image()
    elf = open(project.path(project.CONFIG["game"]["elf"]), "rb").read()
    phoff, = struct.unpack_from("<I", elf, 0x1C)
    phentsize, phnum = struct.unpack_from("<HH", elf, 0x2A)
    for i in range(phnum):
        p_type, _, vaddr, _, filesz, memsz = struct.unpack_from("<6I", elf, phoff + i * phentsize)
        if p_type == 1 and vaddr <= entry < vaddr + memsz:
            return memsz - filesz
    return 0


def load_names():
    """{address: name} from config/symbol_addrs.txt (tools/rtti.py)."""
    path = os.path.join(ROOT, "config", "symbol_addrs.txt")
    out = {}
    if os.path.exists(path):
        for line in open(path):
            parts = line.split("=")
            if len(parts) == 2 and "type:func" in line:
                out[int(parts[1].split(";")[0].strip(), 16)] = parts[0].strip()
    adhoc = os.path.join(ROOT, "config", "adhoc_methods.txt")
    if os.path.exists(adhoc):
        for line in open(adhoc):
            parts = line.split()
            if len(parts) == 3 and not line.startswith("#"):
                out[int(parts[2], 16)] = f"{parts[0]}::{parts[1]}"
    return out


def main():
    build = json.load(open(os.path.join(project.BUILD, "full", "report.json")))
    status = build["functions"]
    sizes = build.get("sizes", {})
    data_sizes = build.get("data_sizes", {})
    asm = inventory.asm_functions()
    done = {f"{a:08x}" for a in project.sources(refresh=True)}
    rows = list(csv.DictReader(open(match.FUNCTIONS)))
    text_addr, text = match.load_text()
    # Code and data share one loaded segment: a function's span ends at the end of the code.
    text_end = project.CONFIG["game"].get("text_end", text_addr + len(text))
    partial_path = os.path.join(ROOT, "build", "auto", "partial.json")
    partial = json.load(open(partial_path)) if os.path.exists(partial_path) else {}
    funcs = []
    for r in rows:
        addr = int(r["address"], 16)
        if addr in asm:
            continue
        key = f"{addr:08x}"
        span = min(int(r["max_size"]), max(0, text_end - addr))
        words = match.trim_padding(match.words_at(text_addr, text, addr, span)) if span else []
        size = int(sizes.get(key, 4 * len(words)))
        matched = key in done or status.get(key, "").startswith("linked as part of func_")
        funcs.append({"addr": addr, "size": size, "matched": matched,
                      "complete": status.get(key) == "linked" or status.get(key, "").startswith("linked as part"),
                      "fuzzy": 100.0 if matched else partial.get(key, 0.0),
                      "data": int(data_sizes.get(key, 0)) if build.get("data_matches") else 0})
    # A source that defines the functions after its own is one object whose size (build sizes)
    # covers them all; the covered functions have their own entries, so the covering function
    # keeps only its own bytes and no byte counts twice. Linked code then adds up to the build's
    # linked_code_bytes.
    covered = {}
    for f in funcs:
        s = status.get(f"{f['addr']:08x}", "")
        if s.startswith("linked as part of func_"):
            covered[int(s[len("linked as part of func_"):], 16)] = covered.get(int(s[len("linked as part of func_"):], 16), 0) + f["size"]
    for f in funcs:
        if f["addr"] in covered:
            f["size"] = max(0, f["size"] - covered[f["addr"]])
    # Total data as objdiff counts it (data and bss sections): the .data segment, which holds
    # .data, .rodata and .sdata, plus .bss/.sbss. Only the constants placed by the build count
    # as matched, and only while the built .data is identical to the original.
    data_size = int(build.get("data_bytes", 0))
    bss_size = main_bss_size()
    total_data = data_size + bss_size
    m = measures(funcs, total_data)

    # Units: config/units.txt (tools/units.py), else one unit for all the code.
    units_path = os.path.join(project.CONFIG_ROOT, "units.txt")
    bounds = [(0x100000, "core/text")]
    if os.path.exists(units_path):
        bounds = [(int(l.split()[0], 16), l.split()[1]) for l in open(units_path)
                  if l.strip() and not l.startswith("#")]
    names = load_names()
    category_of = lambda uname: uname.split("/")[0] if "/" in uname and uname.split("/")[0] in CATEGORIES else "game"
    import bisect
    keys = [b[0] for b in bounds]
    grouped = {}
    for f in funcs:
        grouped.setdefault(bounds[max(0, bisect.bisect_right(keys, f["addr"]) - 1)][1], []).append(f)
    units = []
    for _, uname in bounds:
        fs = grouped.get(uname, [])
        if not fs:
            continue
        um = measures(fs)  # a unit's data: the constants its functions bring
        um["total_units"], um["complete_units"] = 1, int(all(f["complete"] for f in fs))
        units.append({
            "name": uname,
            "measures": um,
            "sections": [{"name": ".text", "size": um["total_code"], "fuzzy_match_percent": um["fuzzy_match_percent"]}]
                        + ([{"name": ".rodata", "size": um["matched_data"], "fuzzy_match_percent": 100.0}]
                           if int(um["matched_data"]) else []),
            "functions": [{"name": names.get(f["addr"], f"func_{f['addr']:08X}"), "size": str(f["size"]),
                           "fuzzy_match_percent": f["fuzzy"],
                           "metadata": {"virtual_address": str(f["addr"])}} for f in fs],
            "metadata": {"complete": all(f["complete"] for f in fs), "progress_categories": [category_of(uname)],
                         "auto_generated": True},
        })
    # The rest of the data belongs to no unit yet (the units are ranges of code): one more unit
    # holds it, so that the units add up to the whole.
    rest = total_data - int(m["matched_data"])
    if rest > 0:
        um = measures([], rest, 0)
        um["total_units"], um["complete_units"] = 1, 0
        units.append({
            "name": "data/unattributed",
            "measures": um,
            "sections": [{"name": ".data", "size": str(rest - bss_size), "fuzzy_match_percent": 0.0},
                         {"name": ".bss", "size": str(bss_size), "fuzzy_match_percent": 0.0}],
            "functions": [],
            "metadata": {"complete": False, "progress_categories": ["game"], "auto_generated": True},
        })
    m["total_units"] = len(units)
    m["complete_units"] = sum(u["metadata"]["complete"] for u in units)
    # Categories (the unit name's prefix): each one's measures over its own units; the data that no
    # unit holds counts towards the game.
    categories = []
    for cid, cname in CATEGORIES.items():
        fs = [f for f in funcs if category_of(bounds[max(0, bisect.bisect_right(keys, f["addr"]) - 1)][1]) == cid]
        if not fs:
            continue
        cm = measures(fs)
        own = [u for u in units if u["metadata"]["progress_categories"] == [cid]]
        if cid == "game" and rest > 0:
            cm = measures(fs, int(cm["total_data"]) + rest)
        cm["total_units"] = len(own)
        cm["complete_units"] = sum(u["metadata"]["complete"] for u in own)
        categories.append({"id": cid, "name": cname, "measures": cm})
    report = {"measures": m, "units": units, "version": 2, "categories": categories}
    os.makedirs(os.path.dirname(OUT), exist_ok=True)
    # Provenance, next to the report (objdiff's format has no room for it): when it was made,
    # which build it reads (its commit, date, hashes) and the counts the README quotes.
    linked = sum(1 for f in funcs if f["complete"])
    meta = {"generated": datetime.datetime.now(datetime.timezone.utc).strftime("%Y-%m-%dT%H:%M:%SZ"),
            "commit": build.get("commit"), "dirty": build.get("dirty"),
            "build": {"generated": build.get("generated"), "partial": build.get("partial", False),
                      "text_matches": build.get("text_matches"), "data_matches": build.get("data_matches"),
                      "text_sha1": build.get("text_sha1"), "data_sha1": build.get("data_sha1"),
                      "orphan_sources": len(build.get("orphan_sources", [])),
                      "duplicate_sources": len(build.get("duplicate_sources", {}))},
            "linked_functions": linked, "data_functions": sum(1 for f in funcs if f["data"]),
            "asm_functions": len(asm), "data_bytes": data_size, "bss_bytes": bss_size}
    if project.TARGET == "main":
        import overlay_report
        overlay_report.add_images(report, meta, measures)
    json.dump(report, open(OUT, "w"), indent=1)
    json.dump(meta, open(META, "w"), indent=1)
    if not (build.get("text_matches") and build.get("data_matches")):
        print("WARNING: the build this report reads does not reproduce the original (.text/.data differ)")
    print(f"functions: {m['matched_functions']} / {m['total_functions']} matched "
          f"({m['matched_functions_percent']:.2f}%); code: {int(m['matched_code']):,} / {int(m['total_code']):,} bytes "
          f"matched ({m['matched_code_percent']:.2f}%), {m['complete_code_percent']:.2f}% linked; "
          f"data: {int(m['matched_data']):,} / {int(m['total_data']):,} bytes from source "
          f"({m['matched_data_percent']:.4f}%; .data {data_size:,} + .bss {bss_size:,}) -> {OUT}")


if __name__ == "__main__":
    main()
