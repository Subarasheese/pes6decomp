/* compiler: mwcc-3.0.1b151 */
#pragma inline_depth(8)

#include "pes6/match_slot_access.h"

void func_002910E0(s32 side, s32 slot, s16 first, s16 second) {
    MatchSlotEntry *entry = findMatchSlot(side, slot);
    if (entry == 0)
        return;
    if (entry->kind != 2)
        return;
    if (!entry->firstEnabled)
        return;
    {
        entry->first[0] = first;
        entry->first[1] = second;
    }
}
