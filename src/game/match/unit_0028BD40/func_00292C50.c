/* compiler: mwcc-3.0.1b151 */
#pragma inline_depth(8)

#include "pes6/partial_005a2330.h"

s32 func_00292C50(void) {
    PartialState005A2330 *state = &D_005A2330;
    if (!(state == 0))
        return ((s32)state->flags[0] >> 6) & 3;
    return 0;
}
