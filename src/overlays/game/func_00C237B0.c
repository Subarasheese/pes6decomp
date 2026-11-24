/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_player_orders.h"

extern void *func_001C48E8(void *dst, s32 byte, u32 length);
extern void func_009143D0(Pes6MatchPlayer *, s32, s32);
extern s32 func_00A07B40(void);
extern u8 D_00591E67[], D_005926F1[];

s32 func_00C237B0(Pes6MatchPlayer *player, s32 selected) {
    MatchOrder *slot;
    slot = findPlayerOrder(player, 2);
    if (slot) {
        if (slot->details.point.selection == (u8)selected)
            return 0;
        func_001C48E8(slot, 0, sizeof(*slot));
    }
    slot = findFreeOrder();
    if (!slot)
        return 0;
    slot->owner = player->id;
    slot->kind = 2;
    slot->details.point.selection = (u8)selected;
    slot->details.point.aimX = (s16)(s32)player->aimX;
    slot->details.point.aimZ = (s16)(s32)player->aimZ;
    slot->details.point.sideByte = D_00591E67[player->team];
    if (func_00A07B40())
        slot->remaining = D_00591BE4[0];
    else
        slot->remaining = D_005926F1[0];
    slot->x = (s16)(s32)player->x;
    slot->z = (s16)(s32)player->z;
    func_009143D0(player, 0, 1);
    slot->priority = 1;
    return 1;
}
