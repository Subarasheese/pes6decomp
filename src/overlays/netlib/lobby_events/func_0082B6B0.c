/* compiler: mwcc-3.0.1b198 */
#include "pes6/lobby_channel_status.h"

s32 func_0082B6B0(void) {
    if (func_00832280() == 1)
        return 0;
    return netlib_channel_unavailable(5);
}
