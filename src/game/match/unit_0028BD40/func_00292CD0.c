/* compiler: mwcc-3.0.1b210 */
#include "pes6/partial_005a2330.h"


s32 func_00292CD0(s32 index) {
    PartialState005A2330 *state = &D_005A2330;
    if ((state != 0) && (index >= 0) && (index < 2)) {
        return state->flags[index] & 7;
    }
    return 3;
}
