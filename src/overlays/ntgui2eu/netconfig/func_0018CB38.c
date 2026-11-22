/* compiler: ee-gcc-2.9 */
#include "types.h"

s32 func_0018CB38(s32 arg0, u32 arg1, s32 arg2) {
    u32 var_a0;

    switch (arg1) {
    case 0x0:
    case 0x1:
    case 0x1B:
    case 0x24:
    case 0x2C:
    case 0x30:
    case 0x31:
        var_a0 = 1;
        break;
    case 0x2:
    case 0x32:
    case 0x3A:
        var_a0 = 2;
        break;
    case 0x13:
        var_a0 = 4;
        break;
    case 0x14:
        var_a0 = 8;
        break;
    default:
        var_a0 = 0;
        break;
    }
    return ((u32) (((u32) (arg0 * arg2) / var_a0) + 0x1F) >> 5) << 5;
}
