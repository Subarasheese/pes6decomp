/* compiler: mwcc-3.0.1b210 */
#include "pes6/netlib_match_sync.h"
s32 func_0085E440(s16 slot, s32 state) {
    if (!D_003EA358)
        return -1;
    if (!func_002DCA40())
        return -1;
    if (D_003EA358->finished)
        return -1;
    D_003EA358->states[slot - 1] = state;
    return state;
}
