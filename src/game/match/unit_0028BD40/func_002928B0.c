/* compiler: mwcc-3.0.1b151 */
#pragma inline_depth(8)

#include "pes6/match_slot_access.h"

s16 func_002928B0(s32 side) {
    if (!sharedEnabled())
        return 0;
    if (!sharedValuesEnabled())
        return 0;
    if (side < 0 || side >= 2)
        return 0;
    return sharedSlots()->scores[side];
}
