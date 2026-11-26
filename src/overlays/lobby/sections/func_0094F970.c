/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(16)
#include "pes6/lobby_records.h"
extern s32 func_0094FC70(u32 index, s32 side, s32 member);
typedef struct {
    u8 reserved00[0x244];
    s8 state;
} GroupSlot;
s8 func_0094F970(u32 index, s32 side, s32 member) {
    s32 slot = func_0094FC70(index, side, member);
    LobbyGroupRecord *row = lobby_group_at(index);
    if (!row)
        return 0;
    if (slot < 0 || slot >= 8)
        return 0;
    return ((GroupSlot *)(slot + (u32)row))->state;
}
