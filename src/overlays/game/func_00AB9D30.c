/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_goalkeeper.h"

extern u8 D_00591E4F[][2];
extern u16 func_009B30B0(u16, u16);
extern void func_00A9D570(KeeperActor *);

s32 func_00AB9D30(KeeperActor *actor) {
    KeeperActor *peer;
    u32 id;
    switch (actor->player.role) {
    case 19:
    case 2:
        break;
    default:
        return 0;
    }
    if (!(func_009B30B0(actor->decision.facing, actor->decision.movement) < 16 &&
          func_009B30B0(actor->decision.ballHeading, actor->decision.facing) < 24 &&
          actor->player.speed >= 0xe00))
        return 0;
    if (!(actor->player.distance114 >= 0x140 && keeperBall->ball.horizontalSpeed >= 0x1400))
        return 0;
    peer = (KeeperActor *)Pes6MatchPlayer_Get(D_00591E4F[actor->player.side ^ 1][0]);
    if (func_009B30B0(actor->decision.ballHeading,
                      actor->decision.playerHeadings[peer->player.id]) < 48) {
        if ((u32)(peer->heading.motion->clip - 0x300) <= 1) {
            if (!(peer->heading.motion->frame < 8.f) && peer->heading.motion->frame <= 15.f) {
                id = peer->player.id;
                if (actor->decision.playerDistancesSquared[id] <= 0x9000) {
                    actor->heading.motion->mirrored =
                        (u16)(PES6_FULL_TURN +
                              (actor->decision.movement - actor->decision.playerHeadings[id])) <=
                        PES6_HALF_TURN;
                    func_00209A00(actor->heading.motion, 0x1f2, 0);
                    func_00A9D570(actor);
                    actor->player.role = 16;
                    actor->player.action = 0x31;
                    return 1;
                }
            }
        }
        return 0;
    }
    return 0;
}
