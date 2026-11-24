/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_first_touch.h"

extern u8 D_005926DE[];
extern s32 func_009B33A0(void *player, s32 x, s32 z);
extern f32 func_001CD9E0(f32 value);
extern f32 D_00591BEC[];
extern s32 func_00284380(s32, s32);

s32 func_00A10800(TouchActor *actor, s32 maximum) {
    f32 x = touchBall->trajectory.targetX;
    f32 z = touchBall->trajectory.targetZ;
    s32 step = func_00284380(touchHeight(actor, -96), 0);
    s32 distance = (s32)func_001CD9E0((f32)(u32)func_009B33A0(
        &actor->player, (s32)touchBall->trajectory.targetX, (s32)touchBall->trajectory.targetZ));
    s32 frames = (s32)(D_00591BEC[0] * (f32)distance / (f32)(step + D_005926DE[0]));
    if (maximum < frames)
        frames = maximum;
    touchBall->trajectory.targetX = x;
    touchBall->trajectory.targetZ = z;
    return frames;
}
