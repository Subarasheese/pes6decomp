/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_first_touch.h"

extern s32 func_00288580(void);
extern u8 D_00591DF0[];

void func_00AFB630(TouchActor *actor, s32 target, s32 frames) {
    s32 period = frames * D_00591DF0[0] / 60;
    s32 step;
    if (actor->player.speed > target) {
        period = period * 3 / 2;
        if (func_00288580())
            period = period * 11 / 10;
        step = (0x1900 - 12 * actor->touch.powerScale) / period;
        if (step > 512)
            step = 512;
        if (actor->player.speed > step) {
            actor->player.speed -= step;
            if (actor->player.speed < target)
                actor->player.speed = target;
        } else
            actor->player.speed = 0;
    } else {
        step = (0x1900 - 12 * actor->touch.powerScale) / period;
        if (step > 512)
            step = 512;
        actor->player.speed += step;
        if (actor->player.speed > target)
            actor->player.speed = target;
    }
}
