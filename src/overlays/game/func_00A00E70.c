/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_first_touch.h"

extern u8 D_00591E4C[];
extern f32 D_005926D8[];
extern u8 D_005926E6[];
extern s32 func_002AE670(s32);
extern u8 D_00591F1A[];

s32 func_00A00E70(TouchActor *actor) {
    s32 miss = 99 - touchRating(actor, 8, 50);
    HeadingMotion *motion = actor->heading.motion;
    switch (motion->clip) {
    case 0x3d:
    case 0x3e:
    case 0x41:
    case 0x42:
        if (D_005926D8[0] < (f32)func_002AE670(miss / 20 + 10))
            return 1;
        goto expired;
    case 0x37:
        if (!(motion->frame + 2.f < (f32)(s32)(motion->descriptor->recoveryFrame * 2)))
            return 0;
        break;
    default:
        break;
    }
    if (actor->player.id == D_00591E4C[0] && D_00591F1A[0] < 2 &&
        (touchBall->ball.action == 5 || touchBall->ball.action == 0) &&
        D_005926D8[0] <= (f32)(u32)D_005926E6[0])
        return 1;
    if (!(touchBall->trajectory.y[0] <= -160.f) &&
        touchMagnitude((s32)touchBall->ball.vy) < 0xeb0) {
        if (actor->player.id == D_00591E4C[0] &&
            (touchBall->ball.action == 5 || touchBall->ball.action == 0) &&
            !(D_005926D8[0] < 4.f) &&
            (touchBall->ball.horizontalSpeed < 0x1200 || actor->player.speed < 0x1000))
            return 0;
        if (D_005926D8[0] < (f32)func_002AE670(miss / 20 + 12))
            return 1;
        goto expired;
    }
    if (D_005926D8[0] < (f32)func_002AE670(miss / 20 + 16))
        return 1;
expired:
    return 0;
}
