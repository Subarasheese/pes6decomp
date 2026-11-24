/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_first_touch.h"
extern u8 D_005926E0[], D_005926E6[], D_005926EB[];
#define TOUCH_PREDICTED_X(frame)                                                                   \
    (*(const f32 *)((const u8 *)touchBall->trajectory.x + sizeof(f32) * (frame)))
static inline const TouchBallFields *touchFrameAt(u8 frame) {
    return (const TouchBallFields *)((const u8 *)(sizeof(f32) * frame) + (u32)Pes6Ball_Current);
}
s32 func_00A0ACA0(TouchActor *actor) {
    if ((f32)actor->player.goalDirection * TOUCH_PREDICTED_X(D_005926EB[0]) < -13337.f &&
        (f32)touchMagnitude((s32)touchFrameAt(D_005926EB[0])->z[0]) < 5160.f)
        return 1;
    if ((f32)actor->player.goalDirection * TOUCH_PREDICTED_X(D_005926E6[0]) < -13337.f &&
        (f32)touchMagnitude((s32)touchFrameAt(D_005926E6[0])->z[0]) < 5160.f)
        return 1;
    if ((f32)actor->player.goalDirection * TOUCH_PREDICTED_X(D_005926E0[0]) < -13337.f &&
        (f32)touchMagnitude((s32)touchFrameAt(D_005926E0[0])->z[0]) < 5160.f)
        return 1;
    return 0;
}
