# Ball physics

How PES6 (SLES-542.03) moves the ball, from a non-matching decompilation of the
per-frame ball update and from values traced in a live match with PCSX2. The C
below is readable reconstruction, not matching source; addresses refer to the
main executable unless they are above 0x900000 (match overlay).

## Where it runs

```
overlay match loop (0x981324)
  func_00286A60  Ball_Update          per frame
    func_00285100  Ball_Integrate     state machine below
```

A write breakpoint on the ball's y showed every per-frame write coming from
`func_00285100` (at rest: 0x285284, in flight: 0x285678); the kick itself is
applied once by overlay code (0xA6EFB0).

## The ball object

`*(Pes6Ball **)0x3E7574` (match object id 0x1B), 0x5A0B90 in practice.

| offset | type | meaning |
|---|---|---|
| 0x10 | float[3] | position x, y, z (height is negative y; resting y = -28) |
| 0x20 | float[3] | position on the previous frame (copied by Ball_Update) |
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

## Ball_Update (func_00286A60)

```c
void Ball_Update(void) {
    Pes6Ball *b = gBall;
    b->prevPos = b->pos;              /* x, y, z */
    b->prevDir = b->dir;
    b->prevState = b->state;
    gMatchFrame++;
    b->frames++;
    /* owner bookkeeping: gBallOwner (0x591E18) indexes the 0x240-byte player
     * array at 0x58E5B0 (0xFF means player 1, otherwise id % 23) */
    ...
    Ball_Integrate(0, &b->state, &b->speed, &b->vy, &b->pos[0], &b->pos[1], &b->pos[2],
                   &b->dir, dt, &b->spin, &b->curl, &b->curlDir, owner);
    /* then last-touch, timers and overlay callbacks */
}
```

### Matching status

Not matched yet; the best C draft is 31 instructions off (aligned diff) out of
226. What the draft needed, each confirmed against the original:

- `#pragma opt_repositioncode on`: the original moves `else` arms (and the
  `unk65` decrement) out of line after the epilogue.
- `#pragma opt_propagation off`: the original reloads the ball pointer for every
  statement.
- The globals at 0x591E18-0x591F14 are one object (owner byte at +0x00, team
  bytes at +0x01, frame counter at +0x0C, last touch at +0x3F, copied team bytes
  at +0x4C, flag at +0xFC). Declared as separate arrays, the compiler reorders the
  three-byte copy; as one struct the load/store order matches. The copy indexes
  `side[k]`, `side[k + 1]`, `side[k + 2]` through separate index variables.
- The owner-to-player helper is inlined three times:
  `index = 1; if (id != 0xFF) index = id % 23; return players + index * 0x240;`,
  with the owner id held in a `u32` local (the original re-masks it with
  `andi 0xFF`).

What is still different:

- Branch-likely delay slots. The original fills a branch-likely slot from the
  target only for the inlined `id == 0xFF` case and the `unk65` decrement; six
  other branches keep a `nop`. With branch-likely enabled, b210 also fills those
  six; with `#pragma no_branch_likely on` it fills none, including the two the
  original has. Neither setting reproduces the mix. A sweep of every `opt_*`
  pragma and the back-end pragmas (`peephole`, `schedule`, `conditional_move`,
  `late_conditional_move`, ...), on and off, the other MWCC versions in
  `toolchains/tc` and `-O` levels found nothing closer.
- The `0.0f` fourth float argument of `func_009B34C0` is materialised in `$f15`
  earlier in the original.
- The `unk67` decrement reloads the byte through its address in the original.

## Matching status of Ball_Integrate

`func_00285100` cannot be written as C under this repository's rules. It
transforms vectors with the VU0 sequence `vmulax`, `vmadday`, `vmaddaz`, `vmaddw`
(a matrix applied to a vector, accumulating in `ACC`). MWCC's VU0 builtins
(`_vmulbc`, `_vmaddbc`, ... with `#pragma enable_vu0_registers on`) compile, but
always produce a `vf` destination and copy it into `ACC` with an extra `vaddax`;
no builtin or destination value targets `ACC` directly. The original therefore
used inline assembly for that step, which `tools/asm_policy.py` rejects.

## Ball_Integrate (func_00285100), per state

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
