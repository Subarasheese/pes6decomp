# PES6 overlay targets

The supported SLES-542.03 disc contains 37 named MWo3 members in `OVER.AFS`.
26 contain EE code; 11 contain only data or reserve memory. `NTGUI2EU.ELF` is an
additional, independently loaded EE program. All code images have checked-in
function inventories and participate in the combined progress denominator.

The mapping is in `config/overlays.json`. Each MWo3 ID is checked against the
same-index PT_LOAD entry in the resident ELF: address, zero file size, and enough
reserved memory for the overlay and BSS must agree. The header's section bounds,
loaded-file alignment, BSS address, archive bounds, and SHA-1 are also checked.
There is no heuristic placement of the whole AFS archive as one executable.
A member-header scan of all 23,927 AFS entries found 37 MWo3 headers, all in
OVER.AFS, and no plain ELF/MWo3 headers in the other four AFS archives.

For MWo3, words at offsets 0x04, 0x08, 0x0C, 0x10 and 0x14 hold ID, load address,
text end offset, data size and BSS size. Code starts at file offset 0x80, at
load address + 0x80. Header words 0x18/0x1C equal the aligned end of loaded bytes.
Some AFS entries have additional zero archive padding, which is not loaded.
NTGUI uses its own ELF program/section headers and its own register-info GP.

Several images share addresses. A target is therefore `(image, address)`, not
just an address. Sources live in `src/overlays/<image>/`; generated images,
disassembly, objects and build proofs live in `build/targets/<image>/`. The
resident source scan excludes that subtree. NTGUI does not import resident
symbol names, since its code occupies the same address range as SLES.

## Reproduce

Run all commands from this checkout through `./run.sh`. Inputs and generated
outputs remain ignored; the catalog and CSV inventories contain metadata only.

```sh
./run.sh python tools/overlays.py prepare /path/to/PES6.iso
./run.sh python tools/overlays.py list
./run.sh python tools/overlays.py inventory all
./run.sh python tools/overlays.py asm mc_conv 008F6080
./run.sh python tools/overlays.py check mc_conv 008F6080 src/overlays/mc_conv/func_008F6080.c
./run.sh python tools/overlays.py build mc_conv --jobs 2
```

Native tools also support `PES6_TARGET=mc_conv`; the default is `main`.
Inventory boundaries come from splat/spimdisasm and are estimates, as for the
resident program. Regenerating inventories is explicit. `prepare` checks the
supported disc and catalog before writing local game inputs.

An overlay build uses the same compilers, relocation checker and linker as the
resident build. It compares code/data hashes and reconstructs the complete
original member, including its unchanged header and archive padding, to verify
the original SHA-1. The utility is checked by reconstructing its ELF loadable
segments. The progress report accepts recoveries only from the correct image's
proof, with the catalog's original hashes. Publication additionally requires
current clean proofs for every image with recovered sources.

The first recoveries are five boot-setting setters and three memory-card
conversion state accessors. Their original function names remain unknown.
Wrong-image matching was checked: the `mc_conv` function at 0x008F6080 is
rejected against `bootset`, which loads at the same base address.

## Catalog

Sizes below are bytes; text excludes the MWo3 header. Data/reservation entries
are mapped but have no executable function targets. Overlapping ranges are
separate logical images and must not be concatenated or address-deduplicated.

| Image | ID | Load address | Code bytes | Data bytes | BSS bytes | Functions |
| --- | ---: | ---: | ---: | ---: | ---: | ---: |
| `bootset.ovl` | 12 | `0x008F6000` | 14,784 | 1,536 | 4,352 | 57 |
| `connect.ovl` | 24 | `0x00AE1800` | 55,360 | 71,296 | 9,344 | 204 |
| `defaultdataset.ovl` | 20 | `0x00930000` | 6,464 | 626,304 | 285,056 | 15 |
| `dlheaparea.ovl` | 37 | `0x00E07000` | 0 | 0 | 16,265,216 | 0 |
| `edit.ovl` | 25 | `0x00B8F800` | 572,608 | 684,928 | 196,480 | 1,539 |
| `ending.ovl` | 14 | `0x008F6000` | 47,296 | 27,136 | 2,688 | 134 |
| `enter.ovl` | 10 | `0x008F6000` | 207,936 | 25,088 | 2,688 | 524 |
| `filelist.ovl` | 39 | `0x03000000` | 0 | 256 | 128 | 0 |
| `formation.ovl` | 9 | `0x008B2800` | 234,176 | 9,728 | 30,592 | 743 |
| `game.ovl` | 17 | `0x00930000` | 3,580,480 | 110,464 | 100,096 | 4,570 |
| `gameanime2_dummy.ovl` | 2 | `0x0061F800` | 0 | 0 | 1,976,320 | 0 |
| `https.ovl` | 26 | `0x00B8F800` | 638,016 | 185,216 | 612,864 | 16 |
| `ime.ovl` | 35 | `0x00D07000` | 97,216 | 7,424 | 102,912 | 297 |
| `leagueWork.ovl` | 3 | `0x00802800` | 0 | 0 | 706,560 | 0 |
| `league_common.ovl` | 18 | `0x00930000` | 586,432 | 40,320 | 1,146,752 | 1,280 |
| `leaguecup.ovl` | 22 | `0x00AE1800` | 327,744 | 10,880 | 63,616 | 817 |
| `lobby.ovl` | 21 | `0x00930000` | 844,224 | 22,400 | 549,504 | 3,148 |
| `masterleague.ovl` | 23 | `0x00AE1800` | 619,968 | 65,152 | 27,136 | 1,642 |
| `mc_conv.ovl` | 16 | `0x008F6000` | 15,296 | 19,968 | 128 | 32 |
| `memorycard.ovl` | 1 | `0x0061F800` | 226,624 | 20,480 | 12,800 | 595 |
| `netlib.ovl` | 4 | `0x00802800` | 540,480 | 16,640 | 162,944 | 2,249 |
| `realcondition.ovl` | 28 | `0x00CCE000` | 0 | 0 | 0 | 0 |
| `realconditionE.ovl` | 29 | `0x00CCE000` | 0 | 230,656 | 0 | 0 |
| `realconditionF.ovl` | 30 | `0x00CCE000` | 0 | 229,248 | 0 | 0 |
| `realconditionG.ovl` | 31 | `0x00CCE000` | 0 | 231,296 | 0 | 0 |
| `realconditionI.ovl` | 32 | `0x00CCE000` | 0 | 232,960 | 0 | 0 |
| `realconditionP.ovl` | 34 | `0x00CCE000` | 0 | 231,296 | 0 | 0 |
| `realconditionS.ovl` | 33 | `0x00CCE000` | 0 | 230,528 | 0 | 0 |
| `result.ovl` | 13 | `0x008F6000` | 167,104 | 9,600 | 12,544 | 379 |
| `select.ovl` | 19 | `0x00930000` | 185,408 | 38,656 | 37,888 | 209 |
| `select1.ovl` | 8 | `0x008B2800` | 115,520 | 49,024 | 52,608 | 256 |
| `title.ovl` | 11 | `0x008F6000` | 46,656 | 3,072 | 896 | 138 |
| `training_challenge.ovl` | 6 | `0x00802800` | 152,640 | 6,912 | 384 | 451 |
| `training_common.ovl` | 27 | `0x00CCE000` | 177,088 | 22,656 | 5,120 | 719 |
| `training_explanation.ovl` | 5 | `0x00802800` | 2,880 | 19,456 | 768 | 4 |
| `training_free.ovl` | 15 | `0x008F6000` | 224,192 | 8,320 | 128 | 340 |
| `training_situation.ovl` | 7 | `0x00802800` | 66,368 | 14,464 | 1,152 | 330 |
| `NTGUI2EU.ELF` | ELF | `0x00100000` | 759,508 | 4,492,848 | 12,609,364 | 4,182 |

## Cross-project recoveries

The first auxiliary-program cross-match batch adds 16 plain-C functions (1,348
bytes) to NTGUI2EU. Fifteen come from the recovered runtime/library sources in
[vetusmagnus/rac3-uya-decomp](https://github.com/vetusmagnus/rac3-uya-decomp); one
field accessor comes from [liolu/rac2-gc-decomp](https://github.com/liolu/rac2-gc-decomp).
`config/cross_project_matches.json` pins each upstream revision, source function,
license, PES6 address, compiler and byte count. The checked-in GPL text and source
notices cover the GCC floating-point routines; `LICENSES/RAC2-MIT.txt` preserves
the accessor's MIT notice.

The runtime recoveries include word/byte copying, a bounded word scan, ring-buffer
updates, a multibyte conversion helper, pointer-address conversion, float packing
and unpacking, and double-part comparison. Field-access behavior alone does not
establish a game's object type, so these files retain PES6 address names. Compiler
profiles describe a reproducing compiler, without claiming a unique original
compiler version.

Each source passes an exact full-span comparison, with all relocations resolved
and only zero trailing padding allowed. All 16 must report `linked` in the
NTGUI2EU build, whose reconstructed complete ELF retains its original SHA-1.
An unused upstream header helper, `nan()`, was omitted: its declaration of a
foreign-image global prevented otherwise matching objects from linking. None of
the imported functions calls it.

Budokai Tenkaichi 3 and Xenosaga I were also screened. The former's additional
candidates were assembly implementations or already-recovered resident routines;
the latter's hits were empty variadic logging functions. Those add no accepted C
recoveries in this batch. Cross-project candidates are references, never wholesale
branch merges.

The relocation-aware follow-up adds another 27 functions (7,496 bytes): ten MPEG/IPU
functions in `title.ovl` and seventeen NTGUI2EU runtime functions. The title batch
includes macroblock parsing, motion-vector decoding, bit extraction, and IPU
synchronization. The auxiliary batch includes pad-data access and actuator
queries, SIF/RPC setup, DMA setup and kernel-library helpers.

Discovery compares instruction structure while accounting for relocations, then
resolves every call/global against the selected PES6 image. Calls within an
upstream translation unit are translated to explicit PES6 function addresses.
Acceptance uses the normal unmasked relocation judge, an independent full-span
comparison, and the complete image link; all newly added functions must link.
Mutating one call address and one global address by four bytes was rejected.
These 27 additions bring the accepted cross-project total to 43 functions and
8,844 bytes. Pattern-only candidates and assembly implementations remain excluded.
