#!/usr/bin/env bash
# Compile one C source like `GCC ARGS...` (ARGS include -c SRC -o OUT), turning the FP condition
# hazard gcc marks after a floating-point compare (`c.<cond>.<fmt>` followed by `#nop`) into a real
# nop before the source is assembled.
#
# The Sony SDK's kernel printf object (ftoi, printfloat, the printf engine) was assembled by an EE
# assembler that fills delay slots like SCE ee-as 2.10 but, unlike it, does not treat the R5900's
# FP condition code as interlocked: it puts a nop between `c.eq.s` and `bc1f`. None of the available
# assemblers does both (ee-as 2.9 inserts that nop but also one after `mtc1` and never fills delay
# slots; ee-as 2.10 and 2.12 fill but insert neither), so this wrapper supplies the nop and lets
# ee-as 2.10 do the rest.
#
#   cc_fpnop.sh GCC ARGS...
set -euo pipefail
gcc="$1"; shift
args=(); src=""; out=""
while [ $# -gt 0 ]; do
    case "$1" in
        -c) ;;
        -o) out="$2"; shift ;;
        *.c) src="$1" ;;
        *) args+=("$1") ;;
    esac
    shift
done
[ -n "$src" ] && [ -n "$out" ] || { echo "cc_fpnop.sh: need SRC.c and -o OUT" >&2; exit 2; }
tmp="$(mktemp -d)"
trap 'rm -rf "$tmp"' EXIT
"$gcc" "${args[@]}" -S -o "$tmp/out.s" "$src"
awk '{ if (prev ~ /^\tc\.[a-z]+\.[sd]\t/ && $0 == "\t#nop") print "\tnop"; else print; prev = $0 }' \
    "$tmp/out.s" > "$tmp/fp.s"
"$gcc" "${args[@]}" -c -o "$out" "$tmp/fp.s"
