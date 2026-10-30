/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591DF0[];

s32 func_009B3220(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a1;
    s32 temp_a4;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a2;

    var_a0 = arg0;
    var_a2 = arg2;
    if ((*(u8 *)D_00591DF0) != 0) {
        var_a2 = ((s32) ((var_a2 & 0xFFFF) * 0x3C) / (s32) ((*(u8 *)D_00591DF0) & 0xFF)) & 0xFFFF;
    }
    temp_a4 = arg1 & 0xFFFF;
    temp_a1 = (((var_a0 & 0xFFFF) - temp_a4) + 0x10000) & 0xFFFF;
    if (temp_a1 >= 0x8000) {
        temp_v1 = var_a2 & 0xFFFF;
        if (temp_v1 < (0x10000 - temp_a1)) {
            var_a0 = ((temp_a4 - temp_v1) + 0x10000) & 0xFFFF;
        }
        return var_a0;
    }
    temp_v0 = var_a2 & 0xFFFF;
    if (temp_v0 < temp_a1) {
        var_a0 = (temp_a4 + temp_v0) & 0xFFFF;
    }
    return var_a0;
}
