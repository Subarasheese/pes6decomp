/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_00B60B00(s32 arg0) {
    s32 var_v0;
    u32 temp_v1;

    temp_v1 = arg0 & 0xFF;
    var_v0 = 0x1C;
    switch (temp_v1) {
    case 0:
        return 0x20;
    case 1:
        return 0x21;
    case 2:
        return 0x1C;
    case 3:
        return 0x1D;
    case 4:
        return 0x27;
    case 5:
        var_v0 = 0x26;
        /* fallthrough */
    default:
        return var_v0;
    }
}
