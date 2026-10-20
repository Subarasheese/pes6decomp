#!/usr/bin/env bash
# Install Python dependencies only. Obtain compiler tools separately.
set -euo pipefail
root="$(cd "$(dirname "$0")/.." && pwd)"
venv="$HOME/.local/share/pes6/venv"
if [ ! -x "$venv/bin/python" ]; then python3 -m venv "$venv"; fi
"$venv/bin/python" -m pip install -r "$root/requirements.txt"
echo "Python dependencies ready. Configure compiler paths in project.toml."
