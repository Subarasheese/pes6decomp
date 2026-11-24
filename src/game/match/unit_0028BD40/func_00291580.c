/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_slot_access.h"

void func_00291580(s32 side, s32 value) {
    MatchSideSlots *team = sideSlots(side);
    if (!team)
        return;
    team->field01 = value;
}
