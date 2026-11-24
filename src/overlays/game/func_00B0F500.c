/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_goalkeeper.h"

extern u16 func_009B30B0(u16, u16);

s32 func_00B0F500(KeeperActor *actor, u16 direction) {
    u16 diff;
    if (actor->player.speed >= 0x1d00)
        return 0;
    if (actor->player.speed <= 1024)
        return 0;
    if ((actor->decision.flags & 0x200))
        return 0;
    switch (actor->heading.motion->clip) {
    case 0xc1:
    case 0x13:
        if (actor->heading.motion->frame >= 8.f)
            return 1;
        break;
    }
    if (func_009B30B0(actor->decision.facing, actor->decision.movement) <= 24)
        return 0;
    diff = func_009B30B0(actor->decision.movement, keeperBall->ball.dir);
    if (diff <= 96 && diff >= 32)
        return 1;
    diff = func_009B30B0(direction, keeperBall->ball.dir);
    if (diff > 32 && diff < 112)
        return 1;
    return 0;
}
