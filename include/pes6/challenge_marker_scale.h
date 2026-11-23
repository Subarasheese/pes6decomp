#ifndef PES6_CHALLENGE_MARKER_SCALE_H
#define PES6_CHALLENGE_MARKER_SCALE_H

#include "pes6/challenge_marker_position.h"

extern f32 fabsf(f32);

static inline void challenge_origin_position(ChallengePoint *out, const ChallengePoint *points,
                                             s32 index) {
    ChallengePoint point = points[(u8)index], origin = points[0];
    point.x = (0.0f + point.x) - (origin.x - point.x) * 0.3f;
    point.y *= 1.1f;
    *out = point;
}

static inline void challenge_scaled_position(ChallengePoint *out, const ChallengePoint *points,
                                             s32 index) {
    ChallengePoint point = points[(u8)index];
    point.x *= 1.5f;
    if (fabsf(point.y) < 500.0f)
        point.y *= 4.0f;
    else
        point.y *= 3.0f;
    *out = point;
}

static inline void challenge_fixed_position(ChallengePoint *out, f32 x, f32 y) {
    ChallengePoint point;
    point.x = x;
    point.y = y;
    *out = point;
}

#endif
