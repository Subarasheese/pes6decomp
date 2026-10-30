/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00C11AC0(s32 arg0, s32 arg1, M2C_UNK arg2, s32 arg3) {
    s32 temp_v0;
    s32 var_a1;
    s32 var_a3;

    var_a1 = arg1;
    var_a3 = arg3;
    if (((var_a1 & 0xFF) >= 2) || (temp_v0 = var_a3 & 0xFF, (temp_v0 < 0)) || (temp_v0 >= 8)) {
        var_a3 = 0;
        var_a1 = 0 & 0xFF;
    }
    return arg0 + ((var_a1 & 0xFF) * 0xD80) + ((var_a3 & 0xFF) * 0xC0) + 0x83C;
}
