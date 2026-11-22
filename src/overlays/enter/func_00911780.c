/* compiler: mwcc-3.0.1b210 */
#include "types.h"
typedef struct {
    u8 reserved00[0x28];
    float rate;
    u8 active, mirrored;
    u8 reserved2e[2];
    u16 clip;
    u8 reserved32[6];
    float frame;
} EntranceMotion;
typedef struct {
    u8 reserved00[4];
    EntranceMotion *motion;
    u8 reserved08[0x14];
    s32 speed, baseSpeed;
    u16 reserved24, heading, direction, reserved2a, targetHeading;
} EntranceActor;
typedef struct {
    u8 direction, speed;
} MotionSample;
extern float D_00591BEC[];
extern u32 D_0092F0D0[];
extern u8 *func_00208330(u16);
extern s32 func_001A5F20(s32);
static inline s32 mirror_sign(EntranceActor *actor) {
    return actor->motion->mirrored == 0 ? 1 : -1;
}

static inline u16 heading_distance(u16 from, u16 to) {
    u16 distance;
    s32 difference = from;
    s32 target = to;
    difference = target - difference;
    distance = difference + 65536;
    if (distance > 32768)
        return 65536 - distance;
    return distance;
}

static inline s32 target_turn(EntranceActor *actor, s32 frame, s32 start, s32 stop) {
    s32 result = 0;
    if (frame >= start && frame < stop) {
        u16 frameStep;
        u16 distance;
        u16 h = actor->heading;
        u16 t = actor->targetHeading;
        distance = heading_distance(h, t);
        frameStep = (u16)(distance / (stop - frame));
        result = (s32)(actor->motion->rate * (frameStep * mirror_sign(actor)));
    }
    return result;
}

static inline void apply_sample(EntranceActor *actor, s32 direction, u8 speed, s32 denominator) {
    if (direction < 32768) {
        actor->direction = actor->heading + direction * mirror_sign(actor);
    } else {
        s32 distance = 65536 - direction;
        {
            s32 sign;
            if (!actor->motion->mirrored)
                sign = 1;
            else
                sign = -1;
            distance *= sign;
            actor->direction = actor->heading - distance;
        }
    }
    actor->speed = actor->baseSpeed * speed / denominator;
}

/* The entrance clips store heading as a 16-bit turn. Some clips round the
 * per-frame step to an integer, and others retain fractional degrees. */
#define INTEGER_TURN(actor, degrees, frames) (mirror_sign(actor) * ((degrees) * 182) / (frames))
#define FRACTIONAL_TURN(actor, degrees, frames)                                                    \
    ((mirror_sign(actor) * (degrees) * 182.0f) / (frames))
#define ADVANCE_HEADING(actor, step) ((u16)((step) + (float)(actor)->heading + 0.0f))
#define RETREAT_HEADING(actor, step) ((u16)(((float)(actor)->heading + 0.0f) - (step)))

/* Update speed and direction from movement tracks sampled every two frames. */
void func_00911780(EntranceActor *actor) {
    float turnScale = 1.0f;
    s32 directionOffset = 0;
    s32 globalScale = (s32)D_00591BEC[0];
    float scale = 1.0f;
    u8 speedMultiplier = (D_0092F0D0[0] & 0x2000) ? 2 : 1;
    u16 nominalSpeed;
    u16 clip;
    s32 frame;
    u8 *speedTrack;
    MotionSample *track;
    if (!actor->motion->active && !(D_0092F0D0[0] & 0x10))
        return;
    speedTrack = func_00208330(actor->motion->clip);
    track = (MotionSample *)func_00208330(actor->motion->clip);
    frame = (s32)actor->motion->frame;
    clip = actor->motion->clip;
    nominalSpeed = 0;
    if (clip < 0x59a) {
        switch (clip) {
        case 0x1bf:
        case 0x489:
            actor->speed = 0;
            return;
        case 0x414:
            nominalSpeed = 0xd00;
            break;
        case 0x38c:
            nominalSpeed = 0x800;
            break;
        case 0x38d:
            nominalSpeed = 0x1500;
            break;
        case 0x48e:
            nominalSpeed = 0x700;
            break;
        case 0x45f:
            nominalSpeed = 0x600;
            actor->heading += target_turn(actor, frame, 8, 34);
            break;
        case 0x461:
            nominalSpeed = 0x600;
            actor->heading += target_turn(actor, frame, 10, 42);
            break;
        case 0x45d:
            nominalSpeed = 0x700;
            break;
        case 0x48b:
            nominalSpeed = 0x1200;
            break;
        case 0x411:
            nominalSpeed = 0x600;
            actor->heading += target_turn(actor, frame, 2, 42);
            break;
        case 0x410:
            nominalSpeed = 0x400;
            actor->heading += target_turn(actor, frame, 2, 38);
            break;
        case 0x442:
            nominalSpeed = 0x100;
            break;
        case 0x409:
            nominalSpeed = 0xd00;
            break;
        case 0x2bd:
            return;
        default:
            return;
        }

        switch (clip) {
        case 0x38c:
        case 0x48e:
        case 0x38d:
        case 0x409: {
            u8 sample = speedTrack[frame / 2];
            s32 current;
            s32 base = nominalSpeed * speedMultiplier;
            actor->baseSpeed = base;
            current = (base * sample) / 256;
            if (current)
                actor->speed = current * globalScale / 256;
            break;
        }
        default: {
            u8 direction = track[frame / 2].direction;
            u8 speed = track[frame / 2].speed;
            actor->baseSpeed = nominalSpeed;
            apply_sample(actor, direction * 255, speed, 255);
        }
        }
        return;
    }
    switch (func_001A5F20(5)) {
    case 0x100e3:
        switch (clip) {
        case 0x5a6:
        case 0x5a7:
        case 0x5a8:
        case 0x5a9:
            nominalSpeed = 0x200;
            break;
        case 0x5aa:
        case 0x5ab:
        case 0x5ac:
        case 0x5ad:
            nominalSpeed = 0;
            break;
        case 0x5ae:
        case 0x5af:
        case 0x5b0:
        case 0x5b1:
            nominalSpeed = 0;
            break;
        case 0x5b2:
        case 0x5b3:
        case 0x5b4:
        case 0x5b5:
            nominalSpeed = 0;
            break;
        case 0x5b6:
            nominalSpeed = 0;
            break;
        case 0x5b7:
            nominalSpeed = 0;
            break;
        default:
            return;
        }

        break;
    case 0x100e4:
    case 0x100e5:
        return;
    case 0x100e6:
        switch (clip) {
        case 0x5a4:
            if (frame >= 136 && frame < 150)
                actor->heading = RETREAT_HEADING(
                    actor,
                    actor->motion->rate * (speedMultiplier * INTEGER_TURN(actor, 52, 14)) * .5f);
            nominalSpeed = 0x700;
            break;
        case 0x5a3:
            nominalSpeed = 0x300;
            break;
        case 0x5a2:
            if (frame >= 124 && frame < 150)
                actor->heading = ADVANCE_HEADING(
                    actor, actor->motion->rate *
                               ((float)speedMultiplier * FRACTIONAL_TURN(actor, 78.889f, 26.0f)) *
                               .5f);
            nominalSpeed = 0xa00;
            break;
        case 0x5a1:
            if (frame >= 148 && frame < 150)
                actor->heading = ADVANCE_HEADING(
                    actor, actor->motion->rate *
                               ((float)speedMultiplier * FRACTIONAL_TURN(actor, 3.241f, 2.0f)) *
                               .5f);
            nominalSpeed = 0x700;
            break;
        case 0x5a0:
            if (frame >= 144 && frame < 150)
                actor->heading = RETREAT_HEADING(
                    actor, actor->motion->rate *
                               ((float)speedMultiplier * FRACTIONAL_TURN(actor, 31.875f, 6.0f)) *
                               .5f);
            nominalSpeed = 0x300;
            break;
        case 0x59f:
            if (frame >= 138 && frame < 150)
                actor->heading = ADVANCE_HEADING(
                    actor, actor->motion->rate *
                               ((float)speedMultiplier * FRACTIONAL_TURN(actor, 45.158f, 12.0f)) *
                               .5f);
            nominalSpeed = 0x500;
            break;
        case 0x59e:
            if (frame >= 132 && frame < 150)
                actor->heading = RETREAT_HEADING(
                    actor,
                    actor->motion->rate * (speedMultiplier * INTEGER_TURN(actor, 125, 18)) * .5f);
            nominalSpeed = 0xc00;
            break;
        case 0x59d:
            if (frame >= 118 && frame < 150)
                actor->heading = RETREAT_HEADING(
                    actor,
                    actor->motion->rate * (speedMultiplier * INTEGER_TURN(actor, 180, 32)) * .5f);
            nominalSpeed = 0x1400;
            break;
        case 0x59c:
            if (frame >= 118 && frame < 150)
                actor->heading = RETREAT_HEADING(
                    actor,
                    actor->motion->rate * (speedMultiplier * INTEGER_TURN(actor, 180, 32)) * .5f);
            nominalSpeed = 0x1c00;
            break;
        case 0x59b:
            if (frame >= 142 && frame < 150)
                actor->heading = ADVANCE_HEADING(
                    actor,
                    actor->motion->rate * (speedMultiplier * INTEGER_TURN(actor, 65, 8)) * .5f);
            nominalSpeed = 0x1200;
            break;
        case 0x59a:
            if (frame >= 140 && frame < 150)
                actor->heading = RETREAT_HEADING(
                    actor,
                    actor->motion->rate * (speedMultiplier * INTEGER_TURN(actor, 50, 10)) * .5f);
            nominalSpeed = 0x600;
            break;
        }
        scale = 0.35f;

        break;
    case 0x100e7:
        scale = 0.5f;
        switch (clip) {
        case 0x59a:
            directionOffset = 0x0;
            nominalSpeed = 0x400;
            break;
        case 0x59b:
            directionOffset = 0xe38;
            if (frame >= 174 && frame < 200)
                actor->heading = ADVANCE_HEADING(
                    actor,
                    actor->motion->rate * (speedMultiplier * INTEGER_TURN(actor, 133, 26)) * .5f);
            nominalSpeed = 0x600;
            break;
        case 0x59c:
            directionOffset = 0x271a;
            if (frame >= 170 && frame < 200)
                actor->heading = ADVANCE_HEADING(
                    actor,
                    actor->motion->rate * (speedMultiplier * INTEGER_TURN(actor, 2, 30)) * .5f);
            nominalSpeed = 0x600;
            break;
        case 0x59d:
            directionOffset = 0x4440;
            if (frame >= 164 && frame < 196)
                actor->heading = RETREAT_HEADING(
                    actor,
                    actor->motion->rate * (speedMultiplier * INTEGER_TURN(actor, 186, 32)) * .5f);
            nominalSpeed = 0x900;
            break;
        case 0x59e:
            directionOffset = 0x5550;
            if (frame >= 170 && frame < 200)
                actor->heading = ADVANCE_HEADING(
                    actor,
                    actor->motion->rate * (speedMultiplier * INTEGER_TURN(actor, 120, 30)) * .5f);
            nominalSpeed = 0x600;
            break;
        case 0x59f:
            directionOffset = 0x71c0;
            if (frame >= 156 && frame < 190)
                actor->heading = ADVANCE_HEADING(
                    actor,
                    actor->motion->rate * (speedMultiplier * INTEGER_TURN(actor, 127, 34)) * .5f);
            nominalSpeed = 0x700;
            break;
        case 0x5a0:
            directionOffset = 0x8880;
            nominalSpeed = 0x900;
            break;
        case 0x5a1:
            directionOffset = 0x9f40;
            nominalSpeed = 0x500;
            break;
        case 0x5a2:
            directionOffset = 0xb54a;
            if (frame >= 178 && frame < 200)
                actor->heading = RETREAT_HEADING(
                    actor,
                    actor->motion->rate * (speedMultiplier * INTEGER_TURN(actor, 90, 22)) * .5f);
            nominalSpeed = 0x600;
            break;
        case 0x5a3:
            directionOffset = 0xd326;
            if (frame >= 182 && frame < 200)
                actor->heading = ADVANCE_HEADING(
                    actor,
                    actor->motion->rate * (speedMultiplier * INTEGER_TURN(actor, 93, 18)) * .5f);
            nominalSpeed = 0x700;
            break;
        case 0x5a4:
            directionOffset = 0xe380;
            if (frame >= 180 && frame < 200)
                actor->heading = ADVANCE_HEADING(
                    actor,
                    actor->motion->rate * (speedMultiplier * INTEGER_TURN(actor, 75, 20)) * .5f);
            nominalSpeed = 0x500;
            break;
        case 0x5a5:
            directionOffset = 0x38e;
            if (frame >= 154 && frame < 180)
                actor->heading = ADVANCE_HEADING(
                    actor,
                    actor->motion->rate * (speedMultiplier * INTEGER_TURN(actor, 150, 26)) * .5f);
            nominalSpeed = 0xb00;
            break;
        case 0x5a6:
            directionOffset = 0x1a4e;
            if (frame >= 140 && frame < 174)
                actor->heading = ADVANCE_HEADING(
                    actor,
                    actor->motion->rate * (speedMultiplier * INTEGER_TURN(actor, 180, 34)) * .5f);
            nominalSpeed = 0x1800;
            break;
        case 0x5a7:
            directionOffset = 0x3552;
            if (frame >= 144 && frame < 180)
                actor->heading = RETREAT_HEADING(
                    actor, actor->motion->rate *
                               ((float)speedMultiplier * FRACTIONAL_TURN(actor, 170.93f, 36.0f)) *
                               .5f);
            nominalSpeed = 0xc00;
            break;
        case 0x5a8:
            directionOffset = 0x44f6;
            if (frame >= 152 && frame < 180)
                actor->heading = RETREAT_HEADING(
                    actor, actor->motion->rate *
                               ((float)speedMultiplier * FRACTIONAL_TURN(actor, 110.455f, 28.0f)) *
                               .5f);
            nominalSpeed = 0x700;
            break;
        case 0x5a9:
            directionOffset = 0x5f44;
            if (frame >= 158 && frame < 180)
                actor->heading = ADVANCE_HEADING(
                    actor, actor->motion->rate *
                               ((float)speedMultiplier * FRACTIONAL_TURN(actor, 119.429f, 22.0f)) *
                               .5f);
            nominalSpeed = 0x800;
            break;
        case 0x5aa:
            directionOffset = 0x7bb4;
            if (frame >= 156 && frame < 180)
                actor->heading = ADVANCE_HEADING(
                    actor, actor->motion->rate *
                               ((float)speedMultiplier * FRACTIONAL_TURN(actor, 141.81f, 24.0f)) *
                               .5f);
            nominalSpeed = 0xb00;
            break;
        case 0x5ab:
            directionOffset = 0x96b8;
            if (frame >= 154 && frame < 180)
                actor->heading = RETREAT_HEADING(
                    actor, actor->motion->rate *
                               ((float)speedMultiplier * FRACTIONAL_TURN(actor, 126.977f, 26.0f)) *
                               .5f);
            nominalSpeed = 0xa00;
            break;
        case 0x5ac:
            directionOffset = 0xae2e;
            if (frame >= 158 && frame < 180)
                actor->heading = RETREAT_HEADING(
                    actor, actor->motion->rate *
                               ((float)speedMultiplier * FRACTIONAL_TURN(actor, 83.571f, 22.0f)) *
                               .5f);
            nominalSpeed = 0xa00;
            break;
        case 0x5ad:
            directionOffset = 0xc382;
            if (frame >= 158 && frame < 180)
                actor->heading = ADVANCE_HEADING(
                    actor, actor->motion->rate *
                               ((float)speedMultiplier * FRACTIONAL_TURN(actor, 85.909f, 22.0f)) *
                               .5f);
            nominalSpeed = 0x700;
            break;
        case 0x5ae:
            directionOffset = 0xd548;
            if (frame >= 162 && frame < 180)
                actor->heading = ADVANCE_HEADING(
                    actor, actor->motion->rate *
                               ((float)speedMultiplier * FRACTIONAL_TURN(actor, 97.714f, 18.0f)) *
                               .5f);
            nominalSpeed = 0x700;
            break;
        case 0x5af:
            directionOffset = 0xee2a;
            if (frame >= 158 && frame < 180)
                actor->heading = RETREAT_HEADING(
                    actor, actor->motion->rate *
                               ((float)speedMultiplier * FRACTIONAL_TURN(actor, 87.551f, 22.0f)) *
                               .5f);
            nominalSpeed = 0x900;
            break;
        default:
            return;
        }

        break;
    case 0x100e8:
        switch (clip) {
        case 0x59a:
            nominalSpeed = 0x700;
            break;
        case 0x59b:
            nominalSpeed = 0x800;
            break;
        case 0x59c:
            nominalSpeed = 0x1400;
            break;
        case 0x59d:
            nominalSpeed = 0x1200;
            break;
        case 0x59e:
            nominalSpeed = 0x1000;
            break;
        case 0x5b3:
            nominalSpeed = 0x1100;
            break;
        case 0x59f:
            nominalSpeed = 0x800;
            break;
        case 0x5a0:
            nominalSpeed = 0x700;
            break;
        case 0x5a1:
            nominalSpeed = 0x700;
            break;
        case 0x5a2:
            nominalSpeed = 0x800;
            break;
        case 0x5a3:
            nominalSpeed = 0x700;
            break;
        case 0x5a4:
            nominalSpeed = 0xb00;
            break;
        case 0x5a5:
            nominalSpeed = 0xb00;
            break;
        case 0x5a6:
            nominalSpeed = 0x1000;
            break;
        case 0x5a7:
            if (frame >= 16 && frame < 156)
                actor->heading = ADVANCE_HEADING(
                    actor, actor->motion->rate * (speedMultiplier * INTEGER_TURN(actor, 360, 140)) *
                               turnScale);
            nominalSpeed = 0xe00;
            break;
        case 0x5a8:
            nominalSpeed = 0xf00;
            break;
        case 0x5a9:
            if (frame >= 20 && frame < 148)
                actor->heading = RETREAT_HEADING(
                    actor, actor->motion->rate * (speedMultiplier * INTEGER_TURN(actor, 360, 128)) *
                               turnScale);
            nominalSpeed = 0xe00;
            break;
        case 0x5aa:
            return;
        case 0x5ab:
            if (frame >= 20 && frame < 192)
                actor->heading = RETREAT_HEADING(
                    actor, actor->motion->rate * (speedMultiplier * INTEGER_TURN(actor, 360, 172)) *
                               turnScale);
            nominalSpeed = 0x1000;
            break;
        case 0x5b0:
            nominalSpeed = 0xe00;
            break;
        case 0x5b1:
            nominalSpeed = 0xf00;
            break;
        case 0x5b2:
            nominalSpeed = 0x1000;
            break;
        case 0x5ad:
            nominalSpeed = 0xe00;
            break;
        case 0x5ae:
            nominalSpeed = 0x1000;
            break;
        case 0x5af:
            nominalSpeed = 0xf00;
            break;
        case 0x5ac:
            nominalSpeed = 0xf00;
            break;
        default:
            return;
        }

        break;
    case 0x100e9:
        switch (clip) {
        case 0x59a:
            nominalSpeed = 0x700;
            break;
        case 0x59b:
            nominalSpeed = 0x400;
            break;
        case 0x59c:
            nominalSpeed = 0x400;
            break;
        case 0x59d:
            nominalSpeed = 0x500;
            break;
        case 0x59e:
            nominalSpeed = 0x500;
            break;
        case 0x59f:
            nominalSpeed = 0x600;
            break;
        case 0x5a0:
            nominalSpeed = 0x1000;
            break;
        case 0x5a1:
            nominalSpeed = 0xf00;
            break;
        case 0x5a2:
            nominalSpeed = 0;
            break;
        case 0x5a3:
            nominalSpeed = 0;
            break;
        case 0x5a4:
            nominalSpeed = 0;
            break;
        case 0x5a5:
            nominalSpeed = 0;
            break;
        }

        break;
    case 0x100ea:
        switch (clip) {
        case 0x59a:
            nominalSpeed = 0x400;
            break;
        case 0x59b:
            if (frame >= 158 && frame < 288)
                actor->heading = ADVANCE_HEADING(
                    actor, actor->motion->rate *
                               ((float)speedMultiplier * FRACTIONAL_TURN(actor, 90.0f, 130.0f)) *
                               turnScale);
            nominalSpeed = 0x900;
            break;
        case 0x59c:
            nominalSpeed = 0x500;
            break;
        }

        break;
    case 0x100eb:
        switch (clip) {
        case 0x59a:
            nominalSpeed = 0x100;
            break;
        case 0x59b:
            nominalSpeed = 0x200;
            break;
        case 0x59c:
            nominalSpeed = 0x100;
            break;
        case 0x59d:
            nominalSpeed = 0x200;
            break;
        case 0x59e:
            nominalSpeed = 0x200;
            break;
        case 0x59f:
            nominalSpeed = 0x100;
            break;
        case 0x5a0:
            nominalSpeed = 0x300;
            break;
        case 0x5a1:
            nominalSpeed = 0;
            break;
        case 0x5a2:
            nominalSpeed = 0;
            break;
        case 0x5a3:
            nominalSpeed = 0;
            break;
        case 0x5a4:
        case 0x5a5:
            nominalSpeed = 0;
            break;
        case 0x5a7:
        case 0x5a8:
            nominalSpeed = 0;
            break;
        case 0x5a9:
        case 0x5aa:
            nominalSpeed = 0;
            break;
        case 0x5ab:
            nominalSpeed = 0;
            break;
        case 0x5ac:
            nominalSpeed = 0;
            break;
        case 0x5ad:
            nominalSpeed = 0;
            break;
        case 0x5ae:
            nominalSpeed = 0;
            break;
        case 0x5b0:
            nominalSpeed = 0;
            break;
        case 0x5b1:
            nominalSpeed = 0;
            break;
        case 0x5b2:
            nominalSpeed = 0;
            break;
        case 0x5b3:
            nominalSpeed = 0;
            break;
        case 0x5b6:
            nominalSpeed = 0;
            break;
        case 0x5b7:
            nominalSpeed = 0;
            break;
        case 0x5b8:
            nominalSpeed = 0;
            break;
        case 0x5b9:
            nominalSpeed = 0;
            break;
        }

        break;
    case 0x100ec:
        directionOffset = 0;
        switch (clip) {
        case 0x59a:
            if (frame >= 20 && frame < 110)
                actor->heading = ADVANCE_HEADING(
                    actor, actor->motion->rate * (speedMultiplier * INTEGER_TURN(actor, 225, 90)) *
                               turnScale);
            if (frame >= 360 && frame < 416)
                actor->heading = ADVANCE_HEADING(
                    actor, actor->motion->rate * (speedMultiplier * INTEGER_TURN(actor, 30, 56)) *
                               turnScale);
            nominalSpeed = 0xb00;
            break;
        case 0x59b:
            nominalSpeed = 0x100;
            break;
        case 0x59c:
            nominalSpeed = 0x400;
            break;
        case 0x59d:
            nominalSpeed = 0x500;
            break;
        case 0x59e:
            nominalSpeed = 0x200;
            break;
        }

        break;
    case 0x100ed:
        directionOffset = 0;
        switch (clip) {
        case 0x5a6:
            if (frame >= 40 && frame < 102)
                actor->heading = ADVANCE_HEADING(
                    actor, actor->motion->rate *
                               ((float)speedMultiplier * FRACTIONAL_TURN(actor, 131.485f, 62.0f)) *
                               turnScale);
            if (frame >= 344 && frame < 400)
                actor->heading = ADVANCE_HEADING(
                    actor, actor->motion->rate * (speedMultiplier * INTEGER_TURN(actor, 35, 56)) *
                               turnScale);
            nominalSpeed = 0xc00;
            break;
        case 0x5a7:
            if (frame >= 14 && frame < 128)
                actor->heading = ADVANCE_HEADING(
                    actor, actor->motion->rate * (speedMultiplier * INTEGER_TURN(actor, 233, 114)) *
                               turnScale);
            if (frame >= 570 && frame < 600)
                actor->heading = ADVANCE_HEADING(
                    actor, actor->motion->rate * (speedMultiplier * INTEGER_TURN(actor, 10, 30)) *
                               turnScale);
            nominalSpeed = 0xb00;
            break;
        case 0x59a:
            nominalSpeed = 0x200;
            break;
        case 0x59b:
            nominalSpeed = 0x200;
            break;
        case 0x59e:
            nominalSpeed = 0x200;
            break;
        case 0x59f:
            nominalSpeed = 0x300;
            break;
        case 0x59d:
            nominalSpeed = 0x100;
            break;
        case 0x5a0:
            nominalSpeed = 0x200;
            break;
        case 0x5a1:
            nominalSpeed = 0x400;
            break;
        case 0x5a2:
            nominalSpeed = 0;
            break;
        case 0x5a3:
            nominalSpeed = 0;
            break;
        case 0x5a4:
            nominalSpeed = 0;
            break;
        case 0x5a5:
            nominalSpeed = 0x200;
            break;
        }

        break;
    case 0x100ee:
        switch (clip) {
        case 0x59a:
            nominalSpeed = 0x300;
            break;
        case 0x59b:
            nominalSpeed = 0x100;
            break;
        case 0x59c:
            nominalSpeed = 0x200;
            break;
        case 0x59d:
            nominalSpeed = 0x300;
            break;
        case 0x59e:
            nominalSpeed = 0x200;
            break;
        case 0x59f:
            nominalSpeed = 0x200;
            break;
        }

        break;
    case 0x100f0:
        switch (clip) {
        case 0x59a:
            nominalSpeed = 0x100;
            break;
        case 0x59b:
            nominalSpeed = 0x200;
            break;
        case 0x59c:
            nominalSpeed = 0x100;
            break;
        case 0x59d:
            nominalSpeed = 0x200;
            break;
        case 0x59e:
            scale = 0.5f;
            nominalSpeed = 0x500;
            break;
        case 0x59f:
            scale = 0.5f;
            nominalSpeed = 0x200;
            break;
        case 0x5a0:
            nominalSpeed = 0x200;
            break;
        case 0x5a1:
            nominalSpeed = 0x200;
            break;
        case 0x5a2:
            nominalSpeed = 0x100;
            break;
        case 0x5a4:
            nominalSpeed = 0x100;
            break;
        case 0x5a5:
            scale = 0.5f;
            nominalSpeed = 0x300;
            break;
        case 0x5a6:
            scale = 0.5f;
            nominalSpeed = 0x100;
            break;
        case 0x5a7:
            scale = 0.5f;
            nominalSpeed = 0x100;
            break;
        default:
            return;
        }

        break;
    case 0x100f1:
        switch (clip) {
        case 0x59a:
            nominalSpeed = 0x200;
            break;
        case 0x59b:
            nominalSpeed = 0x200;
            break;
        case 0x59c:
            nominalSpeed = 0x200;
            break;
        case 0x59d:
            nominalSpeed = 0x200;
            break;
        case 0x59e:
            nominalSpeed = 0x200;
            break;
        case 0x59f:
            nominalSpeed = 0;
            break;
        case 0x5a0:
            nominalSpeed = 0;
            break;
        case 0x5a1:
            nominalSpeed = 0;
            break;
        case 0x5a2:
            nominalSpeed = 0;
            break;
        case 0x5a3:
            nominalSpeed = 0;
            break;
        case 0x5a4:
            nominalSpeed = 0;
            break;
        case 0x5a5:
            nominalSpeed = 0x300;
            break;
        case 0x5a6:
            nominalSpeed = 0x200;
            break;
        default:
            return;
        }

        break;
    case 0x100f3:
        scale = 1.0f;
        directionOffset = 0;
        switch (clip) {
        default:
            nominalSpeed = 0;
            break;
        case 0x59e:
            nominalSpeed = 0xf00;
            if (frame >= 40 && frame < 164)
                actor->heading =
                    ADVANCE_HEADING(actor, turnScale * (actor->motion->rate *
                                                        FRACTIONAL_TURN(actor, -165.0f, 124.0f)));
            break;
        case 0x59f:
            nominalSpeed = 0x1000;
            if (frame >= 156 && frame < 268)
                actor->heading =
                    ADVANCE_HEADING(actor, turnScale * (actor->motion->rate *
                                                        FRACTIONAL_TURN(actor, -180.0f, 112.0f)));
            break;
        case 0x5a0:
            nominalSpeed = 0xb00;
            if (frame >= 252 && frame < 340)
                actor->heading =
                    ADVANCE_HEADING(actor, turnScale * (actor->motion->rate *
                                                        FRACTIONAL_TURN(actor, -140.0f, 88.0f)));
            break;
        case 0x5a1:
            nominalSpeed = 0x600;
            if (frame >= 320 && frame < 340)
                actor->heading =
                    ADVANCE_HEADING(actor, turnScale * (actor->motion->rate *
                                                        FRACTIONAL_TURN(actor, -30.0f, 20.0f)));
            break;
        case 0x5a2:
            nominalSpeed = 0x600;
            break;
        case 0x5a3:
            nominalSpeed = 0x600;
            break;
        }

        break;
    case 0x100f4:
        scale = 1.0f;
        directionOffset = 0;
        switch (clip) {
        default:
            nominalSpeed = 0;
            break;
        case 0x5a0:
            nominalSpeed = 0xd00;
            if (frame >= 58 && frame < 202)
                actor->heading =
                    ADVANCE_HEADING(actor, turnScale * (actor->motion->rate *
                                                        FRACTIONAL_TURN(actor, -180.0f, 144.0f)));
            break;
        case 0x5a1:
            nominalSpeed = 0xe00;
            if (frame >= 140 && frame < 240)
                actor->heading =
                    ADVANCE_HEADING(actor, turnScale * (actor->motion->rate *
                                                        FRACTIONAL_TURN(actor, -180.0f, 100.0f)));
            break;
        case 0x5a2:
            nominalSpeed = 0xd00;
            if (frame >= 188 && frame < 260)
                actor->heading =
                    ADVANCE_HEADING(actor, turnScale * (actor->motion->rate *
                                                        FRACTIONAL_TURN(actor, -180.0f, 72.0f)));
            break;
        case 0x5a3:
            nominalSpeed = 0xa00;
            if (frame >= 226 && frame < 300)
                actor->heading =
                    ADVANCE_HEADING(actor, turnScale * (actor->motion->rate *
                                                        FRACTIONAL_TURN(actor, -130.0f, 74.0f)));
            break;
        case 0x5a4:
            nominalSpeed = 0x500;
            break;
        case 0x5a5:
            nominalSpeed = 0x400;
            break;
        case 0x5a6:
            nominalSpeed = 0x500;
            break;
        case 0x5a7:
            nominalSpeed = 0x500;
            break;
        }

        break;
    case 0x100f5:
        scale = 1.0f;
        directionOffset = 0;
        switch (clip) {
        case 0x59f:
            nominalSpeed = 0xf00;
            if (frame >= 140 && frame < 274)
                actor->heading =
                    ADVANCE_HEADING(actor, turnScale * (actor->motion->rate *
                                                        FRACTIONAL_TURN(actor, -180.0f, 134.0f)));
            break;
        case 0x5a0:
            nominalSpeed = 0x1000;
            if (frame >= 64 && frame < 178)
                actor->heading =
                    ADVANCE_HEADING(actor, turnScale * (actor->motion->rate *
                                                        FRACTIONAL_TURN(actor, -180.0f, 114.0f)));
            break;
        case 0x5a1:
            nominalSpeed = 0xf00;
            if (frame >= 0 && frame < 104)
                actor->heading =
                    ADVANCE_HEADING(actor, turnScale * (actor->motion->rate *
                                                        FRACTIONAL_TURN(actor, -180.0f, 104.0f)));
            break;
        case 0x5a2:
            nominalSpeed = 0xd00;
            if (frame >= 0 && frame < 74)
                actor->heading =
                    ADVANCE_HEADING(actor, turnScale * (actor->motion->rate *
                                                        FRACTIONAL_TURN(actor, 45.0f, 74.0f)));
            break;
        case 0x5a3:
            nominalSpeed = 0xe00;
            break;
        }

        break;
    case 0x100f6:
        scale = 1.0f;
        directionOffset = 0;
        switch (clip) {
        case 0x59a:
            nominalSpeed = 0x400;
            break;
        case 0x59b:
            nominalSpeed = 0x500;
            break;
        }

        break;
    case 0x100f7:
        scale = 1.0f;
        directionOffset = 0;
        switch (clip) {
        case 0x59a:
            nominalSpeed = 0x100;
            if (frame >= 20 && frame < 60)
                actor->heading =
                    ADVANCE_HEADING(actor, turnScale * (actor->motion->rate *
                                                        FRACTIONAL_TURN(actor, 90.0f, 40.0f)));
            else if (frame >= 240 && frame < 300)
                actor->heading =
                    ADVANCE_HEADING(actor, turnScale * (actor->motion->rate *
                                                        FRACTIONAL_TURN(actor, -90.0f, 60.0f)));
            break;
        case 0x59b:
            nominalSpeed = 0x700;
            if (frame >= 120 && frame < 200)
                actor->heading =
                    ADVANCE_HEADING(actor, turnScale * (actor->motion->rate *
                                                        FRACTIONAL_TURN(actor, -60.0f, 80.0f)));
            break;
        }

        break;
    case 0x100f8:
        scale = 1.0f;
        directionOffset = 0;
        switch (clip) {
        case 0x59a:
            nominalSpeed = 0x700;
            break;
        case 0x59b:
            nominalSpeed = 0x500;
            break;
        }

        break;
    case 0x100f9:
        scale = 1.0f;
        directionOffset = 0;
        switch (clip) {
        case 0x59a:
            nominalSpeed = 0x600;
            break;
        case 0x59b:
            nominalSpeed = 0xa00;
            if (frame >= 60 && frame < 100)
                actor->heading =
                    ADVANCE_HEADING(actor, turnScale * (actor->motion->rate *
                                                        FRACTIONAL_TURN(actor, 30.0f, 40.0f)));
            break;
        case 0x59e:
            nominalSpeed = 0x700;
            break;
        case 0x59c:
            nominalSpeed = 0x500;
            break;
        case 0x59d:
            nominalSpeed = 0xd00;
            if (frame >= 72 && frame < 132)
                actor->heading =
                    ADVANCE_HEADING(actor, turnScale * (actor->motion->rate *
                                                        FRACTIONAL_TURN(actor, -180.0f, 60.0f)));
            break;
        }

        break;
    case 0x100fa:
        scale = 1.0f;
        directionOffset = 0;
        switch (clip) {
        case 0x59a:
            nominalSpeed = 0;
            break;
        case 0x59b:
            nominalSpeed = 0x400;
            break;
        }

        break;
    case 0x100fb:
        scale = 1.0f;
        directionOffset = 0;
        switch (clip) {
        case 0x59a:
            nominalSpeed = 0;
            break;
        case 0x59b:
            nominalSpeed = 0x100;
            break;
        case 0x59c:
            nominalSpeed = 0x400;
            if (frame >= 0 && frame < 88)
                actor->heading =
                    ADVANCE_HEADING(actor, turnScale * (actor->motion->rate *
                                                        FRACTIONAL_TURN(actor, 165.0f, 88.0f)));
            break;
        case 0x59d:
            nominalSpeed = 0x700;
            if (frame >= 80 && frame < 180)
                actor->heading =
                    ADVANCE_HEADING(actor, turnScale * (actor->motion->rate *
                                                        FRACTIONAL_TURN(actor, 180.0f, 100.0f)));
            break;
        case 0x59e:
            nominalSpeed = 0x700;
            if (frame >= 182 && frame < 282)
                actor->heading =
                    ADVANCE_HEADING(actor, turnScale * (actor->motion->rate *
                                                        FRACTIONAL_TURN(actor, 180.0f, 100.0f)));
            break;
        case 0x59f:
            nominalSpeed = 0x800;
            if (frame >= 202 && frame < 302)
                actor->heading =
                    ADVANCE_HEADING(actor, turnScale * (actor->motion->rate *
                                                        FRACTIONAL_TURN(actor, 180.0f, 100.0f)));
            break;
        case 0x5a0:
            nominalSpeed = 0x700;
            if (frame >= 316 && frame < 360)
                actor->heading =
                    ADVANCE_HEADING(actor, turnScale * (actor->motion->rate *
                                                        FRACTIONAL_TURN(actor, 80.0f, 44.0f)));
            break;
        case 0x5a1:
            nominalSpeed = 0x700;
            break;
        case 0x5a2:
            nominalSpeed = 0x800;
            break;
        case 0x5a3:
            nominalSpeed = 0x800;
            break;
        case 0x5a4:
            nominalSpeed = 0x800;
            break;
        case 0x5a5:
            nominalSpeed = 0;
            break;
        case 0x5a6:
            nominalSpeed = 0;
            break;
        case 0x5a7:
            nominalSpeed = 0;
            break;
        case 0x5a8:
            nominalSpeed = 0;
            break;
        }

        break;
    case 0x100fc:
        scale = 1.0f;
        directionOffset = 0;
        switch (clip) {
        case 0x59a:
            nominalSpeed = 0x700;
            if (frame >= 60 && frame < 108)
                actor->heading =
                    ADVANCE_HEADING(actor, turnScale * (actor->motion->rate *
                                                        FRACTIONAL_TURN(actor, 40.0f, 48.0f)));
            else if (frame >= 260 && frame < 280)
                actor->heading =
                    ADVANCE_HEADING(actor, turnScale * (actor->motion->rate *
                                                        FRACTIONAL_TURN(actor, -25.0f, 20.0f)));
            break;
        case 0x59b:
            nominalSpeed = 0x700;
            if (frame >= 120 && frame < 180)
                actor->heading =
                    ADVANCE_HEADING(actor, turnScale * (actor->motion->rate *
                                                        FRACTIONAL_TURN(actor, -60.0f, 60.0f)));
            break;
        case 0x59c:
            nominalSpeed = 0xe00;
            if (frame >= 10 && frame < 130)
                actor->heading =
                    ADVANCE_HEADING(actor, turnScale * (actor->motion->rate *
                                                        FRACTIONAL_TURN(actor, 90.0f, 120.0f)));
            else if (frame >= 164 && frame < 264)
                actor->heading =
                    ADVANCE_HEADING(actor, turnScale * (actor->motion->rate *
                                                        FRACTIONAL_TURN(actor, 270.0f, 100.0f)));
            break;
        case 0x59d:
            nominalSpeed = 0xb00;
            if (frame >= 164 && frame < 196)
                actor->heading =
                    ADVANCE_HEADING(actor, turnScale * (actor->motion->rate *
                                                        FRACTIONAL_TURN(actor, -40.0f, 32.0f)));
            break;
        case 0x59e:
            nominalSpeed = 0x700;
            if (frame >= 112 && frame < 190)
                actor->heading =
                    ADVANCE_HEADING(actor, turnScale * (actor->motion->rate *
                                                        FRACTIONAL_TURN(actor, 170.0f, 78.0f)));
            break;
        case 0x59f:
            nominalSpeed = 0x800;
            if (frame >= 136 && frame < 204)
                actor->heading =
                    ADVANCE_HEADING(actor, turnScale * (actor->motion->rate *
                                                        FRACTIONAL_TURN(actor, -145.0f, 68.0f)));
            else if (frame >= 296 && frame < 332)
                actor->heading =
                    ADVANCE_HEADING(actor, turnScale * (actor->motion->rate *
                                                        FRACTIONAL_TURN(actor, -35.0f, 36.0f)));
            break;
        case 0x5a0:
            nominalSpeed = 0xc00;
            if (frame >= 148 && frame < 216)
                actor->heading =
                    ADVANCE_HEADING(actor, turnScale * (actor->motion->rate *
                                                        FRACTIONAL_TURN(actor, 40.0f, 68.0f)));
            break;
        }

        break;
    case 0x100fd:
        scale = 1.0f;
        directionOffset = 0;
        switch (clip) {
        case 0x59a:
            nominalSpeed = 0x800;
            break;
        case 0x59b:
            nominalSpeed = 0x800;
            break;
        case 0x59c:
            nominalSpeed = 0x800;
            break;
        case 0x59d:
            nominalSpeed = 0x900;
            break;
        case 0x59e:
            nominalSpeed = 0x800;
            break;
        case 0x59f:
            nominalSpeed = 0x800;
            break;
        case 0x5a0:
            nominalSpeed = 0x900;
            break;
        case 0x5a1:
            nominalSpeed = 0x800;
            break;
        case 0x5a2:
            nominalSpeed = 0x800;
            break;
        case 0x5a3:
            nominalSpeed = 0x800;
            break;
        }

        break;
    case 0x100fe:
        scale = 1.0f;
        directionOffset = 0;
        switch (clip) {
        case 0x59a:
            nominalSpeed = 0x800;
            break;
        case 0x5a3:
            nominalSpeed = 0x800;
            break;
        case 0x5a4:
            nominalSpeed = 0x800;
            break;
        case 0x5a5:
            nominalSpeed = 0x800;
            break;
        case 0x59b:
            nominalSpeed = 0x900;
            break;
        case 0x59c:
            nominalSpeed = 0x900;
            break;
        case 0x59d:
            nominalSpeed = 0x800;
            break;
        case 0x59e:
            nominalSpeed = 0x800;
            break;
        case 0x59f:
            nominalSpeed = 0x800;
            break;
        case 0x5a0:
            nominalSpeed = 0x800;
            break;
        case 0x5a1:
            nominalSpeed = 0x800;
            break;
        case 0x5a2:
            nominalSpeed = 0x800;
            break;
        }

        break;
    }
    if (track) {
        MotionSample *sample = &track[frame / 2];
        u8 dir;
        u8 speed;
        dir = sample->direction;
        speed = sample->speed;
        actor->baseSpeed = (s32)(scale * (float)(nominalSpeed * speedMultiplier));
        apply_sample(actor, ((dir << 8) + directionOffset) % 65536, speed, 256);
    }
}
