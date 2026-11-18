# PC gameplay comparison evidence

The wollitz3 PC decompilation independently reconstructed seven counterparts of
existing PES6 PS2 functions. This note records what that comparison establishes,
the evidence for two descriptive names, and the limits on transferring code or
behavior between the platforms. All PS2 addresses below belong to image `main`.
The source comparison was reviewed against PS2 revision
`fc8801d1bc3612683dfdd99717fa2faaba79fef6`.

## Naming the player direction

`Pes6MatchPlayer.goalDirection` is the signed 16-bit field at `+0x14`, previously
called `x14`. Its existing PS2 uses establish its role as a direction multiplier:

- `Pes6MatchPlayer_GetTeamRelativeX` (`0030DC60`), `GetTeamRelativeZ`
  (`0030DC00`) and `GetTeamRelativeXZ` (`0030DCC0`) multiply coordinates by the
  signed field at `+0x14`. Their local views call it `scale`.
- `Pes6Ball_Update` (`00286A60`) multiplies `13465.0f` by the same signed field
  when selecting a goal-line coordinate for the last-touch player or owner.
- The function at `0030EBB0` applies that multiplier to a supplied scale and
  integer factor. Its descriptive name is now
  `Pes6MatchPlayer_ScaleByGoalDirection`.

PC research observed `+1/-1` in this field, and a fresh PC compiler match
confirms the signed load and scaling operation. This supports the name; it
does not prove that all actors, initialization states or special objects on
PS2 restrict the field to those two values. The member remains `s16`, at the
same offset, and no value validation or clamping is added.

The PS2 helper retains its declaration `(u8 id, int n, float scale)` and its
expression `n * (scale * goalDirection)`. Generic references to
`func_0030EBB0` still resolve to the same address through the symbol resolver.
Names here describe behavior, not recovered original debug symbols.

## Independently matched PC counterparts

| PS2 address / symbol | PC address | Complete PC code bytes | Corroborated behavior |
| --- | --- | ---: | --- |
| `0030E6C0` / `Pes6MatchPlayer_GetSquadIndex` | `00A2C8D0` | 39 | `0xFF` returns `0xFF`; other low-byte IDs use `% 23`, stride `0x240`, field `+0x12` |
| `0030E710` / `Pes6MatchPlayer_GetSide` | `00A2C890` | 52 | `0xFF` selects player 1; other IDs use `% 23`; reads `+0x13` |
| `00311250` / `Pes6Ball_GetCurlCounter` | `00A2B230` | 10 | Unsigned word at ball `+0x6A` |
| `00311310` / `Pes6Ball_GetCurlDirection` | `00A2B170` | 10 | Unsigned byte at ball `+0x6C` |
| `0030FC10` / `Pes6MatchPlayer_GetSpeed` | `00A2BE20` | 50 | Signed player speed at `+0x1C`, after ID normalization |
| `0030EBB0` / `Pes6MatchPlayer_ScaleByGoalDirection` | `00A2C610` | 56 | Signed player field `+0x14` is used as a scale factor; ABI/order differences are below |
| `0030EA90` / `Pes6MatchPlayer_HasRole` | `00A2C6C0` | 51 | Compares player byte `+0x16` with an integer role, returning 0 or 1 |

These are seven PC matches covering 268 bytes. They corroborate existing PS2
source and do not add PS2 coverage or constitute new PS2 byte verification.
The squad index (`+0x12`) and side (`+0x13`) remain distinct.

The PC reference is a **modified/protected PES6 PC 1.00-layout PLAY runtime
snapshot from an installation with Kitserver**, not proven pristine retail:

```
SHA-256 391d841a22af72100004f4d33e7b9f7eec098aa58d81fed18c5a851797bdefc1
```

Each PC function was compiled with MSVC 7.1 (`cl.exe` 13.10.3052.0) at its trial
and final source path, then checked by the normal PC matcher. Complete extents
and every relocation target/addend were compared; unresolved references were
not accepted as matches. No runtime equivalence between the platforms is claimed.

[The evidence bundle](evidence/pc_gameplay_matches.json) includes the seven PC
source units and their shared layout header, source/compiler/object hashes,
flags, complete original-code hashes and verified reference summaries. Original
executable bytes, snapshots, compiler binaries and local filesystem paths are
not included. The source paths in the bundle are relative reproduction paths.
The bundle records results from the PC project; rechecking them requires the
identified PC reference and compiler, and it is not consumed by PS2 progress
tools or the executable build.

## Differences and additional research leads

| PS2 lead | PC comparison | What the evidence supports |
| --- | --- | --- |
| `0027D5E0` / `Pes6Ball_ClearTouchHistory` | `00475660`, separately matched PC source | Both clear ten `u16` entries at ball `+0xA4` to `0xFF`; loop-index widths differ |
| `00286A60` / `Pes6Ball_Update` | `0047AD00`, reviewed protected PC code | Matching position/direction/state copies and physics-call fields provide a strong counterpart lead; the whole PC function is not matched C |
| `00285100` / `Pes6Ball_IntegratePhysics` | `00475810`, partial PC research | Shared state fields and physics constants support comparison; neither the PC partial C nor this note resolves the PS2 VU0 matching blocker |
| `0030E7C0` | `00A2C7F0`, nonmatching PC candidate | PC instructions return the full sum of two unsigned words; the PS2 source declares a `u16` result |
| `0030EE30` / `Pes6Ball_CopyPosition` | `00474B50`, separately matched PC source | PC has a replay branch and returns an output pointer; the PS2 source returns 1. This is not a drop-in equivalent |
| `00151EA0` / `Pes6Random_Below` | `00483EF0`, separately matched PC wrapper | PC advances its saved seed even for bound zero and uses signed remainder; the PS2 research draft depicts an early return and float scaling. A matching abstraction level and PS2 semantics have not been established |

In particular, PC `00A2C610` takes `(player_id, scale, n)` and evaluates the signed
direction times `n`, then multiplies by `scale` using x87. The PS2 helper has a
different argument order and floating-point expression order. Preserve the
PS2 declaration, scalar types and arithmetic when improving names or types.
Likewise, do not infer that the PS2 direction-sum return type or RNG draft needs
to change merely because PC instructions differ.

Partial PC integrator research offers specific checks for the PS2 original:

- During prediction, PC's bounce coefficient at `00475C7E` reads the live
  ball's speed at `+0x50`, even when the integration parameters refer to a
  separate scratch ball. Check which object supplies the corresponding PS2 read.
- Equality at the airborne-to-rolling threshold `-376 * global_dt` stays
  airborne in the PC analysis; test equality and neighboring representable
  values, keeping the PS2 float rules and time-step source.
- Integer products, float stores and float-to-integer conversion boundaries
  matter. PC's signed truncation and overflow cases are test-case leads, not
  implementations of Emotion Engine arithmetic.

These points are partial PC observations to investigate, not corrections to
the PS2 physics description. PAL timing, EE floats and VU behavior remain
PS2-specific. Further naming or behavior changes should be grounded in the
PS2 instructions and callers.
