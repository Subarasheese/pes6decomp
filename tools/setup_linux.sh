#!/usr/bin/env bash
# Install Python dependencies only. Obtain compiler tools separately.
set -euo pipefail
root="$(cd "$(dirname "$0")/.." && pwd)"
venv="$root/.venv"
export TMPDIR="$root/build/tmp" PIP_CACHE_DIR="$root/build/pip-cache"
mkdir -p "$TMPDIR" "$root/toolchains"
if [ ! -x "$venv/bin/python" ]; then python3 -m venv "$venv"; fi
"$venv/bin/python" -m pip install -r "$root/requirements.txt"
echo "Python dependencies ready. Configure compiler paths in project.toml."
