/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001AE624(s32, s32, s32);               /* extern */
s32 func_001B3B28(void *);                          /* extern */

u32 func_001B2D98(s32 arg0, u32 arg1, u32 arg2, void *arg3) {
    s32 temp_a2;
    s32 var_s0;
    s32 var_s2;
    u32 temp_s5;
    u32 var_s3;

    var_s3 = arg2 * arg1;
    if (var_s3 == 0) {
        return 0U;
    }
    temp_a2 = M2C_FIELD(arg3, s32 *, 4);
    var_s0 = temp_a2;
    if (temp_a2 < 0) {
        M2C_FIELD(arg3, s32 *, 4) = 0;
        var_s0 = 0;
    }
    var_s2 = arg0;
    temp_s5 = var_s3;
    if ((u32) var_s0 < var_s3) {
loop_7:
        var_s3 -= var_s0;
        func_001AE624(var_s2, M2C_FIELD(arg3, s32 *, 0), var_s0);
        var_s2 += var_s0;
        M2C_FIELD(arg3, s32 *, 0) = (s32) (M2C_FIELD(arg3, s32 *, 0) + var_s0);
        if (func_001B3B28(arg3) == 0) {
            var_s0 = M2C_FIELD(arg3, s32 *, 4);
            if ((u32) var_s0 < var_s3) {
                goto loop_7;
            }
            goto block_11;
        }
        return (u32) (temp_s5 - var_s3) / arg1;
    }
block_11:
    func_001AE624(var_s2, M2C_FIELD(arg3, s32 *, 0), (s32) var_s3);
    M2C_FIELD(arg3, s32 *, 4) = (s32) (M2C_FIELD(arg3, s32 *, 4) - var_s3);
    M2C_FIELD(arg3, s32 *, 0) = (s32) (M2C_FIELD(arg3, s32 *, 0) + var_s3);
    return arg2;
}
