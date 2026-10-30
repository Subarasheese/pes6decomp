#!/usr/bin/env python3
"""Compile and measure explicitly non-matching reconstructions, outside src/.

    ./run.sh python tools/nonmatching.py check --jobs 2

Similarity is the fraction of identical, ordered, fully relocated instruction
words, divided by the longer body. It is not a semantic-equivalence test.
Nothing in this directory participates in the matching executable build.
"""
import argparse
import difflib
import hashlib
import json
import os
from pathlib import Path
import re
import struct
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[1]
MANIFEST = ROOT / "config/nonmatching.json"
PROOF = ROOT / "build/nonmatching/verification.json"
FORBIDDEN = re.compile(
    r"\b(?:saved_reg_\w+|INCLUDE_ASM|__asm__|__asm|asm|"
    r"M2C_(?:ERROR|TRAP_IF|BREAK|SYNC|DCACHE_\w+|ICACHE_\w+|PREFETCH\w*|"
    r"LWL|FIRST3BYTES|UNALIGNED32|BITWISE|CARRY|OVERFLOW|LOAD_\w+|STORE_\w+|CMP_STR|TAS_B)|"
    r"GLUE_F64|MULT_HI|MULTU_HI|DMULT_HI|DMULTU_HI|CLZ|REVERSE_BITS|"
    r"ROTATE_RIGHT|ARM_RRX|BSWAP\w*)\b|unset register|unhandled instruction",
    re.I,
)


def sha256(path):
    return hashlib.sha256(Path(path).read_bytes()).hexdigest()


def fingerprint(records):
    """Source and dependency identity; changing any reviewed input invalidates proof."""
    paths = {"project.toml", "config/nonmatching.json", "tools/nonmatching.py",
             "tools/match.py", "tools/symbols.py", "tools/project.py",
             "tools/cc_wsl.sh", "tools/include_wsl.sh", "tools/asm_policy.py", "tools/object_info.py"}
    paths.update(str(p.relative_to(ROOT)) for p in (ROOT / "include").rglob("*") if p.is_file())
    paths.update(str(p.relative_to(ROOT)) for p in (ROOT / "config").rglob("*.txt"))
    paths.update(str(p.relative_to(ROOT)) for p in (ROOT / "config").rglob("*.csv"))
    if (ROOT / "config/overlays.json").exists():
        paths.add("config/overlays.json")
    paths.update(r["source"] for r in records)
    h = hashlib.sha256()
    for name in sorted(paths):
        h.update(name.encode() + b"\0" + bytes.fromhex(sha256(ROOT / name)))
    return h.hexdigest()


def source_problems(text):
    import asm_policy
    problems = asm_policy.violations(text)
    if FORBIDDEN.search(text):
        problems.append("incomplete translation, instruction placeholder, or assembly")
    if re.search(r"(?m)^\s*#\s*define\b", text):
        problems.append("local macro definitions are not accepted")
    if re.search(r"(?m)^(?!extern\b|typedef\b|static\b)[A-Za-z_][\w \t*]*\b(?:D|func)_[0-9A-Fa-f]{8}\s*(?:\[[^\]]*\])?\s*;", text):
        problems.append("game global defined rather than declared extern")
    # m2c can omit unused parameters and leave arg0, arg2 in a definition. Such
    # a prototype shifts registers; it is not an acceptable fuzzy difference.
    for definition in re.finditer(r"(?m)^[\w *]+\b\w+\(([^;{}]*)\)\s*\{", text):
        ids = [int(n) for n in re.findall(r"\barg(\d+)\b", definition[1])]
        if ids and ids != list(range(max(ids) + 1)):
            problems.append("unused parameter hole shifts argument registers")
    for variable in re.findall(r"(?m)^\s+M2C_UNK\s+(\w+)\s*;", text):
        if re.search(r"&\s*" + re.escape(variable) + r"\b", text):
            problems.append("address-taken unknown local has unestablished storage extent")
    return problems


def call_targets(words):
    # jal/j are encoded absolute addresses here. Internal branches use PC-relative offsets.
    return {(w & 0x03FFFFFF) << 2 for w in words if w >> 26 in (2, 3)}


def referenced_addresses(words, gp):
    """Conservative constant-address evidence from original LUI/LO and GP uses.

    Loaded values are unknown; a pointer read from RAM must not be confused with
    the address of its storage. This deliberately rejects references we cannot
    establish rather than masking their relocation bits in the similarity score.
    """
    regs = {0: 0, 28: gp}
    found = set(call_targets(words))
    stores = {0x28, 0x29, 0x2A, 0x2B, 0x2C, 0x2D, 0x2E, 0x2F, 0x39, 0x3D, 0x3F, 0x1F}
    loads = {0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x31, 0x35, 0x37, 0x1E}
    for word in words:
        op, rs, rt, rd = word >> 26, word >> 21 & 31, word >> 16 & 31, word >> 11 & 31
        imm = word & 0xFFFF
        signed = imm - 0x10000 if imm & 0x8000 else imm
        if op == 15:
            regs[rt] = imm << 16
        elif op in (9, 0x19, 13):
            value = regs.get(rs)
            if value is not None:
                value = (value | imm) if op == 13 else (value + signed) & 0xFFFFFFFF
                regs[rt] = value
                found.add(value)
            else:
                regs.pop(rt, None)
        elif op in loads | stores:
            if rs in regs:
                found.add((regs[rs] + signed) & 0xFFFFFFFF)
            if op in loads:
                regs.pop(rt, None)
        elif op == 0:
            fn = word & 63
            if fn not in (8, 9):
                regs.pop(rd, None)
        elif op not in (1, 2, 3, 4, 5, 6, 7, 0x11, 0x12, 0x14, 0x15, 0x16, 0x17):
            regs.pop(rt, None)
        regs[0] = 0
        regs[28] = gp
    return found


def compare(original, compiled, address):
    end = address + len(original) * 4
    external = lambda words: {a for a in call_targets(words) if not address <= a < end}
    if external(original) != external(compiled):
        raise ValueError("external direct call/tail-call targets differ")
    indirect = lambda ws: sum(w >> 26 == 0 and (w & 63) in (8, 9) and (w >> 21 & 31) != 31 for w in ws)
    if indirect(original) != indirect(compiled):
        raise ValueError("indirect call/tail-call count differs")
    if not original or not compiled or not 0.5 <= len(compiled) / len(original) <= 1.75:
        raise ValueError("missing body or implausible compiled length")
    blocks = difflib.SequenceMatcher(None, original, compiled, autojunk=False).get_matching_blocks()
    identical = sum(b.size for b in blocks)
    return {"instruction_similarity": round(100 * identical / max(len(original), len(compiled)), 4),
            "identical_instructions": identical, "original_code_bytes": len(original) * 4,
            "compiled_code_bytes": len(compiled) * 4}


def load_manifest():
    data = json.loads(MANIFEST.read_text())
    seen = set()
    for row in data["functions"]:
        if not re.fullmatch(r"[0-9A-F]{8}", row["address"]):
            raise ValueError("addresses must be eight uppercase hexadecimal digits")
        key = row["image"], row["address"]
        if key in seen:
            raise ValueError(f"duplicate reconstruction: {key}")
        seen.add(key)
        path = Path(row["source"])
        if path.is_absolute() or ".." in path.parts or path.parts[:2] != ("nonmatching", row["image"]):
            raise ValueError(f"invalid reconstruction path: {path}")
        if not (ROOT / path).resolve().is_relative_to((ROOT / "nonmatching" / row["image"]).resolve()):
            raise ValueError(f"reconstruction path escapes its image: {path}")
        if sha256(ROOT / path) != row["source_sha256"]:
            raise ValueError(f"source changed since review: {path}")
        if not row.get("known_issues") or not row.get("review"):
            raise ValueError(f"missing review/limitations: {path}")
    return data


def inspect(records, jobs=2):
    import match
    import project
    objects = match.compile_many([r["source"] for r in records], jobs=jobs)
    base, text = match.load_text()
    results = []
    for row in records:
        path = row["source"]
        address = int(row["address"], 16)
        obj = objects[path]
        try:
            problems = source_problems((ROOT / path).read_text())
            if problems:
                raise ValueError("; ".join(problems))
            if project.source_for(address):
                raise ValueError("an exact-match source already exists at this image/address")
            if not obj:
                raise ValueError("does not compile")
            import object_info
            info = object_info.read_info(obj)
            if any(info["sections"].get(s, 0) for s in [".data", ".bss", ".sdata", ".sbss"]):
                raise ValueError("defines private writable storage instead of game globals")
            blob, relocs, functions = match.read_object(obj, True)
            if len(functions) != 1:
                raise ValueError("requires exactly one compiled function")
            name, offset, size = functions[0]
            if size == 0 or size % 4 or name != row["symbol"]:
                raise ValueError("wrong function symbol or invalid function size")
            words = list(struct.unpack_from(f"<{size // 4}I", blob, offset))
            linked, unknown = match.link_words(words, relocs, offset, address)
            if unknown:
                raise ValueError("unresolved relocation; similarity would be misleading")
            original = match.trim_padding(match.words_at(base, text, address, match.function_span(address)))
            import symbols
            addresses = referenced_addresses(original, project.CONFIG["game"]["gp"])
            for _, symbol, _, internal in relocs.values():
                if not internal:
                    value = symbols.address_of(symbol)
                    if value is None or value not in addresses:
                        raise ValueError(f"external symbol address lacks original-instruction evidence: {symbol}")
            original_hash = hashlib.sha256(struct.pack(f"<{len(original)}I", *original)).hexdigest()
            if row.get("original_sha256", original_hash) != original_hash:
                raise ValueError("original image/body differs from reviewed target")
            result = compare(original, match.trim_padding(linked), address)
            if result["instruction_similarity"] < row.get("minimum_similarity", 50):
                raise ValueError(f"similarity below reviewed threshold: {result['instruction_similarity']}")
            results.append({**row, **result, "original_sha256": original_hash,
                            "source_sha256": sha256(ROOT / path), "verified": True})
        except (ValueError, SystemExit) as error:
            results.append({**row, "verified": False, "error": str(error)})
        finally:
            if obj:
                Path(obj).unlink(missing_ok=True)
    return results


def verified_records():
    """Read only a current, successful, dependency-bound verification."""
    if not MANIFEST.exists():
        return []
    manifest = load_manifest()
    if not PROOF.exists():
        raise ValueError("run tools/nonmatching.py check before publishing")
    proof = json.loads(PROOF.read_text())
    if proof.get("fingerprint") != fingerprint(manifest["functions"]):
        raise ValueError("non-matching verification is stale")
    records = proof["functions"]
    expected = {(r["image"], r["address"], r["source_sha256"]) for r in manifest["functions"]}
    actual = {(r["image"], r["address"], r["source_sha256"]) for r in records}
    if actual != expected or len(records) != len(expected) or not all(r.get("verified") for r in records):
        raise ValueError("not every reconstruction passed verification")
    return records


def add_to_report(report, meta):
    records = verified_records()
    if not records:
        return
    lookup = {(r["image"], int(r["address"], 16)): r for r in records}
    found = set()
    reconstructed_bytes = reconstructed_functions = 0
    weighted = total = 0
    for unit in report["units"]:
        image = unit.get("metadata", {}).get("image", "main")
        if unit["name"].startswith(("overlays/", "auxiliary/")):
            image = unit["name"].split("/", 1)[1]
        for function in unit["functions"]:
            address = int(function["metadata"]["virtual_address"])
            key = image, address
            row = lookup.get(key)
            if row:
                if function["fuzzy_match_percent"] == 100:
                    raise ValueError(f"reconstruction overlaps already matched function: {key}")
                found.add(key)
                function["fuzzy_match_percent"] = row["instruction_similarity"]
                function["metadata"]["source_path"] = row["source"]
                reconstructed_bytes += int(function["size"])
                reconstructed_functions += 1
        code = sum(int(f["size"]) for f in unit["functions"])
        weight = sum(int(f["size"]) * f["fuzzy_match_percent"] for f in unit["functions"])
        if code:
            unit["measures"]["fuzzy_match_percent"] = round(weight / code, 4)
            for section in unit["sections"]:
                if section["name"] == ".text":
                    section["fuzzy_match_percent"] = round(weight / code, 4)
        weighted += weight
        total += code
    if found != set(lookup):
        raise ValueError(f"reconstruction absent from code inventory: {set(lookup) - found}")
    report["measures"]["fuzzy_match_percent"] = round(weighted / total, 4) if total else 0
    for category in report["categories"]:
        units = [u for u in report["units"] if category["id"] in u["metadata"].get("progress_categories", [])]
        fs = [f for u in units for f in u["functions"]]
        size = sum(int(f["size"]) for f in fs)
        if size:
            category["measures"]["fuzzy_match_percent"] = round(sum(int(f["size"]) * f["fuzzy_match_percent"] for f in fs) / size, 4)
    exact = report["measures"]
    source_bytes = int(exact["matched_code"]) + reconstructed_bytes
    summary = {"source_commit": meta["commit"], "fingerprint": json.loads(PROOF.read_text())["fingerprint"],
               "exact_functions": exact["matched_functions"], "nonmatching_functions": reconstructed_functions,
               "reconstructed_functions": exact["matched_functions"] + reconstructed_functions,
               "reconstructed_functions_percent": round(100 * (exact["matched_functions"] + reconstructed_functions) / exact["total_functions"], 4),
               "total_functions": exact["total_functions"], "reconstructed_code_bytes": source_bytes,
               "nonmatching_code_bytes": reconstructed_bytes,
               "total_code_bytes": total, "reconstructed_code_percent": round(100 * source_bytes / total, 4),
               "instruction_similarity_percent": report["measures"]["fuzzy_match_percent"],
               "limitations": "Reconstructed C coverage is not proof of semantic equivalence or a runnable C build. Exact-match coverage is unchanged.",
               "functions": records}
    meta["reconstruction"] = {k: v for k, v in summary.items() if k != "functions"}
    (ROOT / "progress/reconstruction.json").write_text(json.dumps(summary, indent=1) + "\n")
    percent = f"{summary['reconstructed_code_percent']:.2f}%"
    (ROOT / "progress/reconstruction.svg").write_text(
        '<svg xmlns="http://www.w3.org/2000/svg" width="201" height="20" role="img" '
        f'aria-label="C reconstruction: {percent}"><title>C reconstruction: {percent}</title>'
        '<rect width="142" height="20" fill="#555"/><rect x="142" width="59" height="20" fill="#007ec6"/>'
        '<g fill="#fff" text-anchor="middle" font-family="Verdana,sans-serif" font-size="11">'
        f'<text x="71" y="14">C reconstruction</text><text x="171" y="14">{percent}</text></g></svg>\n')


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("command", choices=["check"])
    parser.add_argument("--jobs", type=int, choices=[1, 2], default=2)
    parser.add_argument("--image", help=argparse.SUPPRESS)
    args = parser.parse_args()
    manifest = load_manifest()
    records = manifest["functions"]
    PROOF.parent.mkdir(parents=True, exist_ok=True)
    if args.image:
        result = inspect([r for r in records if r["image"] == args.image], args.jobs)
        path = PROOF.parent / (args.image + ".json")
        path.write_text(json.dumps(result, indent=1) + "\n")
        for row in result:
            if not row["verified"]:
                print(f"FAIL {row['source']}: {row['error']}", file=sys.stderr)
        return 0 if all(r["verified"] for r in result) else 1
    results = []
    for image in sorted({r["image"] for r in records}):
        env = dict(os.environ, PES6_TARGET=image)
        subprocess.run([sys.executable, str(Path(__file__)), "check", "--image", image,
                        "--jobs", str(args.jobs)], env=env, cwd=ROOT, check=True)
        results.extend(json.loads((PROOF.parent / (image + ".json")).read_text()))
    PROOF.write_text(json.dumps({"fingerprint": fingerprint(records), "functions": results}, indent=1) + "\n")
    print(f"{len(results)} non-matching reconstructions compiled and measured; exact build unaffected")
    return 0


if __name__ == "__main__":
    sys.exit(main())
