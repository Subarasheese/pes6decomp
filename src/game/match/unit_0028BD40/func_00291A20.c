/* compiler: mwcc-3.0.1b151 */

#include "pes6/partial_005a2330.h"

void func_00291A20(u8 value) {
    PartialState005A2330 *state = &D_005A2330;
    if (state) {
        if (value > 23)
            value = 23;
        state->setting03 = value;
    }
}
