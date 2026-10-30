/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00B445F0(s32 arg0, s32 arg1) {
    s32 temp_v1;
    s32 var_v0;

    temp_v1 = ((arg1 & 0xFF) + ((arg0 & 0xFF) * 0x14)) & 0xFF;
    if ((temp_v1 >= 0) && (temp_v1 < 0x14)) {
        var_v0 = temp_v1 + 0x40;
    } else if ((temp_v1 >= 0x14) && (temp_v1 < 0x28)) {
        var_v0 = temp_v1 + 0x40;
    } else if ((temp_v1 >= 0x28) && (temp_v1 < 0x3C)) {
        var_v0 = temp_v1 + 0x40;
    } else if ((temp_v1 >= 0x3C) && (temp_v1 < 0x4E)) {
        var_v0 = temp_v1 + 0x40;
    } else if ((temp_v1 >= 0x50) && (temp_v1 < 0x64)) {
        var_v0 = temp_v1 + 0x3E;
    } else if ((temp_v1 >= 0x64) && (temp_v1 < 0x77)) {
        var_v0 = temp_v1 + 0x3E;
    } else if ((temp_v1 >= 0x78) && (temp_v1 < 0x7D)) {
        var_v0 = temp_v1 + 0x3D;
    } else if ((temp_v1 >= 0x8C) && (temp_v1 < 0x9E)) {
        var_v0 = temp_v1 + 0x2E;
    } else {
        var_v0 = 0xFFFF;
    }
    return var_v0 & 0xFFFF;
}
