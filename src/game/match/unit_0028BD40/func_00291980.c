/* compiler: mwcc-3.0.1b151 */

#include "pes6/partial_005a2330.h"

void func_00291980(s32 side, s32 value) {
    PartialState005A2330 *state = &D_005A2330;
    if (!state)
        return;
    if (side < 0 || side >= 2)
        return;
    if (value >= 6)
        return;
    state->flags[side] &= 0xf8;
    state->flags[side] |= (u8)value;
}
