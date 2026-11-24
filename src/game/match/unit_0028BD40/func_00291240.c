/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_slot_access.h"

void func_00291240(s32 side, s32 slot, s32 enabled) {
    MatchSlotEntry *entry = matchSlot(side, slot);
    if (entry == 0)
        return;
    if (entry->kind != 2)
        return;
    entry->firstEnabled = enabled ? 1 : 0;
}
