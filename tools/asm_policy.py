#!/usr/bin/env python3
"""Reject inline assembly in recovered C/C++ sources and their headers.

Instruction intrinsics written as assembly, file-scope assembly, assembly
inclusion macros, and register-pinned variables are not C recoveries. Functions
that cannot yet be expressed faithfully with the configured compiler remain
unrecovered; the full build retains their original code from local game inputs.

    asm_policy.py FILE...    print violations; exit 1 if any

Sources listed in config/asm_allowed.txt are exempt: functions the maintainer approved for inline
assembly because C cannot express them (direct use of $gp, for example). Each entry names the
source path, relative to the repository root, and why.

Non-matching drafts (tools/nonmatching.py) may also contain inline assembly whose every instruction
is a VU0 macro-mode instruction (lqc2/sqc2, qmfc2/qmtc2, cfc2/ctc2, the vector v... operations):
the configured compilers cannot emit them from C, and the equivalence checker simulates them. Any
other instruction in such a block is still a violation. Sources under src/ keep the stricter rule.
"""
import os
import re
import sys

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), ".."))
ALLOWED = os.path.join(ROOT, "config", "asm_allowed.txt")

# Remove comments and literals before checking C identifiers, so documentation,
# string contents and escaped quotes cannot produce false positives.
NON_CODE = re.compile(r'''//[^\n]*|/\*[\s\S]*?\*/|"(?:\\.|[^"\\])*"|'(?:\\.|[^'\\])*' ''', re.X)
ASM = re.compile(r"\b(?:asm|__asm|__asm__)\b")
INCLUSION = re.compile(r"\b(?:INCLUDE_ASM|INCLUDE_RODATA)\b")
# An asm statement: asm/__asm/__asm__, optional qualifiers, then its parenthesised operands.
ASM_STATEMENT = re.compile(r"\b(?:asm|__asm|__asm__)\b\s*(?:(?:volatile|__volatile__|goto)\s*)*\(")
STRING = re.compile(r'"((?:\\.|[^"\\])*)"')
# VU0 macro-mode instructions (COP2): moves between the EE and VU0, and the vector operations.
VU0 = re.compile(r"(?:lqc2|sqc2|qmfc2(?:\.ni|\.i)?|qmtc2(?:\.ni|\.i)?|cfc2(?:\.ni|\.i)?|ctc2(?:\.ni|\.i)?|"
                 r"v[a-z][a-z0-9]*(?:\.[xyzw]+)?)$")


def code_only(src):
    # C splices physical lines before tokenization, including inside comments.
    src = re.sub(r"\\\r?\n", "", src)
    return NON_CODE.sub(lambda match: re.sub(r"[^\n]", " ", match[0]), src)


def asm_statements(src):
    """(start, end, instruction text) of each asm statement of src (comments removed first)."""
    code = re.sub(r"\\\r?\n", "", src)
    code = re.sub(r"//[^\n]*|/\*[\s\S]*?\*/", lambda m: re.sub(r"[^\n]", " ", m[0]), code)
    out = []
    for m in ASM_STATEMENT.finditer(code):
        depth, i = 1, m.end()
        while i < len(code) and depth:
            if code[i] == '"':
                j = i + 1
                while j < len(code) and code[j] != '"':
                    j += 2 if code[j] == "\\" else 1
                i = j
            elif code[i] == "(":
                depth += 1
            elif code[i] == ")":
                depth -= 1
            i += 1
        body = code[m.end():i - 1]
        template = body.split(":")[0]
        out.append((m.start(), i, "".join(s.encode().decode("unicode_escape") for s in STRING.findall(template))))
    return out


def vu0_only(text):
    """True when every instruction of an asm template is a VU0 macro-mode instruction."""
    instructions = [s.strip() for s in re.split(r"[\n;]", text) if s.strip()]
    return bool(instructions) and all(VU0.match(s.split()[0]) for s in instructions)


def violations(src, allow_vu0=False):
    code = code_only(src)
    out = []
    if allow_vu0:
        # every asm statement must be VU0-only; the rest of the source is checked as usual
        statements = asm_statements(src)
        if statements and all(vu0_only(text) for _, _, text in statements):
            kept = code_only(src)
            for start, end, _ in reversed(statements):
                kept = kept[:start] + " " * (end - start) + kept[end:]
            code = kept
    if ASM.search(code):
        out.append("inline or file-scope assembly is not a C recovery" if not allow_vu0 else
                   "inline assembly other than VU0 macro-mode instructions is not a C recovery")
    if INCLUSION.search(code):
        out.append("assembly-inclusion macros are not C recoveries")
    return out


def exempt(path):
    """True when config/asm_allowed.txt lists the source at path."""
    rel = os.path.relpath(os.path.abspath(path), ROOT).replace(os.sep, "/")
    try:
        lines = open(ALLOWED, encoding="utf-8").read().splitlines()
    except FileNotFoundError:
        return False
    return any(line.split("#")[0].split() == [rel] for line in lines)


def fakematch(src):
    return bool(re.search(r"\bregister\b[^;]*\b(?:asm|__asm|__asm__)\s*\(", code_only(src)))


if __name__ == "__main__":
    bad = 0
    for path in sys.argv[1:]:
        if exempt(path):
            continue
        problems = violations(open(path, encoding="utf-8").read())
        if problems:
            bad += 1
            print(f"{path}: {'; '.join(problems)}")
    sys.exit(1 if bad else 0)
