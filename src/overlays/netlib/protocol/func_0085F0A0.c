/* compiler: mwcc-3.0.1b210 */
#include "pes6/netlib_match_participants.h"
s32 func_0085F0A0(s8 value) {
    s32 idx = func_008472D0()->slot - 1;
    s32 state;
    if (!D_003EA358)
        return -1;
    state = D_003EA358->states[idx];
    if (D_003EA358->finished)
        return state;
    switch (state) {
    case 0:
        D_003EA358->states[idx] = 1;
        D_003EA358->dirty = 1;
        D_003EA358->sequences[func_008472D0()->slot - 1]++;
        break;
    case 2:
        return state;
    case 1:
    case 3:
        break;
    default:
        return state;
    }
    D_003EA358->requestedState = 3;
    D_003EA358->localValue = value;
    return D_003EA358->states[idx];
}
