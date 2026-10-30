/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00C17E10(s32, s32);                        /* extern */

s32 func_00C11C80(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_v1;
    s32 var_s0;
    u8 var_a2;

    var_s0 = arg1;
    temp_v1 = var_s0 & 0xFF;
    temp_a0 = func_00C17E10(var_s0, arg2) & 0xFF;
    var_a2 = M2C_FIELD((temp_a0 + ((temp_v1 * 0x12) + arg0)), u8 *, 0x98);
    if ((temp_v1 >= 2) || ((var_a2 & 0xFF) >= 0xB) || (temp_a0 >= 0x12)) {
        var_a2 = 0;
        var_s0 = 0 & 0xFF;
    }
    return arg0 + ((var_s0 & 0xFF) * 0xD80) + ((var_a2 & 0xFF) * 0x60) + 0xEC;
}
