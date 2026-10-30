/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002260F0(s32);
s32 func_00224D90(s32, u8);                         /* extern */

s32 func_00B049E0(s32 arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_s2;

    if ((arg0 & 0xFF) >= 0x50) {
        goto block_12;
    }
    temp_v0 = func_002260F0(arg0);
    if (temp_v0 != 0) {
        var_s2 = 0;
loop_7:
        if ((arg1 & 0xFFFF) != (func_00224D90(arg0, M2C_FIELD((temp_v0 + var_s2), u8 *, 0x4A6)) & 0xFFFF)) {
            var_s2 += 1;
            if (var_s2 >= 0xB) {
                goto block_12;
            }
            goto loop_7;
        }
        return 1;
    }
block_12:
    return 2;
}
