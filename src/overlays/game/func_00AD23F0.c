/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_first_touch.h"

extern s32 func_009B3350(void *ball, s32 x, s32 z);
extern void func_00285080(s32);

s32 func_00AD23F0(TouchActor *actor, s32 heading, s32 speed, s32 height) {
    u32 limit;
    s32 frame;
    touchCopyBallPosition();
    touchBeginPrediction(heading, speed, height);
    limit =
        (u32)func_009B3350(Pes6Ball_Current, (s32)(14489.f * (f32)actor->player.goalDirection), 0);
    for (frame = 0; frame < 64; ++frame) {
        func_00285080(4);
        {
            s32 x = (s32)touchBall->trajectory.targetX;
            s32 z;
            if (!((f32)touchMagnitude(x) <= 13529.f))
                break;
            z = (s32)touchBall->trajectory.targetZ;
            if (!((f32)touchMagnitude(z) <= 8793.f))
                break;
            if ((u32)func_009B3350(Pes6Ball_Current, x, z) > limit)
                break;
        }
    }
    return frame * 4;
}
