/* compiler: mwcc-3.0.1b151 */
#pragma inline_depth(8)

#include "pes6/match_slot_access.h"

u8 func_00292780(s32 side) {
    MatchSideSlots *team = sideSlots(side);
    if (!(team == 0))
        return team->field01;
    return 0;
}
