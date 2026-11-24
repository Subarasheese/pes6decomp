/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_first_touch.h"

extern s32 func_00BBB8C0(s32);

void func_00AD1360(TouchActor *actor, s32 power, s32 height) {
    s32 offset, weight, adjust;
    if (power < 0x7000)
        return;
    if (actor->player.role != 4 && actor->touch.heightLimit == 2 &&
        actor->heading.motion->mirrored == touchBall->trajectory.curlDirection)
        offset = touchMagnitude(power - 0x8000);
    else
        offset = touchMagnitude(power - 0x6800);
    if (offset <= 0x800)
        offset = 0;
    else
        offset -= 0x800;
    weight = 100 - func_00BBB8C0(touchRating(actor, 19, 50) / 4);
    offset = (offset * weight) / 100;
    adjust = offset + 0x2a00;
    touchBall->trajectory.curl = (u16)((touchBall->trajectory.curl * adjust) / 0x2a00);
    touchBall->trajectory.curl =
        touchBall->trajectory.curl * (touchMagnitude(height - 52) + 64) / 64;
}
