/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002C4960(u32, s8);
s32 func_002C19F0(s32, u32, s32, M2C_UNK, M2C_UNK); /* extern */
s32 func_002C6130(s32);                             /* extern */
s32 func_00C5BAB0(s32);                             /* extern */

s32 func_00C5B930(M2C_UNK arg0, u32 arg1, s8 arg2) {
    s32 temp_s3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;

    var_s0 = 0;
    temp_s3 = ((((s32) (arg2 & 0xFF) >> 5) & 1) ^ 1) & 0xFF;
    temp_v0 = func_00C5BAB0(temp_s3);
    if ((temp_v0 != -1) && (arg1 != -1U)) {
        temp_v0_2 = func_002C19F0(temp_v0, arg1, temp_s3, 6, 1);
        if ((temp_v0_2 != -1) && (func_002C6130(temp_v0_2) != -1)) {
            var_s0 = func_002C4960(arg1, arg2) == 0;
        }
    }
    return var_s0;
}
