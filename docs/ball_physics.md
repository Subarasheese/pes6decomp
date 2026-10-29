# Ball physics

How PES6 (SLES-542.03) moves the ball, based on the matching per-frame update,
a reconstruction of its integration step, and values traced in a live match
with PCSX2. The C examples below are explanatory reconstructions; addresses
refer to the main executable unless they are above 0x900000 (match overlay).

## Where it runs

```
overlay match loop (0x981324)
  Pes6Ball_Update (0x00286A60)              per frame
    Pes6Ball_IntegratePhysics (0x00285100)     state machine below
```

A write breakpoint on the ball's y showed every per-frame write coming from
`Pes6Ball_IntegratePhysics` (0x00285100; at rest: 0x285284, in flight: 0x285678); the kick itself is
applied once by overlay code (0xA6EFB0).

## The ball object

`Pes6Ball_Current` (`*(Pes6Ball **)0x3E7574`) (match object id 0x1B), 0x5A0B90 in practice.

| offset | type | meaning |
|---|---|---|
| 0x10 | float[3] | position x, y, z (height is negative y; resting y = -28) |
| 0x20 | float[3] | position on the previous frame (copied by Pes6Ball_Update) |
| 0x30 | float | vertical velocity, 1/256 unit per tick, negative = upward |
| 0x50 | s32 | horizontal speed, 1/256 unit per tick |
| 0x58 | u16 | direction of travel, 0x10000 = full turn |
| 0x62 | u8 | state: 0 dead, 1 in the air, 2 rolling, 3 at a player's feet, 4 placed |
| 0x63 | u8 | state on the previous frame |
| 0x6A | u16 | curl counter (0 = no curl) |
| 0x6C | u8 | curl direction |
| 0x74 | s32 | spin (sign = top/back spin) |
| 0xF8 | float | rolling resistance |

Units: about 255 per metre (ball radius 28 = 11 cm, goal lines at x = +-13400).
`dt = *(float *)*(void **)0x3E74CC` is 1.2 on PAL: the game steps 50 times a
second and scales every step by 60/50, so the ball moves at NTSC real-time speed.

## Pes6Ball_Update (func_00286A60)

```c
void Pes6Ball_Update(void) {
    Pes6Ball *b = Pes6Ball_Current;
    b->prevPos = b->pos;              /* x, y, z */
    b->prevDir = b->dir;
    b->prevState = b->state;
    gMatchFrame++;
    b->frames++;
    /* owner bookkeeping: gBallOwner (0x591E18) indexes the 0x240-byte player
     * array at 0x58E5B0 (0xFF means player 1, otherwise id % 23) */
    ...
    Pes6Ball_IntegratePhysics(0, &b->state, &b->speed, &b->vy, &b->pos[0], &b->pos[1], &b->pos[2],
                   &b->dir, dt, &b->spin, &b->curl, &b->curlDir, owner);
    /* then last-touch, timers and overlay callbacks */
}
```

### Matching status

Matched as `src/Pes6Ball_Update.c`. It needs the 2005 compiler build
`mwcps2-3.0.1b151-050317` (profile `mwcc-3.0.1b151`; b145 gives the same code) plus
`#pragma opt_propagation off`.

The project's usual b210 got within 31 instructions but never closer. b151 differs in
the delay-slot filler: up to b151 the compiler does not hoist a branch target's first
instruction into a branch-likely slot when the target has several predecessors, and
b198 onwards (including b210) does. The original leaves those slots as `nop`. The same
build also explains the other leftovers seen with b210 (earlier `$f15` setup, the
`unk67` reload, the `unk65` `bnel`) and lays out the cold `else` arms without
`opt_repositioncode`. The last detail was the three-byte copy, written as
`i = k; ...[i]; i = k + 1; ...[i]; i = k + 2; ...[i]`.

## Matching status of Ball_Integrate

`Pes6Ball_IntegratePhysics` (0x00285100) cannot be written as C under this repository's rules. It
transforms vectors with the VU0 sequence `vmulax`, `vmadday`, `vmaddaz`, `vmaddw`
(a matrix applied to a vector, accumulating in `ACC`). MWCC's VU0 builtins
(`_vmulbc`, `_vmaddbc`, ... with `#pragma enable_vu0_registers on`) compile, but
always produce a `vf` destination and copy it into `ACC` with an extra `vaddax`;
no builtin or destination value targets `ACC` directly. The original therefore
used inline assembly for that step, which `tools/asm_policy.py` rejects.

## Pes6Ball_IntegratePhysics (0x00285100), per state

`cosTab(dir, speed)` and `sinTab(dir, speed)` are overlay table lookups
(0xBBB990, 0xBBB9C0) returning the speed's x and z components.

### State 1, in the air

```c
if (curl) dir -= or += (2048 * dt * speed) / (curl * 0x7000);

x += dt * cosTab(dir, speed) / 256;
y += dt * vy / 256;
z += dt * sinTab(dir, speed) / 256;

if (y < -64) {                       /* higher than ~25 cm: wind */
    windDir = atan2 of the vector at 0x5A24B0;           /* func_002953D0 */
    windSpeed = 256 * (0.3 * windByte@0x5A24AC) / (50 * 10);
    x += dt * cosTab(windDir, windSpeed) / 256;
    z += dt * sinTab(windDir, windSpeed) / 256;
}

/* ball mesh rotation from spin and curl (VU0 matrix code, visual only) */

if (vy <= 0 || y + vy * dt / 1024 < -28) {   /* still in the air */
    if (y <= -28)
        vy += dt * (188 + speed * (speed * spin / 1400000.0f) / 24576);
                                    /* gravity + lift from spin */
} else {                             /* touches the grass: bounce */
    loss = min(2 * speed / |1 + vy|, 28) (+2 on some pitch condition);
    speed -= speed * (40 - loss) / 256;
    if (vy > 6016) speed -= min(0.8 * (vy - 6016), 0.4 * speed);
    rest = min(0x88 + speed / 512, 0xA0);      /* 0.53 .. 0.63 */
    vy = -vy * rest / 256;          /* (harder landings above 9024 lose more) */
    y = -28;
    /* curl turns the direction again on the bounce; spin trades with speed */
    if (speed < 0) { dir += 0x8000; speed = -speed * 7 / 10; spin = -spin * 4 / 10; }
    if (vy > -376 * dt) { vy = 0; state = 2; }  /* too weak to bounce: roll */
}

/* air drag, quadratic */
v = (int)sqrtf(speed * speed + vy * vy);
if (v > 0x5800) v -= 0x2333;
speed -= dt * speed * v / 4551266.0f;          /* constant at 0x591BF8 */
vy    -= dt * v * vy / 4551266.0f;
if (speed < 0) speed = 0;
```

Gravity alone is 188/256 = 0.734 units per tick squared at dt = 1, about
10.4 m/s^2. The measured free-kick curve accelerated downwards by 0.71-0.72
units per frame instead: backspin lift and drag offset part of the gravity, and
the step in that value mid-flight comes from the spin term.

### State 2, rolling

```c
speed -= dt * (grass drag);                   /* msub with a constant */
x += dt * cosTab(dir, speed) / 256;
z += dt * sinTab(dir, speed) / 256;
vy = 0;
y = (speed > 0x1800 && spin > 0) ? -28 - random(10) : -28;   /* small hops */

if (speed > 0x4000) speed -= speed * dt / b->rollResist;
else                speed -= speed * dt / max(b->rollResist - speed / 600, 2);
if (speed >= 20) speed -= 20;
if (spin > speed) spin = speed;
if (speed < 0x100) state = 0;                  /* stopped */
```

Measured: a rolling ball keeps about 98.27 % of its speed per frame.

### State 3, at a player's feet

The ball follows the owning player's foot: direction and speed are copied from
the player (0x58E5B0 array, +0x26 / +0x1C), spin is cleared, and the position is
blended towards the animation's contact point over a few frames.

### State 0 and default

`speed = 0; vy = 0; y = -28;`

## Descriptive gameplay symbols

These are behavior-based names, not recovered original debug symbols. Existing
named symbols and structure layouts are preserved. The small accessors retain
their original signatures, including integer addresses and output parameters.

| Address | Name | Evidence |
| --- | --- | --- |
| `0x0027D360` | `Pes6Ball_PlaceAtRest` | Writes x/z and ground y = -28; clears velocity, speed, spin, curl and state, then calls the existing reset helper with 100. |
| `0x00285100` | `Pes6Ball_IntegratePhysics` | The state-dependent integration step described above; naming its call does not make the assembly-backed function a C recovery. |
| `0x0030EE30` | `Pes6Ball_CopyPosition` | Copies all three position coordinates to the destination and returns 1. |
| `0x0030EE60` | `Pes6Ball_GetPositionX` | Stores the x coordinate in the output float and also returns its integer conversion. |
| `0x00311250` | `Pes6Ball_GetCurlCounter` | Reads the unsigned 16-bit curl field at +0x6A. |
| `0x00311310` | `Pes6Ball_GetCurlDirection` | Reads the unsigned byte at +0x6C. |
| `0x0030E6C0` | `Pes6MatchPlayer_GetSquadIndex` | Reads the match player's +0x12 squad index; preserves the 0xFF sentinel. |
| `0x0030E710` | `Pes6MatchPlayer_GetSide` | Reads the match player's +0x13 side after the existing player-id normalization. |
| `0x003E7574` | `Pes6Ball_Current` | The ball pointer used by the update and position/curl accessors, confirmed by the runtime tracing above. |
| `0x0058E5B0` | `Pes6MatchPlayers` | Match-player table with a 0x240-byte stride; see `include/pes6/match_player.h`. |
| `0x00592980` | `Pes6MatchSquads` | Two squads of 32 player records, indexed by the match player's squad and slot fields. |
| `0x00591E18` | `Pes6MatchState_Current` | State block whose ball-owner id and frame counter are used by `Pes6Ball_Update`. |

The squad index and side remain distinct fields. Unidentified player abilities,
state flags, and object roles retain their generic names.
