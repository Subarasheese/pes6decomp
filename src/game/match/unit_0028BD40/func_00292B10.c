/* compiler: mwcc-3.0.1b151 */
#pragma inline_depth(8)

#include "pes6/match_slot_access.h"

u8 func_00292B10(void) {
    MatchSharedSlots *p = sharedSlots();
    if (!(p == 0))
        return p->enabled;
    return 0;
}
