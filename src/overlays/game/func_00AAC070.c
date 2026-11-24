/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_goalkeeper.h"

extern s32 func_00A14EC0(Pes6MatchPlayer *, Pes6MatchPlayer *);
extern s32 func_00AABA00(KeeperActor *, s32, s32);

s32 func_00AAC070(KeeperActor *actor) {
    s32 result = func_00A14EC0(&actor->player, &actor->player);
    if (!result || actor->player.distance114 <= 288)
        result = func_00AABA00(actor, heightScaledDistance(actor, -420), 1);
    return result;
}
