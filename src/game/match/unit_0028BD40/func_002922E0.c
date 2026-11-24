/* compiler: mwcc-3.0.1b151 */

#include "pes6/match_slot_access.h"

extern s32 func_00292440(s32, s32);

s32 func_002922E0(s32 side, s32 slot, s32 index) {
    if (!(func_00292440(side, slot) != 0)) {
        if (!index)
            return 0x7fff;
        return 0;
    }
    return matchSlot(side, slot)->first[index != 0];
}
