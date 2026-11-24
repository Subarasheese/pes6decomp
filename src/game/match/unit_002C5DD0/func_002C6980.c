/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_squad_selection.h"

s32 func_002C6980(const SquadPlayerProfile *player, s32 *maximum) {
    s32 score =
        ((player->lineup.profile.low.height + 143) / 2 + player->ability[SQUAD_RATING_JUMP].value) +
        1;
    *maximum += 200;
    return score;
}
