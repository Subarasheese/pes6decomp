#!/usr/bin/env bash
# Split the executable with splat (Linux/WSL): assembly for every function, data, linker script,
# all under build/splat/ (generated from your own copy of the game, never committed).
# Usage: bash tools/splat.sh        (splat lives in the venv made by setup_linux.sh)
# The ELF, the splat configuration and the ROM name come from [game] in project.toml.
set -e
cd "$(dirname "$0")/.."
read -r elf config basename < <(python3 -c 'import tomllib; g = tomllib.load(open("project.toml", "rb"))["game"]; print(g["elf"], g["splat_config"], g["basename"])')
mkdir -p build/splat
python3 tools/prepare_image.py
touch config/symbol_addrs.txt
# splat cannot read config/symbol_addrs.txt itself (aliases, type:data): give it generic names.
python3 tools/splat_symbols.py "$config" build/splat_config
"$PWD/.venv/bin/python" -m splat split "build/splat_config/$(basename "$config")" "$@"
