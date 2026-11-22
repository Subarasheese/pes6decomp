#ifndef PES6_PLAYER_CLIP_TRANSITION_H
#define PES6_PLAYER_CLIP_TRANSITION_H
#include "pes6/heading_motion.h"

typedef struct {
    u8 pad00[4];
    HeadingMotion *playback;
    u8 pad08[0x10];
    s16 state;
    u8 pad1a[2];
    s32 step;
    u8 pad20[0x2e];
    u8 repeats;
} ClipTransitionActor;

extern void func_00B2ACF0(ClipTransitionActor **actor);
extern s32 func_00207D10(HeadingMotion *playback);
extern s32 func_00B67DA0(ClipTransitionActor **actor);
extern void func_002075B0(HeadingMotion *playback, s32 id, s32 arg2, s32 blend);

static inline void limit_step(s32 *value, s32 before) {
    if (*value > before + 512)
        *value = before + 512;
    else if (*value < before - 512)
        *value = before - 512;
}
static inline void select_followup_clip(ClipTransitionActor **actor) {
    switch ((*actor)->playback->clip) {
    case 0x417:
        if (func_00B67DA0(actor))
            func_002075B0((*actor)->playback, 0x41A, 0, 8);
        else
            func_002075B0((*actor)->playback, 0x419, 0, 8);
        break;
    case 0x418:
        if (func_00B67DA0(actor))
            func_002075B0((*actor)->playback, 0x46A, 0, 8);
        else
            func_002075B0((*actor)->playback, 0x46B, 0, 8);
        break;
    case 0x41E:
        if (func_00B67DA0(actor))
            func_002075B0((*actor)->playback, 0x422, 0, 8);
        else
            func_002075B0((*actor)->playback, 0x421, 0, 8);
        break;
    case 0x42E:
        if (func_00B67DA0(actor))
            func_002075B0((*actor)->playback, 0x431, 0, 8);
        else
            func_002075B0((*actor)->playback, 0x430, 0, 8);
        break;
    case 0x439:
        if (func_00B67DA0(actor))
            func_002075B0((*actor)->playback, 0x43C, 0, 8);
        else
            func_002075B0((*actor)->playback, 0x43B, 0, 8);
        break;
    case 0x440:
        if (func_00B67DA0(actor))
            func_002075B0((*actor)->playback, 0x444, 0, 8);
        else
            func_002075B0((*actor)->playback, 0x443, 0, 8);
        break;
    }
}

#endif