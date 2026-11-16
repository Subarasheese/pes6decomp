#!/usr/bin/env python3
"""How strong tools/equiv.py is: the share of deliberately broken drafts it rejects (mutation score).

    equiv_mutants.py make [N]     write N single-change mutants of admitted EQUIVALENT drafts (main and
                                  game) to build/equiv/mutants/, with mutants.json listing them
                                  (MUTANTS_SEED and MUTANTS_DIR choose another set and directory)
    equiv_mutants.py score        judge every mutant with the current tools/equiv.py and print the score
    equiv_mutants.py control [N]  judge N exact-match sources (correct by construction): every DIFFERS
                                  is a false alarm of the checker

Each mutant changes one integer constant in a comparison or arithmetic operand of the function body
by +1, or swaps one comparison operator for its strict/non-strict partner. A few mutants are
behaviourally equivalent anyway (a dead branch, a masked bit), so a perfect checker stays a little
under 100%; compare scores between checker versions on the same mutant set.
"""
import json
import os
import random
import re
import subprocess
import sys
import collections

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
OUT = os.path.join(ROOT, "build", "equiv", os.environ.get("MUTANTS_DIR", "mutants"))
SWAP = {"<": "<=", "<=": "<", ">": ">=", ">=": ">", "==": "!=", "!=": "=="}


def equivalent_drafts():
    eq = []
    for line in open(os.path.join(ROOT, "docs", "equivalent.md")):
        m = re.match(r"\| (main|game) \| `([0-9A-F]{8})`", line)
        if m:
            eq.append((m.group(1), m.group(2)))
    man = {(r["image"], r["address"]): r["source"]
           for r in json.load(open(os.path.join(ROOT, "config", "nonmatching.json")))["functions"]}
    return [(i, a, man[(i, a)]) for i, a in eq if (i, a) in man]


def mutate(text, rng):
    head = text.find("{", text.find("compiler:"))
    m = re.search(r"(?m)^[^\n;{}]*\)\s*\{", text)
    start = m.end() if m else head
    body = text[start:]
    sites = [("const", x) for x in re.finditer(r"(==|!=|<=|>=|<|>|\+|-|&|\|)\s*(0x[0-9A-Fa-f]+|\d+)\b(?![.\w])", body)]
    sites += [("op", x) for x in re.finditer(r"(?<=[\w\)\]] )(<=|>=|==|!=|<|>)(?= [\w\(\-])", body)]
    if not sites:
        return None, None
    kind, x = rng.choice(sites)
    if kind == "const":
        v = int(x.group(2), 0)
        new = body[:x.start(2)] + hex(v + 1) + body[x.end(2):]
        what = f"constant {x.group(2)} -> {hex(v + 1)}"
    else:
        new = body[:x.start(1)] + SWAP[x.group(1)] + body[x.end(1):]
        what = f"operator {x.group(1)} -> {SWAP[x.group(1)]}"
    return text[:start] + new, what


def make(n):
    rng = random.Random(int(os.environ.get("MUTANTS_SEED", "20261116")))
    drafts = equivalent_drafts()
    rng.shuffle(drafts)
    os.makedirs(OUT, exist_ok=True)
    rows = []
    for image, a, src in drafts:
        if len(rows) >= n:
            break
        text, what = mutate(open(os.path.join(ROOT, src)).read(), rng)
        if text is None:
            continue
        p = os.path.join(OUT, f"{image}_{a}.c")
        open(p, "w").write(text)
        rows.append({"image": image, "address": a, "source": os.path.relpath(p, ROOT), "mutation": what})
    json.dump(rows, open(os.path.join(OUT, "mutants.json"), "w"), indent=1)
    print(f"{len(rows)} mutants in {os.path.relpath(OUT, ROOT)}")


def score():
    rows = json.load(open(os.path.join(OUT, "mutants.json")))
    verdicts = collections.Counter()
    survivors = []
    for image in ("main", "game"):
        args = []
        for r in rows:
            if r["image"] == image:
                args += [r["address"], r["source"]]
        if not args:
            continue
        env = dict(os.environ)
        env.pop("PES6_TARGET", None)
        if image != "main":
            env["PES6_TARGET"] = image
        # several processes: the simulator is pure Python
        chunks = [args[i:i + 20] for i in range(0, len(args), 20)]
        procs = [subprocess.Popen([sys.executable, os.path.join(ROOT, "tools", "equiv.py"), *c], cwd=ROOT, env=env,
                                  stdout=subprocess.PIPE, stderr=subprocess.DEVNULL, text=True) for c in chunks]
        for p in procs:
            for line in p.communicate()[0].splitlines():
                parts = line.split()
                if len(parts) >= 2:
                    verdicts[parts[1]] += 1
                    if parts[1] == "EQUIVALENT":
                        survivors.append(f"{image} {parts[0]}")
    judged = verdicts["DIFFERS"] + verdicts["EQUIVALENT"]
    print(f"mutants: {dict(verdicts)}")
    print(f"mutation score: {100.0 * verdicts['DIFFERS'] / judged:.1f}% of {judged} judged mutants rejected")
    open(os.path.join(OUT, "survivors.txt"), "w").write("\n".join(survivors) + "\n")


def control(n):
    """Exact-match sources compile to the original instructions, so the checker must call them
    EQUIVALENT; any other verdict is a false alarm (or an UNTESTABLE gap)."""
    import csv
    rng = random.Random(1116)
    srcs = []
    for image, base in (("main", "src"), ("game", os.path.join("src", "overlays", "game"))):
        for d, _, files in os.walk(os.path.join(ROOT, base)):
            if image == "main" and "overlays" in d:
                continue
            for f in files:
                m = re.fullmatch(r"func_([0-9A-F]{8})\.c", f)
                if m:
                    srcs.append((image, m.group(1), os.path.relpath(os.path.join(d, f), ROOT)))
    rng.shuffle(srcs)
    picked = srcs[:n]
    verdicts, bad = collections.Counter(), []
    for image in ("main", "game"):
        args = [x for i, a, s in picked if i == image for x in (a, s)]
        env = dict(os.environ)
        env.pop("PES6_TARGET", None)
        if image != "main":
            env["PES6_TARGET"] = image
        chunks = [args[i:i + 20] for i in range(0, len(args), 20)]
        procs = [subprocess.Popen([sys.executable, os.path.join(ROOT, "tools", "equiv.py"), *c], cwd=ROOT, env=env,
                                  stdout=subprocess.PIPE, stderr=subprocess.DEVNULL, text=True) for c in chunks]
        for p in procs:
            for line in p.communicate()[0].splitlines():
                parts = line.split()
                if len(parts) >= 2:
                    verdicts[parts[1]] += 1
                    if parts[1] != "EQUIVALENT":
                        bad.append(f"{image} {line[:160]}")
    print(f"exact-match controls: {dict(verdicts)}")
    for b in bad:
        print("  ", b)


if __name__ == "__main__":
    a = sys.argv[1:]
    if not a:
        sys.exit(__doc__)
    if a[0] == "make":
        make(int(a[1]) if len(a) > 1 else 200)
    elif a[0] == "control":
        control(int(a[1]) if len(a) > 1 else 150)
    elif a[0] == "score":
        score()
    else:
        sys.exit(__doc__)
