/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_squad_selection.h"

s32 func_002C6C80(const SquadPlayerProfile *player, s32 *maximum) {
    s32 score = (player->ability[22].flag + player->ability[23].flag) * 5;
    score += player->attributes.flag21 * 10;
    *maximum += 20;
    return score;
}
