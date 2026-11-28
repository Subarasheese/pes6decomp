/* compiler: mwcc-3.0.1b198-O3 */
#pragma inline_depth(16)
#include "pes6/lobby_records.h"
static inline s32 slotValue(s32 index) {
    LobbySlotRecord *row = lobby_slot_at(index);
    if (row == 0)
        return 0;
    else
        return row->field0C;
}
static inline s32 slotActive(s32 index) { return slotValue(index) != 0; }
static inline u8 slotLimit(s32 index) {
    LobbySlotRecord *row = lobby_slot_at(index);
    if (row == 0)
        return 0;
    else
        return row->field41;
}
static inline u8 slotSize(s32 index) {
    LobbySlotRecord *row = lobby_slot_at(index);
    if (row == 0)
        return 0;
    else
        return row->field00;
}
s32 func_00960A30(s32 index) {
    u16 limit;
    u8 size;
    if ((u8)slotActive(index) == 0)
        return 3;
    limit = slotLimit(index);
    size = slotSize(index);
    if (limit < size)
        return 2;
    return size >= limit;
}
