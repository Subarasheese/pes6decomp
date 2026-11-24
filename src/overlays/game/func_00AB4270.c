/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_goalkeeper.h"

extern s32 func_00288670(s32, s32);

static inline u32 keeperRating(KeeperActor *actor, s32 byte) {
    const Pes6SquadSetupPlayer *player =
        &Pes6MatchSquads[actor->player.team].setupPlayers[actor->player.slot];
    return player->current.base[byte] & 127;
}
static inline s32 keeperAbilitySum(s32 rating, u32 normalized) { return rating + normalized; }

f32 func_00AB4270(KeeperActor *actor) {
    s32 sum = keeperAbilitySum(keeperRating(actor, 9), func_00288670(keeperRating(actor, 10), 40));
    if (sum <= 120)
        return *D_003E74CC;
    else
        return *D_003E74CC * (f32)(sum + 1024) / 1024.f;
}
