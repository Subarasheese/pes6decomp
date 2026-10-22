# PES6 decompilation

[![Code](https://bytematch.dev/Subarasheese/pes6decomp.svg?mode=shield&label=Code&measure=matched_code_percent)](https://bytematch.dev/Subarasheese/pes6decomp) [![Functions](https://bytematch.dev/Subarasheese/pes6decomp.svg?mode=shield&label=Functions&measure=matched_functions)](https://bytematch.dev/Subarasheese/pes6decomp)

A work-in-progress matching decompilation of **Pro Evolution Soccer 6** for
PlayStation 2, PAL executable **SLES-542.03**.

The current source snapshot contains **3,684 matched functions**, contributing
**183,028 of 2,566,880 code bytes (7.13%)**. A complete local link reproduces the
original code and data; unrecovered regions are taken from the user's own
executable during the build. This is not a complete source recreation or a
standalone game build. Overlays are not covered yet.

## Contents

- `src/`: one verified function per file; address names remain until behavior is established.
- `include/pes6/`: partial, evidence-based structure views with unknown fields left explicit;
  `m2c.h` provides `M2C_FIELD` and placeholder types for sources whose fields are not yet named.
- `docs/`: research notes on recovered game systems (e.g. `ball_physics.md`).
- `config/`: executable layout, addresses and assembly-only function inventory.
- `tools/`: extraction, splitting, matching, linking and local CI tools.
- `project.toml`: compiler profiles and game configuration.

## Local setup

Use Linux or WSL with Python 3.11+, Bash, MIPS binutils (`mips-linux-gnu-*`),
and the applicable compiler tools. On WSL, keep the checkout on the Linux
filesystem so the legacy compilers can read its files. Old Sony compiler
executables may require 32-bit runtime libraries. Compiler binaries are not provided.

```sh
bash tools/setup_linux.sh
```

Keep tools inside the checkout at the paths below. All `dir` values in
`project.toml` resolve relative to the repository root, including when CI
compiles a temporary source copy. Metrowerks executables run through wibo.
The setup script creates `.venv/`; compiler binaries must be supplied separately.
Both `.venv/` and `toolchains/` are ignored by Git. Build scratch directories,
header caches and the Python package cache stay under ignored `build/`.

| Tool | Location inside the repository |
| --- | --- |
| Sony ee-gcc 2.9-991111 | `toolchains/ee-gcc2.9-991111/` |
| Sony ee-gcc 2.96 | `toolchains/ee-gcc2.96/` |
| wibo | `toolchains/wibo/wibo` |
| Metrowerks 3.0.1b210 | `toolchains/tc/mwcps2-3.0.1b210-060308/mwccps2.exe` |
| Metrowerks 3.0.1b151 | `toolchains/tc/mwcps2-3.0.1b151-050317/mwccps2.exe` |
| Metrowerks 2.4 | `toolchains/tc/mwcps2-2.4-001213/mwccps2.exe` |

The default is ee-gcc 2.9. A first-line `/* compiler: NAME */` marker selects
another profile, including ee-gcc 2.96 with sibling-call optimization disabled.

Most non-leaf game code saves `$s` registers with 128-bit `sq` and comes from
Metrowerks 3.0.1b210 at `-O4,p` (`mwcc-3.0.1b210`); `-O3` does not invert loops or
leave guard branches unfilled as the retail code does. The Sony SDK, newlib and
libgcc objects were built without small data and use the `*-G0` ee-gcc profiles.
Their sources are shared with the GT4 decompilation, and part of the CRI ADX middleware
comes from the 3s-decomp and recvx-decomp sources (see THIRD_PARTY.md).
Some SDK objects were assembled by SCE's later assembler, which fills delay slots that ee-as 2.9
leaves empty: `ee-gcc-2.9-as210-G0` compiles with ee-gcc 2.9 and assembles with the ee-as 2.10
from the ee-gcc 2.96 toolchain (both must be installed). For the kernel printf object,
`tools/cc_fpnop.sh` also restores the FP compare hazard `nop` that the original assembler kept.
Some game code needs an earlier 3.0.1 build: `Pes6Ball_Update` only matches with
3.0.1b151 (`mwcc-3.0.1b151`), whose delay-slot filler does not hoist into branch
targets with several predecessors (b198 and later do; see `docs/ball_physics.md`).
The Metrowerks builds are the ones distributed by decomp.me (`mwcps2-<version>`).
Do not substitute compilers simply because the C looks equivalent.

Extract the executable from your own supported disc image:

```sh
./run.sh python tools/iso_extract.py "/path/to/your/disc.iso" SLES_542.03 -o orig
sha1sum orig/SLES_542.03
```

Expected executable size: **3,057,568 bytes**. Expected SHA-1:
`ea3bad52bcc53acc5f007d0d286644245946260c`.

Generate local disassembly and the function inventory, then build:

```sh
./run.sh bash tools/splat.sh
./run.sh python tools/inventory.py
./run.sh python tools/build.py --jobs 2
./run.sh bash tools/ci_local.sh -j 2
```

Outputs stay in ignored `build/`. A successful full build reports `.text OK`
and `.data OK`; inspect `build/full/report.json` for per-function results.
Undecompiled bytes included in this local output are not source progress.

## Progress report

The badges come from [ByteMatch](https://bytematch.dev/Subarasheese/pes6decomp), which
reads an objdiff-format report from the `SLES_542.03_report` artifact of push runs on
`main`. CI cannot build the game, so the report is made locally from a verified full
build, committed as `progress/report.json` and uploaded by `.github/workflows/progress.yml`:

```sh
./run.sh python tools/build.py --jobs 2           # after committing
./run.sh python tools/publish_progress.py         # commits progress/report.json and pushes
```

`publish_progress.py` refuses a build that is partial, differs from the original, or
does not describe the committed HEAD. The report leaves the functions written in
assembly (`config/asm_functions.txt`) out of the total, so its percentage is slightly
higher than the one above.

The report groups functions into units listed in `config/units.txt`, generated by
`tools/units.py`. The executable has no file names, so the units are estimates: Sony SDK
libraries, libgcc, newlib and the CRI middleware are placed by their identified
functions; game code is split where no file-local call or static data crosses, into units
of at least 4 KB. Each unit's category (`game`, `sdk`, `runtime`, `middleware`) is the
prefix of its name. Edit `config/units.txt` when a real file boundary is found.

## Working on a function

```sh
./run.sh python tools/match.py asm 00313AF0
./run.sh python tools/match.py check 00313AF0 src/Pes6BitSet_Lookup.c
./run.sh python tools/organize.py --check
```

Keep exact types and edge cases while improving readability. For example,
bitset lookup accepts `0x1FFF` without reading its context, and a set bit 31
returns `-1`, not `1`. Packet helpers preserve all 64 value bits and advance the
cursor by the observed record size. Descriptive names identify established
behavior; they do not claim original C++ class identities.

Inline assembly is excluded from C recoveries, including single-instruction
blocks and assembly-inclusion macros in headers. Eight wrappers at `00105FE0`,
`00106000`, `00106020`, `00106040`, `00106618`, `00145020`, `00155D00`, and
`002DAF48` require `sync` and/or `ei`; the configured compiler does not recognize
the candidate builtins for these instructions. They remain unrecovered and use
the original executable's bytes or local disassembly in the full build, without
contributing to recovered-source totals. Replacing their barriers or interrupt
control with ordinary C or an unresolved external call would change behavior.

The only exceptions are listed in `config/asm_allowed.txt`, which `tools/asm_policy.py`
honors: functions approved for inline assembly because C cannot express what they do. They
are the three libsdr/libcdvd functions that save or switch the `$gp` register
(`sceSdCallBack`, `sceSdRemote`, `func_00113260`), which use it only for those moves.

Only publish source, configuration, and documentation. Keep original game
files, BIOS, compiler distributions, generated assembly, build outputs,
save states, logs, and personal paths outside Git. See [THIRD_PARTY.md](THIRD_PARTY.md)
for attribution and license scope.
