/* compiler: mwcc-3.0.1b151 */
#pragma inline_depth(8)

#include "pes6/match_slot_access.h"

u8 func_00292AA0(void) {
    if (!sharedEnabled())
        return 0;
    return sharedSlots()->field01;
}
