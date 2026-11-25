/* compiler: mwcc-3.0.1b198-O3 */
#pragma inline_depth(16)
#include "pes6/lobby_channel_status.h"
extern s32 D_008A5F84[];
static inline s32 currentMode(void) {
    if (D_008A4398[0] == 0)
        return 9;
    return D_008A5F84[0];
}
s32 func_0082B060(void) {
    switch (currentMode()) {
    case 4:
        return netlib_channel_unavailable(3);
    case 5:
        return netlib_channel_unavailable(3);
    case 6: {
        s32 unavailable;
        if (func_00832280() == 1)
            unavailable = 0;
        else
            unavailable = netlib_channel_unavailable(5);
        return unavailable;
    }
    case 0:
    case 1:
    case 2:
    case 3:
    case 7:
    case 8:
    case 9:
    case 10:
    default:
        return 1;
    }
}
