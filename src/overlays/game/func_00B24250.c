/* compiler: mwcc-3.0.1b151 */
#include "pes6/game_flags.h"
s32 func_00B24250(s32 side) {
    s32 mask = 1 << (side != 0);
    s32 previous = D_00CBBF10->second;
    s32 wasSet = (previous & mask) != 0;
    D_00CBBF10->second &= (u8)~mask;
    return wasSet;
}
