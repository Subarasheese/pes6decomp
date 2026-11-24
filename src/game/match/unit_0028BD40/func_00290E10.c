/* compiler: mwcc-3.0.1b151 */
#pragma inline_depth(8)

#include "pes6/match_slot_access.h"

void func_00290E10(s32 side, s32 slot, s16 first, s16 second) {
    MatchSlotEntry *entry = findMatchSlot(side, slot);
    if (entry == 0)
        return;
    if (entry->kind != 2)
        return;
    if (!entry->secondEnabled)
        return;
    {
        entry->second[0] = first;
        entry->second[1] = second;
    }
}
