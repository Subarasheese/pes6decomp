/* compiler: mwcc-3.0.1b151 */
#include "pes6/game_flags.h"
s32 func_00B24200(s32 side) {
    s32 mask = 1 << (side != 0);
    s32 previous = D_00CBBF10->first;
    s32 wasSet = (previous & mask) != 0;
    D_00CBBF10->first &= (u8)~mask;
    return wasSet;
}
