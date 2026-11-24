/* compiler: mwcc-3.0.1b151 */
#pragma opt_propagation off

#include "pes6/match_first_touch.h"

extern u16 func_009B30B0(u16 first, u16 second);
extern u16 func_009B32D0(u16 target, u16 current, u16 step);
extern u16 D_0059226C[];

s32 func_00A56740(TouchActor *actor, u16 heading) {
    s32 speed = actor->player.speed;
    u16 limit;
    if (speed < 0x800)
        return 1;
    if (speed < 0x1900)
        limit = (0x1900 - speed) * 16 / 0x1900 + 32;
    else
        limit = 32;
    if (speed < 0x1500 && func_009B30B0(actor->touch.facing, actor->touch.movement) >= 32)
        limit = (u16)(2 * limit + 16);
    if (func_009B30B0(actor->touch.movement, heading) > limit) {
        D_0059226C[0] = func_009B32D0(heading, actor->touch.movement, (u16)(limit << 8));
        return 0;
    }
    return 1;
}
