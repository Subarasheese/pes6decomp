/* compiler: mwcc-3.0.1b151 */
#pragma inline_depth(8)

#include "pes6/match_slot_access.h"

u8 func_00292660(s32 side, s32 slot) {
    MatchSlotEntry *entry = matchSlot(side, slot);
    if (!(entry == 0))
        return entry->kind;
    return 0;
}
