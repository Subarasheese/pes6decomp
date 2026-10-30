/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00109398(s32, s32, M2C_UNK);           /* extern */

s32 func_0010A4F8(void *arg0, void *arg1, s32 arg2) {
    s32 temp_a1;
    s32 var_s1;
    s32 var_s3;
    s32 var_v0;
    s32 var_v1;

    var_s1 = 0;
    M2C_FIELD(arg1, s32 *, 0xC) = 0;
    if (M2C_FIELD(arg0, u32 *, 0xC) != 0) {
        var_s3 = 0;
        var_v1 = arg2 > 0;
loop_2:
        var_v0 = -var_s1;
        var_s1 += 1;
        if (var_v1 != 0) {
            temp_a1 = M2C_FIELD(arg0, s32 *, 8) + var_s3;
            var_s3 += 0x28;
            func_00109398(M2C_FIELD(arg1, s32 *, 8) + (M2C_FIELD(arg1, s32 *, 0xC) * 0x28), temp_a1, 0xA);
            M2C_FIELD(arg1, s32 *, 0xC) = (s32) (M2C_FIELD(arg1, s32 *, 0xC) + 1);
            var_v1 = var_s1 < arg2;
            if ((u32) var_s1 >= (u32) M2C_FIELD(arg0, u32 *, 0xC)) {
                goto block_4;
            }
            goto loop_2;
        }
    } else {
block_4:
        var_v0 = var_s1;
    }
    return var_v0;
}
