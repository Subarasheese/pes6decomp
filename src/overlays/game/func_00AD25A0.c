/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_first_touch.h"

extern s32 func_009B34C0(f32 x1, f32 z1, f32 x2, f32 z2);
extern s32 func_009B3350(void *ball, s32 x, s32 z);
extern void func_00285080(s32);

s32 func_00AD25A0(TouchActor *actor, s32 heading, s32 speed, s32 height, u32 limit) {
    s32 frame;
    if (touchBall->trajectory.curl) {
        touchCopyBallPosition();
        if (!((f32)touchMagnitude((s32)touchBall->trajectory.targetX) <= 13529.f &&
              (f32)touchMagnitude((s32)touchBall->trajectory.targetZ) <= 8793.f))
            return heading;
        touchBeginPrediction(heading, speed, height);
        for (frame = 0; frame < 255; ++frame) {
            func_00285080(1);
            if (frame >= 28 &&
                !((f32)touchMagnitude((s32)touchBall->trajectory.targetX) <= 13529.f &&
                  (f32)touchMagnitude((s32)touchBall->trajectory.targetZ) <= 8793.f))
                break;
            if ((u32)func_009B3350(Pes6Ball_Current, (s32)touchBall->trajectory.targetX,
                                   (s32)touchBall->trajectory.targetZ) > limit)
                break;
        }
        return (u16)(2 * (u16)heading -
                     (u16)func_009B34C0(Pes6Ball_Current->pos[0], Pes6Ball_Current->pos[2],
                                        touchBall->trajectory.targetX,
                                        touchBall->trajectory.targetZ) +
                     0x10000);
    }
    return heading;
}
