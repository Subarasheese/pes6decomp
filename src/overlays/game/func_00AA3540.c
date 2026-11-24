/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_goalkeeper.h"

extern u8 D_00591C09[];
extern u8 D_00591E4F[][2];
extern u8 D_00591E50[][2];

s32 func_00AA3540(KeeperActor *actor) {
    KeeperActor *other;
    if (D_00591C09[0] == 5) {
        u8 id = D_00591E4F[actor->player.side ^ 1][0];
        if (!validOpponent(id, 0, 23))
            return 0x57e40000;
    }
    other = (KeeperActor *)Pes6MatchPlayer_Get(D_00591E4F[actor->player.side ^ 1][0]);
    if (other->player.role == 16)
        other = (KeeperActor *)Pes6MatchPlayer_Get(D_00591E50[actor->player.side ^ 1][0]);
    return actor->decision.playerDistancesSquared[other->player.id];
}
