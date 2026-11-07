/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"


s32 func_00C11AC0(s32 arg0, u8 arg1, s32 arg2, u8 arg3) {
    if ((arg1 >= 2) || (arg3 < 0) || (arg3 >= 8)) {
        arg1 = (u8)(arg3 = 0);
    }
    return arg0 + (arg1 * 0xD80) + (arg3 * 0xC0) + 0x83C;
}
