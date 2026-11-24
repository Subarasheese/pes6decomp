/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_player_orders.h"

s32 func_00C22F70(Pes6MatchPlayer *player) {
    MatchOrder *slot;
    u8 id = player->id;
    if (hasPlayerOrder(id, 13))
        return 0;
    slot = findFreeOrder();
    if (!slot)
        return 0;
    slot->owner = player->id;
    slot->kind = 13;
    if (((const OrderActorControl *)player)->control >= 31)
        slot->remaining = 3 * D_00591BE4[0];
    else
        slot->remaining = 2 * D_00591BE4[0];
    slot->x = (s16)(s32)player->x;
    slot->z = (s16)(s32)player->z;
    slot->details.point.side = (s16)(s32)(939.f * (f32)(-player->z < 0.f ? -1 : 1));
    return 1;
}
