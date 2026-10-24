/* compiler: mwcc-3.0.1b210 */
#include "pes6/partial_005a2330.h"


u8 func_00292B50(s32 index) {
    PartialState005A2330 *state = &D_005A2330;
    if ((state != 0) && (index >= 0) && (index < 2)) {
        return state->values[index];
    }
    return 0U;
}
