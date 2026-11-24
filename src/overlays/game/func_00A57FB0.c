/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_first_touch.h"

extern u16 func_009B30B0(u16 first, u16 second);

s32 func_00A57FB0(TouchActor *actor, u16 first, u16 requested, u16 gap, u16 turn) {
    u16 ball = actor->touch.ballHeading;
    u16 facing = func_009B30B0(actor->touch.facing, requested);
    if (facing >= 40)
        return 0;
    if (func_009B30B0(first, requested) <= 32 && facing <= 32)
        return 1;
    if (func_009B30B0(ball, requested) <= 40)
        return 1;
    if (func_009B30B0(ball, first) >= 80)
        return 0;
    if (func_009B30B0(requested, ball) <= 32 &&
        (Pes6Ball_Current->horizontalSpeed < 0x1000 || func_009B30B0(ball, first) <= 16))
        return 1;
    if (actor->player.speed >= 0x1900 - 12 * actor->touch.powerScale &&
        func_009B30B0(requested, ball) <= 48 &&
        func_009B30B0(requested, actor->touch.movement) <= 64 && func_009B30B0(ball, first) < 96)
        return 1;
    if (func_009B30B0(requested, Pes6Ball_Current->dir) >= 48 && (u16)gap <= 48) {
        if ((func_009B30B0(requested, actor->touch.facing) <= 32 && (u16)turn <= 40) ||
            (func_009B30B0(requested, first) <= 16 &&
             ((u16)turn < 40 ||
              ((u16)turn < 48 && func_009B30B0(actor->touch.facing, first) <= 32))))
            return 1;
    }
    return 0;
}
