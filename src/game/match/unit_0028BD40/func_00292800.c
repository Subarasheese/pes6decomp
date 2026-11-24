/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_slot_access.h"

s32 func_00292800(s32 side) {
    MatchSideSlots *team = sideSlots(side);
    if (!(team == 0))
        return team->count;
    if (slotMode() == 2)
        return 0;
    return 7;
}
