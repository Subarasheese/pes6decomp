#ifndef PES6_CHALLENGE_MARKER_POSITION_H
#define PES6_CHALLENGE_MARKER_POSITION_H
#include "types.h"
typedef struct {
    f32 x, y;
} ChallengePoint;
extern f32 func_0011D138(f32 angle);
extern f32 func_0011D468(f32 angle);
extern f32 D_00829490[];
extern const f32 *D_00828460[];
static inline void challenge_marker_position(ChallengePoint *out, u32 period, s32 index,
                                             s32 stage) {
    f32 angle = (((f32)period - D_00828460[stage][(u8)index]) * 2.0f * 3.1415927f) / (f32)period;
    ChallengePoint point;
    point.x = 0.0f + D_00829490[0] + func_0011D138(angle) * 3450.0f;
    point.y = func_0011D468(angle) * 3450.0f;
    *out = point;
}
#endif
