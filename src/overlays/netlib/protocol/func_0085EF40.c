/* compiler: mwcc-3.0.1b210 */
#include "pes6/netlib_match_participants.h"
s32 func_0085EF40(void) {
    NetlibMatchSync *sync = D_003EA358;
    s32 state;
    if (!sync)
        return -1;
    state = sync->states[func_008472D0()->slot - 1];
    if (sync->finished)
        return state;
    if (sync->selectedSlots[0] || sync->selectedSlots[1]) {
        s16 selected = D_003EA358->selectedSlots[D_008B144E[0] & 1];
        if (selected != func_008472D0()->slot)
            return state;
    }
    switch (state) {
    case 0:
    case 2:
        break;
    case 1:
        return state;
    case 3:
        D_003EA358->sequences[func_008472D0()->slot - 1]++;
        D_003EA358->states[func_008472D0()->slot - 1] = 2;
        D_003EA358->dirty = 1;
        break;
    default:
        return state;
    }
    D_003EA358->requestedState = 0;
    return D_003EA358->states[func_008472D0()->slot - 1];
}
