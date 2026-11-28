/* compiler: mwcc-3.0.1b210 */
#include "pes6/netlib_match_sync.h"
s32 func_0085E4C0(s16 slot) {
    if (D_003EA358 == 0) {
        return -1;
    } else {
        return D_003EA358->states[slot - 1];
    }
}
