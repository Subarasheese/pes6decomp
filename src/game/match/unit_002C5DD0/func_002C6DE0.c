/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_squad_selection.h"

s32 func_002C6DE0(const SquadPlayerProfile *player, s32 *maximum) {
    s32 score = (player->packed.special.oneTouchPass + player->ability[21].flag) * 15;
    score += player->ability[20].flag * 25;
    *maximum += 55;
    return score;
}
