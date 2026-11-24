/* compiler: mwcc-3.0.1b151 */
/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_slot_access.h"

void func_002914F0(s32 side, s32 value) {
    MatchSideSlots *team = sideSlots(side);
    if (!team)
        return;
    if (value > 7)
        value = 7;
    team->count = value;
}
