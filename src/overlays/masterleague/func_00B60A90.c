/* compiler: mwcc-3.0.1b210 */
#include "types.h"

s32 func_00B60A90(s32 arg0) {
    s32 var_v0;
    u32 temp_v1;

    temp_v1 = arg0 & 0xFF;
    var_v0 = 0x19006B;
    switch (temp_v1) {
    case 0:
        return 0x190068;
    case 1:
        return 0x19006B;
    case 2:
        return 0x190066;
    case 3:
        return 0x190069;
    case 4:
        return 0x190076;
    case 5:
        var_v0 = 0x190075;
        /* fallthrough */
    default:
        return var_v0;
    }
}
