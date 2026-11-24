/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_first_touch.h"

extern void func_009B36C0(TouchActor *, s32, s32, s32, u8);
extern f32 func_001CD9E0(f32 value);
extern f32 D_00591E6C[];
extern f32 D_00591E74[];
extern s32 D_00592264[];

static inline f32 projectedDistance(s32 frame) {
    f32 dx = touchPredictionAt(frame)->x[0] - D_00591E6C[0],
        dz = touchPredictionAt(frame)->z[0] - D_00591E74[0];
    return func_001CD9E0(dx * dx + dz * dz);
}

s32 func_00B07480(TouchActor *actor, s32 clip, u16 phase, s32 angle, s32 frame) {
    s32 first, second;
    func_009B36C0(actor, clip, (u16)phase, angle, 0);
    first = (s32)projectedDistance(frame);
    func_009B36C0(actor, clip, (u16)phase, angle, 1);
    second = (s32)projectedDistance(frame);
    D_00592264[0] = touchMagnitude(first - second);
    if (second < first)
        return 1;
    return 0;
}
