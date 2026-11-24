/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_squad_selection.h"

s32 func_002C6C00(const SquadPlayerProfile *player, s32 *maximum) {
    s32 score = (player->ability[19].flag + player->ability[18].flag) * 15 +
                (player->ability[SQUAD_RATING_JUMP].value + 1) +
                (player->lineup.profile.low.height + 143) / 2 +
                (player->ability[SQUAD_RATING_HEADING].value + 1);
    *maximum += 330;
    return score;
}
