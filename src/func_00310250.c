/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s16 func_002C1D20(s32, s32, s32, s32);

s32 func_00310250(s16 *arg0, s32 arg1, u8 arg2, u8 arg3) {
    *arg0 = func_002C1D20(arg2 & 0x7F, arg3 & 0x7F, arg1, 6);
    return 1;
}
