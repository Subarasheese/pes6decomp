#!/usr/bin/env bash
# Run a command with the PES6 Python environment and repository as cwd.
set -euo pipefail
root="$(cd "$(dirname "$0")" && pwd)"
export PATH="$root/.venv/bin:$PATH"
export TOOLS="$root/tools"
export TMPDIR="$root/build/tmp" PIP_CACHE_DIR="$root/build/pip-cache"
mkdir -p "$TMPDIR"
unset GT4_COMPILER_COMMAND INCLUDE_STAMP CPATH C_INCLUDE_PATH CPLUS_INCLUDE_PATH
cd "$root"
exec "$@"
