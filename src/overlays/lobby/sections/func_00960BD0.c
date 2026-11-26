/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(16)
#include "pes6/lobby_records.h"
static inline s32 slotValue(s32 index) {
    LobbySlotRecord *row = lobby_slot_at(index);
    if (row == 0)
        return 0;
    return row->field0C;
}
s32 func_00960BD0(s32 index) {
    s32 value = slotValue(index);
    if (!value)
        return 0;
    return 1;
}
