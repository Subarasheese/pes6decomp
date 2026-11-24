#ifndef PES6_MATCH_EVENT_PITCH_H
#define PES6_MATCH_EVENT_PITCH_H

#include "types.h"
extern f32 func_001CD9E0(f32 value);
static inline f32 pitchX(u16 point) {
    return (26930.0f / 311.0f) * (f32)((s32)point % 312) - 13465.0f;
}
static inline f32 pitchZ(u16 point) {
    return (17458.0f / 209.0f) * (f32)((s32)point / 312) - 8729.0f;
}

#endif
