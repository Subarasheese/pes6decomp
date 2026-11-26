/* compiler: mwcc-3.0.1b151-O3 */
#pragma opt_strength_reduction off
#include "pes6/netlib_room.h"
s32 func_0086A8E0(NetlibRoomState *state) {
    s32 i;
    if (!state)
        return 0;
    state->memberCount = 0;
    for (i = 0; i < 8; i++) {
        if (state->members[i].id)
            state->memberCount++;
    }
    state->slotCount = 0;
    for (i = 0; i < 4; i++) {
        if (state->slots[i].id)
            state->slotCount++;
    }
    return 1;
}
