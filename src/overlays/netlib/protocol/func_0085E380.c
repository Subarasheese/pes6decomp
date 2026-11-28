/* compiler: mwcc-3.0.1b198 */
#pragma opt_strength_reduction off
#pragma opt_rotateloops off
#include "pes6/netlib_match_participants.h"
s32 func_0085E380(s32 side) {
    s32 i;
    s8 count;
    if (!D_003EA358)
        return -1;
    count = D_008B21C0.sideCount[side];
    if (!count)
        return 3;
    if (D_003EA358->selectedSlots[side])
        return D_003EA358->states[D_003EA358->selectedSlots[side] - 1];
    for (i = 0; i < count; i++) {
        if (D_003EA358->states[D_008B21C0.sides[side][i] - 1] != 3)
            return 0;
    }
    return 3;
}
