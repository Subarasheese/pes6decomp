# Source layout

`src/` is organized to approximate the tree the game was built from. The executable has no
symbols and no file names, so **only part of this layout is recovered; the rest is estimated**
from what the code references.

```
src/
  sdk/<library>/                Sony libraries (libgraph, libpad, libcdvd, libmtap, bsdsock...)
  runtime/{libm,libgcc,newlib}/ C runtime
  middleware/cri/<object>/      CRI ADX, one folder per CRI source file (adx_tlk, cri_cvfs, svm...)
  middleware/zlib/              zlib 1.1.4 inflate
  game/<domain>/<unit>/         game code in the resident executable
  overlays/<image>/[<domain>/]  the 26 EE overlays of OVER.AFS and NTGUI2EU.ELF
```

## How much of this is real

| Level | Status | Basis |
| --- | --- | --- |
| Overlay image names | Original | Names and IDs on the disc (`docs/overlays.md`) |
| SDK and runtime libraries | Recovered | Library code identified by name, ported source or strings |
| CRI objects | Mostly recovered | File names from public CRI sources. A folder starts at the first function known to come from that file, so a few functions may sit one folder early |
| Game translation units (`unit_ADDR`) | Estimated | Split where no file-local call or data crosses (`tools/units.py`) |
| Game domains | Estimated | Evidence in `config/domains.txt`; the folder names are ours |
| Domains inside an overlay | Estimated | First function referencing each string (`config/overlays/<image>/domains.txt`) |

Original source file names survive in very few places, such as `bsdsock.c` in the executable,
`skb_core.c` and `libsoftkb.c` in `NTGUI2EU.ELF`, and `ssl/ssl_lib.c` and `mrd_upnp_soap.c` in
`https.ovl`.

Overlays without enough evidence stay flat, because the image is their only known domain. That
includes `game.ovl`, which references almost no strings.

## Game domains

| Domain | Contents |
| --- | --- |
| `app` | Top-level flow: pause and result setup, code that calls into most domains |
| `audio` | Sound and commentary calls to CRI ADX |
| `data` | Player and team records, option data |
| `filesystem`, `filesystem/disc` | File and overlay loading, HDD, CD/DVD access |
| `graphics`, `graphics/model`, `graphics/texture` | GS and packet code, models, texture residence |
| `input`, `input/keyboard` | Pad and USB keyboard |
| `match`, `match/ai`, `match/ball`, `match/presentation` | Match objects, player AI, ball physics, match presentation |
| `memorycard` | Memory card control |
| `menu`, `menu/options` | Menu screens |
| `movie` | MPEG playback |
| `system` | Startup, IOP module loading, small shared helpers |
| `ui` | Menu framework and widgets (`mn*`) |

`app`, `menu`, `ui` and parts of `match` rest largely on call-graph evidence. Treat a function's
folder as a hint about its purpose, not as proof.

## Changing the layout

The paths come from `tools/layout.py`. To correct a placement:

- **Game domain:** edit `config/domains.txt`, or `config/overlays/<image>/domains.txt`.
- **Library or CRI object:** edit `LIBRARIES` in `tools/units.py`, then run it.

Then run `tools/organize.py`, with `PES6_TARGET=<image>` for an overlay. It moves the sources and
updates `config/asm_allowed.txt`. Tools may still write new matches flat, as `src/func_ADDR.c` or
`src/overlays/<image>/func_ADDR.c`; `organize.py` files them, and CI fails until it has.

Moving a source does not change its compiled code, and a full build proves it.
