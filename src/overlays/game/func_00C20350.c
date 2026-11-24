/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_goalkeeper.h"

extern u8 D_00591E4C[];
extern s32 func_009B33A0(Pes6MatchPlayer *, s32, s32);
extern s32 func_009D8B80(KeeperActor *);
extern s32 func_00A09950(Pes6MatchPlayer *);
extern s32 func_00AA32C0(Pes6MatchPlayer *);
extern s32 func_0098F6C0(KeeperActor *);

s32 func_00C20350(KeeperActor *actor, s32 force, u32 mode) {
    s32 clearance;
    if (actor->decision.field24 == 0 && func_009D8B80(actor) != 0)
        return 0;
    if ((float)actor->player.distance114 > 15513.f)
        return 1;
    if (mode != 0) {
        if ((u32)func_009B33A0(&actor->player,
                               (s32)((float)actor->player.goalDirection * (-13465.f)),
                               0) > 0x1000000u)
            return 0;
    } else {
        if ((u32)func_009B33A0(&actor->player,
                               (s32)((float)actor->player.goalDirection * (-13465.f)),
                               0) > 0xc40000u)
            return 0;
    }
    clearance = func_00AA32C0(&actor->player);
    if (clearance < 0x1440000)
        return 0;
    if (func_00A09950(&actor->player) == 0 && keeperBall->ball.action == 11 && force < 0x1000 &&
        ((u32)force < actor->decision.ballDistanceSquared || clearance > 0x1000000))
        return 1;
    if ((float)actor->player.distance114 > 13465.f)
        return 1;
    if (func_0098F6C0(actor) != 0) {
        float direction = (float)actor->player.goalDirection;
        if (keeperBall->ball.pos[0] * direction < actor->player.x * direction + 1024.f)
            return 0;
    }
    if (D_00591E4C[0] != 0 && func_00A09950(&actor->player) == 0 &&
        actor->player.distance114 > 0x1000u)
        return 1;
    return 0;
}
