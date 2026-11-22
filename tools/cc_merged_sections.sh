#!/usr/bin/env bash
# CodeWarrior can emit a separate ELF section named .rodata for each switch.
# A relocatable link combines same-name sections with their original alignment.
set -euo pipefail

compiler=()
output=
while (($#)); do
    case "$1" in
        -o) output=$2; shift 2 ;;
        *) compiler+=("$1"); shift ;;
    esac
done
if [[ -z "$output" || ${#compiler[@]} -eq 0 ]]; then
    echo "usage: cc_merged_sections.sh COMPILER [FLAGS] SOURCE -o OUTPUT" >&2
    exit 2
fi

work=$(mktemp -d -- "$(dirname -- "$output")/.mwcc-merge.XXXXXXXX")
trap 'rm -rf -- "$work"' EXIT
"${compiler[@]}" -o "$work/compiled.o"
mips-linux-gnu-ld -EL -r "$work/compiled.o" -o "$work/merged.o"
mv -- "$work/merged.o" "$output"
