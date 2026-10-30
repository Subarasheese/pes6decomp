#!/bin/bash
# Check assembly policy, canonical names, and compilation from a fresh copy of
# src/ and include/ using the project's compiler commands. The full build cannot
# stand in for these fresh-compilation checks: it reuses objects.
#
#   bash tools/ci_local.sh [-j N]        exit 0 only if the CI would pass
#
# The isolated source copy and compiler tools stay inside this checkout.
set -uo pipefail
jobs=2
[ "${1:-}" = "-j" ] && jobs="$2"
root="$(cd "$(dirname "$0")/.." && pwd)"
export TOOLS="$root/tools"
export TMPDIR="$root/build/tmp"
mkdir -p "$TMPDIR"
work="$(mktemp -d "$TMPDIR/ci_local.XXXXXX")"
trap 'rm -rf "$work"' EXIT
fail=0

cd "$root"
echo "== asm policy regression checks"
python3 -m unittest discover -s tools -p 'test_*.py' || fail=1
echo "== asm policy"
find src include -type f \( -name '*.c' -o -name '*.cpp' -o -name '*.h' \) -print0 | xargs -0 python3 tools/asm_policy.py || fail=1
echo "== organize --check"
out=$(python3 tools/organize.py --check 2>&1); echo "$out" | tail -1
echo "$out" | tail -1 | grep -q " 0 renamed inside, 0 moved" || { echo "$out" | grep -E "rename|move" | head -20; fail=1; }

echo "== overlay source organization"
if [ -d src/overlays ]; then
  for dir in src/overlays/*/; do
    [ -d "$dir" ] || continue
    target="$(basename "$dir")"
    PES6_TARGET="$target" python3 tools/organize.py --check || fail=1
  done
fi

echo "== every source compiles (copy in $work)"
mkdir -p "$work/obj"
cp -r src include project.toml "$work/"
# Resolve against the real checkout before compiling the fresh source copy.
python3 - > "$work/commands.txt" <<'EOF'
import sys
sys.path.insert(0, "tools")
import project
print("__default__", project.compiler_command())
for name in project.compilers():
    print(name, project.compiler_command(name))
EOF
cd "$work"
export CPATH="$work/include"
default=$(sed -n 's/^__default__ //p' commands.txt)
find src -type f \( -name '*.c' -o -name '*.cpp' \) | sort > sources.txt
export default
one() {
  f="$1"; n="$2"
  name=$(head -n1 "$f" | sed -n 's|^/\* compiler: \([^ ]*\) \*/.*|\1|p')
  cmd="$default"
  if [ -n "$name" ]; then
    cmd=$(grep "^$name " commands.txt | cut -d' ' -f2-)
    [ -n "$cmd" ] || { echo "FAIL $f: unknown compiler $name"; return 1; }
  fi
  eval "$cmd \"\$f\" -o obj/$n.o" 2> "obj/$n.err" || { echo "FAIL $f"; sed -n 1,3p "obj/$n.err"; return 1; }
}
export -f one
nl -ba sources.txt | xargs -P "$jobs" -L1 bash -c 'one "$1" "$0"' > compile.log 2>&1
bad=$(grep -c '^FAIL' compile.log)
echo "$(wc -l < sources.txt) sources, $bad do not compile"
[ "$bad" -eq 0 ] || { grep -A3 '^FAIL' compile.log | head -40; fail=1; }
cd "$root"
if [ -f config/nonmatching.json ]; then
  echo "== non-matching reconstruction compilation and comparison"
  python3 tools/nonmatching.py check --jobs "$jobs" || fail=1
fi
[ $fail -eq 0 ] && echo "CI: PASS" || echo "CI: FAIL"
exit $fail
