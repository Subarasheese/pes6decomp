/* compiler: mwcc-3.0.1b151 */
#pragma inline_depth(8)

#include "pes6/match_slot_access.h"

s32 func_00291DD0(s32 side, s32 slot) {
    if (slotKind(side, slot) != 2)
        return 0;
    return matchSlot(side, slot)->secondEnabled;
}
