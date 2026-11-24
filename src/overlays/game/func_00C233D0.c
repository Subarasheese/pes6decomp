/* compiler: mwcc-3.0.1b151 */
#pragma opt_common_subs off

#include "pes6/match_player_orders.h"

typedef struct {
    u8 pad[0x1b4];
    u8 peers[2][MATCH_ORDER_TEAM_PLAYERS];
    u8 gap[0x1d9 - 0x1ca];
    u8 selected;
} OrderPlayerTargets;

static inline u8 firstOpponent(const Pes6MatchPlayer *player) {
    u32 side = (player->side ^ 1);
    const OrderPlayerTargets *fields = (const OrderPlayerTargets *)player;
    return fields->peers[side][0];
}

s32 func_00C233D0(Pes6MatchPlayer *player) {
    MatchOrder *slot;
    slot = findFreeOrder();
    if (!slot)
        return 0;
    slot->owner = player->id;
    slot->kind = 7;
    slot->remaining = 3 * D_00591BE4[0];
    slot->x = (s16)(s32)player->x;
    slot->z = (s16)(s32)player->z;
    ++slot->priority;
    {
        s32 selected = ((const OrderPlayerTargets *)player)->selected;
        if ((u8)selected == 0)
            slot->details.target = firstOpponent(player);
        else
            slot->details.target = (u8)selected;
        return 1;
    }
}
