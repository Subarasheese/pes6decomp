/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_first_touch.h"

extern s32 func_00288580(void);
extern u8 D_00591DF0[];

void func_00AFB490(TouchActor *actor, s32 target, s32 frames) {
    s32 period = frames * D_00591DF0[0] / 60;
    s32 step;
    if (actor->touch.previousSpeed < 0) {
        actor->touch.previousSpeed = target;
        return;
    }
    if (actor->touch.previousSpeed > target) {
        period = period * 3 / 2;
        if (func_00288580())
            period = period * 11 / 10;
        step = (0x1900 - 12 * actor->touch.powerScale) / period;
        if (actor->touch.previousSpeed > step) {
            actor->touch.previousSpeed -= step;
            if (actor->touch.previousSpeed < target)
                actor->touch.previousSpeed = target;
        } else
            actor->touch.previousSpeed = 0;
    } else {
        actor->touch.previousSpeed += target / period;
        if (actor->touch.previousSpeed > target)
            actor->touch.previousSpeed = target;
    }
}
