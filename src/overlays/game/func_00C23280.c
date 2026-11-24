/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_player_orders.h"

s32 func_00C23280(Pes6MatchPlayer *player, s32 selected) {
    MatchOrder *slot = findFreeOrder();
    if (!slot)
        return 0;
    slot->owner = player->id;
    slot->kind = 10;
    slot->remaining = 3 * D_00591BE4[0];
    slot->x = (s16)(s32)player->x;
    slot->z = (s16)(s32)player->z;
    slot->details.target = (u8)selected;
    return 1;
}
