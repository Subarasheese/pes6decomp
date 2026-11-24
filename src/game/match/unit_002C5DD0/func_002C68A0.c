/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_squad_selection.h"

s32 func_002C68A0(const SquadPlayerProfile *player, s32 *maximum) {
    s32 score = (player->ability[SQUAD_RATING_TEAMWORK].value + 1) / 2 +
                (player->ability[SQUAD_RATING_TECHNIQUE].value + 1) / 2 +
                (player->ability[SQUAD_RATING_AGILITY].value + 1) / 4 +
                player->packed.special.oneTouchPass * 15;
    *maximum += 140;
    return score;
}
