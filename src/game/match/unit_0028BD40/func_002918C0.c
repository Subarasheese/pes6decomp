/* compiler: mwcc-3.0.1b151 */

#include "pes6/partial_005a2330.h"

void func_002918C0(s32 value) {
    PartialState005A2330 *state = &D_005A2330;
    if (!state)
        return;
    if (value >= 4)
        return;
    state->flags[0] &= 0x3f;
    state->flags[0] |= (u8)(value << 6);
}
