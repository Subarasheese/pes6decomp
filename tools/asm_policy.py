#!/usr/bin/env python3
"""Reject inline assembly in recovered C/C++ sources and their headers.

Instruction intrinsics written as assembly, file-scope assembly, assembly
inclusion macros, and register-pinned variables are not C recoveries. Functions
that cannot yet be expressed faithfully with the configured compiler remain
unrecovered; the full build retains their original code from local game inputs.

    asm_policy.py FILE...    print violations; exit 1 if any
"""
import re
import sys

# Remove comments and literals before checking C identifiers, so documentation,
# string contents and escaped quotes cannot produce false positives.
NON_CODE = re.compile(r'''//[^\n]*|/\*[\s\S]*?\*/|"(?:\\.|[^"\\])*"|'(?:\\.|[^'\\])*' ''', re.X)
ASM = re.compile(r"\b(?:asm|__asm|__asm__)\b")
INCLUSION = re.compile(r"\b(?:INCLUDE_ASM|INCLUDE_RODATA)\b")


def code_only(src):
    # C splices physical lines before tokenization, including inside comments.
    src = re.sub(r"\\\r?\n", "", src)
    return NON_CODE.sub(lambda match: re.sub(r"[^\n]", " ", match[0]), src)


def violations(src):
    code = code_only(src)
    out = []
    if ASM.search(code):
        out.append("inline or file-scope assembly is not a C recovery")
    if INCLUSION.search(code):
        out.append("assembly-inclusion macros are not C recoveries")
    return out


def fakematch(src):
    return bool(re.search(r"\bregister\b[^;]*\b(?:asm|__asm|__asm__)\s*\(", code_only(src)))


if __name__ == "__main__":
    bad = 0
    for path in sys.argv[1:]:
        problems = violations(open(path, encoding="utf-8").read())
        if problems:
            bad += 1
            print(f"{path}: {'; '.join(problems)}")
    sys.exit(1 if bad else 0)
