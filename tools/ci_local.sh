#!/bin/bash
# Run the CI's "check" workflow locally, before a push: the same steps and the same compile commands
# as .github/workflows/check.yml (asm policy, organize --check, every source compiled on its own
# from a fresh copy of src/ and include/). The full build cannot stand in for it: it reuses objects.
#
#   bash tools/ci_local.sh [-j N]        exit 0 only if the CI would pass
#
# The old ee-gcc cannot stat files on /mnt/c (EOVERFLOW), so the tree is copied to Linux first.
set -uo pipefail
jobs=2
[ "${1:-}" = "-j" ] && jobs="$2"
root="$(cd "$(dirname "$0")/.." && pwd)"
export TOOLS="$root/tools"
work="$(mktemp -d /tmp/ci_local.XXXXXX)"
trap 'rm -rf "$work"' EXIT
fail=0

cd "$root"
echo "== asm policy"
find src -type f \( -name '*.c' -o -name '*.cpp' \) -print0 | xargs -0 python3 tools/asm_policy.py || fail=1
echo "== organize --check"
out=$(python3 tools/organize.py --check 2>&1); echo "$out" | tail -1
echo "$out" | tail -1 | grep -q " 0 renamed inside, 0 moved" || { echo "$out" | grep -E "rename|move" | head -20; fail=1; }

echo "== every source compiles (copy in $work)"
mkdir -p "$work/obj"
cp -r src include project.toml "$work/"
cd "$work"
export CPATH="$work/include"
python3 - > commands.txt <<'EOF'
import tomllib, os
config = tomllib.load(open("project.toml", "rb"))
for name, c in {"__default__": config["compiler"], **config.get("compilers", {})}.items():
    print(name, c["command"].replace("{dir}", os.path.expanduser(c["dir"])).replace("{tools}", os.environ.get("TOOLS", "")))
EOF
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
[ $fail -eq 0 ] && echo "CI: PASS" || echo "CI: FAIL"
exit $fail
