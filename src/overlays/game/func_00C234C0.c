/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_player_orders.h"

s32 func_00C234C0(Pes6MatchPlayer *player) {
    MatchOrder *slot = findFreeOrder();
    if (!slot)
        return 0;
    slot->owner = player->id;
    slot->kind = 6;
    slot->remaining = 3 * D_00591BE4[0];
    slot->x = (s16)(s32)player->x;
    slot->z = (s16)(s32)player->z;
    return 1;
}
