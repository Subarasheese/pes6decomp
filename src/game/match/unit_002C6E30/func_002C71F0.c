/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_squad_selection.h"

typedef s32 (*PlayerRatingCallback)(const SquadPlayerProfile *, s32 *);
extern PlayerRatingCallback D_003AC330[];

s32 func_002C71F0(const SquadPlayerProfile *player, s32 ability, s32 *maximum) {
    PlayerRatingCallback rate = D_003AC330[ability];
    return rate(player, maximum);
}
