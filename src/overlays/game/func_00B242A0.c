/* compiler: mwcc-3.0.1b151 */
#include "pes6/game_flags.h"
s32 func_00B242A0(s32 side) {
    s32 mask = 1 << (side != 0);
    s32 previous = D_00CBBF10->present;
    s32 wasSet = (previous & mask) != 0;
    D_00CBBF10->present &= (u8)~mask;
    return wasSet;
}
