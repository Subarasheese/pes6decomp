/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_shot.h"

extern s32 func_00AA3210(ShotActor *, f32, f32);

f32 func_00A68F90(ShotActor *actor, f32 x, f32 z) {
    f32 lanes[5];
    s32 best, i, selected;
    f32 *p;
    best = 0;
    selected = 2;
    i = 0;
    p = lanes;
    /* The centre lane remains selected when no candidate improves on it. */
    lanes[0] = z - 1024.f;
    lanes[1] = z - 512.f;
    lanes[2] = z;
    lanes[3] = z + 512.f;
    lanes[4] = z + 1024.f;
    for (; i < 5; ++i, ++p) {
        if ((f32)shotMagnitude((s32)*p) <= 8729.f) {
            s32 distanceSquared = func_00AA3210(actor, x, *p);
            if (distanceSquared <= 0x400000) {
                if (best < distanceSquared) {
                    best = distanceSquared;
                    selected = i;
                }
            }
        }
    }
    return lanes[selected];
}
