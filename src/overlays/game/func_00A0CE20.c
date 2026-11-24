/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_first_touch.h"

extern u16 func_009B30B0(u16 first, u16 second);
extern s32 func_00AA3540(TouchActor *);
extern u16 func_0099DFF0(TouchActor *actor);

s32 func_00A0CE20(TouchActor *actor) {
    if (!(func_00AA3540(actor) >= 0x40000))
        return 0;
    if (touchMagnitude((s32)touchBall->ball.vy) > 0xbc0 ||
        touchBall->trajectory.y[0] < (f32)touchHeight(actor, -144)) {
        if (func_009B30B0((u16)func_0099DFF0(actor), actor->touch.facing) > 48)
            return 1;
    }
    return 0;
}
