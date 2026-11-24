/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_slot_access.h"

void func_00291370(s32 side, s32 slot, u8 kind) {
    MatchSlotEntry *entry;
    if (kind > 3)
        return;
    entry = findMatchSlot(side, slot);
    if (!entry)
        return;
    entry->kind = kind;
    if (kind == 2)
        return;
    entry->firstEnabled = 0;
    entry->first[0] = 0x7fff;
    entry->first[1] = 0;
    entry->firstSaved[0] = 0x7fff;
    entry->firstSaved[1] = 0;
    entry->secondEnabled = 0;
    entry->second[0] = 0x7fff;
    entry->second[1] = 0;
    entry->secondSaved[0] = 0x7fff;
    entry->secondSaved[1] = 0;
}
