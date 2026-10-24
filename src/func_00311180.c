/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_002C1D20(s32, s32, u8, s32);

s32 func_00311180(s32 id) {
    return func_002C1D20(0, 0xFF, id, 0x15) + func_002C1D20(0, 0xFF, id, 0x16);
}
