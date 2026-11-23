#!/usr/bin/env python3
"""Repair m2c drafts mechanically, with the fixes agents found by hand, and keep what tools/equiv.py accepts.

    draft_fix.py LIST [--jobs N] [--limit N]

LIST is a CSV with image,address columns (an exhibition list works). Each function that has no C in the
manifest, or whose draft tools/equiv.py rejects, is tried. Its bases are the existing draft (if any) and
m2c's output under each option of tools/gen_equiv.py's ladder. Each base is made compilable and goes
through:

  compile fixes, applied while the compiler reports them:
    too few arguments to function F    F is declared without a prototype (F()), so every call compiles
    X undeclared                       declared extern (a function as M2C_UNK X(), data as M2C_UNK X)
  corrections, always applied (each fixes a known m2c output defect):
    a pointer typed M2C_UNK* stepped by a byte count is a byte pointer (m2c's step is in bytes; the
      M2C_UNK* type made the compiler scale it by 4)
    a function address declared as data (extern M2C_UNK func_X;) is declared as a function
    a signed division whose sign correction m2c wrote out a second time loses the extra term
    a switch is rewritten as a compare-and-goto chain (a private jump table is rejected)
  variants, tried in turn:
    callees declared returning u8/s8/u16/s16 return s32 (the original masks the full register itself)
    parameters declared s8/u8/s16/u16 are s32 (the original compares the whole register)
    compilers ee-gcc-2.9, ee-gcc-2.9-G0, mwcc-3.0.1b210

The first variant that tools/equiv.py judges EQUIVALENT and tools/nonmatching.py's checks accept is
written to build/gen/<image>/func_<ADDR>.c with its record in build/gen/<image>.jsonl, from where
tools/gen_equiv.py --admit admits it like any generated draft.
"""
import csv
import io
import contextlib
import json
import multiprocessing
import os
import re
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
sys.path.insert(0, HERE)
COMPILERS = ("ee-gcc-2.9", "ee-gcc-2.9-G0", "mwcc-3.0.1b210")
MAX_COMPILE_FIXES = 12


# ---- corrections -------------------------------------------------------------------------------

def byte_pointers(c):
    """M2C_UNK* (or M2C_UNK32*) locals stepped by a constant: m2c's step is a byte count, so the variable
    becomes a u8 pointer and its dereferences read the word explicitly."""
    for m in list(re.finditer(r"(?m)^(\s+)M2C_UNK(?:32)?\s*\*\s*(\w+);", c)):
        v = m.group(2)
        if not re.search(r"\b" + v + r"\s*(?:\+=|-=)\s*(?:0x[0-9A-Fa-f]+|\d+)", c):
            continue
        c = c.replace(m.group(0), f"{m.group(1)}u8 *{v};", 1)
        c = re.sub(r"(?<![\w)\]])\*\s*" + v + r"\b(?!\s*\[)", f"*(s32 *){v}", c)
        c = re.sub(r"\b" + v + r"\[([^\]]+)\]", f"((s32 *){v})[\\1]", c)
    return c


def functions_as_functions(c):
    """extern M2C_UNK func_X; (an address taken as data) becomes a function declaration."""
    return re.sub(r"(?m)^extern\s+M2C_UNK\d*\s+(func_[0-9A-Fa-f]{8}|\w+)\s*;", r"void \1(void);", c)


def _paren_span(t, i):
    """End index (exclusive) of the parenthesised group opening at t[i]."""
    depth = 0
    for j in range(i, len(t)):
        if t[j] == "(":
            depth += 1
        elif t[j] == ")":
            depth -= 1
            if depth == 0:
                return j + 1
    return -1


def single_sign_correction(c):
    """(x / N) + ((u32) (x) >> 0x1F): the compiler already rounds a signed division toward zero, so the
    term m2c added is a second correction; it is dropped."""
    while True:
        m = re.search(r"/\s*(?:0x[0-9A-Fa-f]+|\d+)\)\s*\+\s*\(\(u32\)\s*\(", c)
        if not m:
            return c
        k = m.end() - 1                                    # the "(" of the shifted expression
        e = _paren_span(c, k)
        tail = re.match(r"\s*>>\s*0x1F\)", c[e:]) if e > 0 else None
        if not tail:
            return c
        c = c[:m.start() + c[m.start():].index(")") + 1] + c[e + tail.end():]


def unswitch(t):
    """Switch statements as compare-and-goto chains, innermost first."""
    def match_brace(s, i):
        depth = 0
        j = i
        while j < len(s):
            ch = s[j]
            if ch in "\"'":
                q = ch
                j += 1
                while s[j] != q:
                    j += 2 if s[j] == "\\" else 1
            elif ch == "{":
                depth += 1
            elif ch == "}":
                depth -= 1
                if depth == 0:
                    return j
            j += 1
        raise ValueError("unbalanced braces")

    def paren_end(s, i):
        return _paren_span(s, i) - 1

    def top_breaks(body):
        out, i = [], 0
        pat = re.compile(r"\b(for|while|do|switch)\b|\bbreak\s*;")
        while i < len(body):
            m = pat.search(body, i)
            if not m:
                break
            if m.group(1):
                k = m.end()
                if m.group(1) in ("for", "while", "switch"):
                    k = paren_end(body, body.index("(", k)) + 1
                    if m.group(1) == "while" and body[k:].lstrip().startswith(";"):
                        i = k
                        continue
                if not body[k:].lstrip().startswith("{"):
                    i = k
                    continue
                i = match_brace(body, body.index("{", k)) + 1
            else:
                out.append((m.start(), m.end()))
                i = m.end()
        return out

    n = 0
    while True:
        ms = list(re.finditer(r"\bswitch\s*\(", t))
        if not ms:
            return t
        for m in reversed(ms):
            pe = paren_end(t, m.end() - 1)
            ob = t.index("{", pe)
            cb = match_brace(t, ob)
            body = t[ob + 1:cb]
            if not re.search(r"\bswitch\s*\(", body):
                break
        n += 1
        expr = t[m.end():pe]
        cases = []

        def label(mm):
            cases.append((mm.group(1).strip(), f"sw{n}_c{len(cases)}"))
            return f"{cases[-1][1]}:;"
        parts, last = [], 0
        for s, e in top_breaks(body):
            parts += [body[last:s], f"goto sw{n}_end;"]
            last = e
        body = "".join(parts) + body[last:]
        body = re.sub(r"\bcase\s+([^:]+?)\s*:(?!:)", label, body)
        default = bool(re.search(r"\bdefault\s*:", body))
        body = re.sub(r"\bdefault\s*:", f"sw{n}_default:;", body)
        chain = f"{{ s32 sw{n}_v = (s32) ({expr});\n" + "".join(f"    if (sw{n}_v == ({v})) goto {lab};\n" for v, lab in cases)
        chain += f"    goto sw{n}_{'default' if default else 'end'};\n"
        t = t[:m.start()] + chain + body + f"\nsw{n}_end:; }}" + t[cb + 1:]


def corrections(c):
    for f in (functions_as_functions, byte_pointers, single_sign_correction):
        c = f(c)
    try:
        c = unswitch(c)
    except (ValueError, IndexError):
        pass
    return c


# ---- variants ----------------------------------------------------------------------------------

def wide_returns(c):
    return re.sub(r"(?m)^((?:extern\s+)?)(?:u8|s8|u16|s16|M2C_UNK8|M2C_UNK16)(\s+\w+\s*\()", r"\1s32\2", c)


def wide_params(c, symbol):
    m = re.search(r"(?m)^[^\n;{}]*\b" + re.escape(symbol) + r"\s*\(([^)]*)\)\s*\{", c)
    if not m:
        return c
    params = re.sub(r"\b(?:s8|u8|s16|u16|M2C_UNK8|M2C_UNK16)(\s+arg\d+)", r"s32\1", m.group(1))
    return c[:m.start(1)] + params + c[m.end(1):]


# ---- compile fixes -----------------------------------------------------------------------------

def compile_with_fixes(text, path):
    """(object path or None, final text): compile, and while the compiler names a fixable problem fix it."""
    import match
    for _ in range(MAX_COMPILE_FIXES):
        open(path, "w").write(text)
        err = io.StringIO()
        try:
            with contextlib.redirect_stdout(io.StringIO()), contextlib.redirect_stderr(err):
                return match.compile_c(path), text
        except SystemExit:
            msgs = err.getvalue()
        fixed = text
        for f in re.findall(r"too few arguments to function [`']([\w]+)'", msgs):
            fixed = re.sub(r"(?m)^((?:extern\s+)?[\w\s\*]*?\b" + re.escape(f) + r")\s*\([^;{]*\)\s*;", r"\1();", fixed)
        for x in re.findall(r"[`']([\w]+)' undeclared", msgs):
            decl = f"M2C_UNK {x}();\n" if x.startswith("func_") else f"extern M2C_UNK {x};\n"
            if decl not in fixed:
                fixed = re.sub(r'(#include "pes6/m2c.h"\n)', r"\1" + decl, fixed, count=1)
        if fixed == text:
            return None, text
        text = fixed
    return None, text


# ---- one function ------------------------------------------------------------------------------

def bases(image, address, draft):
    import gen_equiv
    out = []
    if draft and os.path.exists(os.path.join(ROOT, draft)):
        body = open(os.path.join(ROOT, draft)).read()
        body = re.sub(r"^/\*\s*compiler:[^\n]*\*/\n", "", body)
        out.append(("draft", body))
    asm = os.path.join(ROOT, "build", "gen", image, f"func_{address}.s")
    if os.path.exists(asm):
        asm_text = open(asm).read()
        for options in gen_equiv.M2C_LADDER:
            r = subprocess.run([sys.executable, gen_equiv.M2C, "-t", "mipsee-gcc-c", "--valid-syntax", *options, asm],
                               capture_output=True, text=True, timeout=120)
            if r.returncode or not r.stdout.strip() or gen_equiv.INCOMPLETE.search(r.stdout):
                continue
            out.append(("m2c " + (" ".join(options) or "default"), '#include "pes6/m2c.h"\n' + gen_equiv.make_compilable(r.stdout, asm_text)))
    return out


def admissible(image, address, symbol, path, compiler):
    import nonmatching
    row = {"image": image, "address": address, "symbol": symbol, "source": os.path.relpath(path, ROOT),
           "compiler": compiler, "minimum_similarity": 0, "review": "x", "known_issues": []}
    with contextlib.redirect_stdout(io.StringIO()), contextlib.redirect_stderr(io.StringIO()):
        x = nonmatching.inspect([row], jobs=1)[0]
    return x.get("verified") or "matches the original exactly" in x.get("error", ""), x.get("error", "")


def one(image, address, draft, base_mem):
    import equiv
    import symbols
    symbol = symbols.symbol(int(address, 16))
    work = os.path.join(ROOT, "build", "tmp", "draft_fix")
    os.makedirs(work, exist_ok=True)
    path = os.path.join(work, f"{image}_{address}.c")
    tried = 0
    for origin, body in bases(image, address, draft):
        body = corrections(body)
        for name, text in (("", body), ("wide returns", wide_returns(body)), ("wide params", wide_params(body, symbol)),
                           ("wide returns+params", wide_params(wide_returns(body), symbol))):
            if name and text == body:
                continue
            for comp in COMPILERS:
                src = f"/* compiler: {comp} */\n" + text
                obj, src = compile_with_fixes(src, path)
                if not obj:
                    continue
                tried += 1
                try:
                    r = equiv.judge(image, int(address, 16), path, symbol, base_mem, obj)
                finally:
                    os.remove(obj)
                if r["verdict"] != "EQUIVALENT":
                    continue
                ok, why = admissible(image, address, symbol, path, comp)
                if not ok:
                    continue
                return {"address": address, "verdict": "EQUIVALENT", "source": f"build/gen/{image}/func_{address}.c",
                        "compiler": comp, "memory": r.get("memory"), "cases": r.get("cases"), "holdout": r.get("holdout"),
                        "coverage": r.get("coverage"), "repair": f"draft_fix: {origin}" + (f", {name}" if name else ""),
                        "text": src}
    return {"address": address, "verdict": "DIFFERS" if tried else "NO-COMPILE", "detail": f"draft_fix: {tried} variants judged, none accepted"}


def _worker(args):
    image, rows = args
    import equiv
    base = equiv.build_memory(image)
    out = []
    for address, draft in rows:
        try:
            r = one(image, address, draft, base)
        except Exception as e:                              # one bad function must not stop the batch
            r = {"address": address, "verdict": "ERROR", "detail": f"draft_fix: {type(e).__name__}: {e}"}
        if r["verdict"] == "EQUIVALENT":
            open(os.path.join(ROOT, r["source"]), "w").write(r.pop("text"))
        with open(os.path.join(ROOT, "build", "gen", f"{image}.jsonl"), "a") as fh:
            fh.write(json.dumps(r) + "\n")
        print(image, address, r["verdict"], r.get("repair", r.get("detail", "")), flush=True)
        out.append(r)
    return out


def _image_of(root):
    """the image whose sources a directory under src/ holds: an overlay's own directory, else main"""
    parts = os.path.relpath(root, os.path.join(ROOT, "src")).split(os.sep)
    return parts[1] if parts[0] == "overlays" and len(parts) > 1 else "main"


def targets(list_path):
    """{image: [(address, draft source or None)]} of listed functions without accepted C, in any image."""
    import re as _re
    man = {(r["image"], r["address"]): r["source"] for r in json.load(open(os.path.join(ROOT, "config", "nonmatching.json")))["functions"]}
    eq = set()
    for line in open(os.path.join(ROOT, "docs", "equivalent.md")):
        m = _re.match(r"\| (\w+) \| `([0-9A-F]{8})`", line)
        if m:
            eq.add((m.group(1), m.group(2)))
    exact = set()
    for root, _, files in os.walk(os.path.join(ROOT, "src")):
        img = _image_of(root)
        for f in files:
            m = _re.search(r"([0-9A-F]{8})\.c$", f)
            if img and m:
                exact.add((img, m.group(1)))
    # exact matches under a real name too: the progress report knows them by address
    try:
        rep = json.load(open(os.path.join(ROOT, "progress", "report.json")))
        for u in rep["units"]:
            n = u["name"]
            img = "main" if n.split("/")[0] in ("game", "sdk", "middleware", "runtime", "data") else n.split("/")[1]
            for f in u["functions"]:
                if f.get("fuzzy_match_percent") == 100.0:
                    exact.add((img, "%08X" % int(f["metadata"]["virtual_address"])))
    except (OSError, KeyError, ValueError):
        pass
    sys.path.insert(0, HERE)
    import project
    for root, _, files in os.walk(os.path.join(ROOT, "src")):
        img = _image_of(root)
        for f in files:
            if img and not _re.search(r"[0-9A-F]{8}\.c$", f) and f.endswith(".c"):
                try:
                    a = project.source_address(os.path.join(root, f))
                except Exception:
                    a = None
                if a is not None:
                    exact.add((img, "%08X" % a))
    out = {}
    for row in csv.DictReader(open(list_path)):
        if row.get("status") == "boundary":
            continue
        k = (row["image"], row["address"].upper().replace("0X", "").zfill(8))
        if k in eq or k in exact:
            continue
        out.setdefault(k[0], []).append((k[1], man.get(k)))
    return out


def main():
    a = sys.argv[1:]
    if not a:
        sys.exit(__doc__)
    jobs = int(a[a.index("--jobs") + 1]) if "--jobs" in a else 4
    limit = int(a[a.index("--limit") + 1]) if "--limit" in a else 0
    for image, rows in targets(a[0]).items():
        if limit:
            rows = rows[:limit]
        if image == "main":
            os.environ.pop("PES6_TARGET", None)
        else:
            os.environ["PES6_TARGET"] = image
        print(f"{image}: {len(rows)} functions", flush=True)
        counts = {}
        with multiprocessing.get_context("fork").Pool(jobs) as pool:
            for out in pool.imap_unordered(_worker, [(image, rows[i:i + 4]) for i in range(0, len(rows), 4)]):
                for r in out:
                    counts[r["verdict"]] = counts.get(r["verdict"], 0) + 1
        print(f"{image}: {counts}", flush=True)


if __name__ == "__main__":
    main()
