/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(16)
#include "pes6/lobby_records.h"
extern s32 func_0094FC70(u32 index, s32 side, s32 member);
u8 *func_0094FA60(u32 index, s32 side, s32 member) {
    s32 slot = func_0094FC70(index, side, member);
    LobbyGroupRecord *row = lobby_group_at(index);
    if (!row)
        return 0;
    if (slot < 0 || slot >= 8)
        return 0;
    if (row->memberText[slot][0] == 0)
        return 0;
    else
        return row->memberText[slot];
}
