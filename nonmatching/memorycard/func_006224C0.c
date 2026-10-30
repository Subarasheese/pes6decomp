/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0063CA40(M2C_UNK);                         /* extern */

s32 func_006224C0(void *arg0) {
    s32 *var_s2;
    s32 temp_s0;
    s32 temp_s5;
    s32 var_a0;
    s32 var_s1;
    s32 var_s3;
    u8 temp_v1_2;
    void *temp_v1;

    var_s3 = 0;
    if (M2C_FIELD(arg0, u8 *, 0x30) == 4) {
        goto block_22;
    }
    var_a0 = 0;
    do {
        if (M2C_FIELD((arg0 + var_a0), u8 *, 0x28) == 1) {
            var_s3 = 1;
        }
        var_a0 += 1;
    } while (var_a0 < 8);
    if (var_s3 == 0) {
        var_s1 = 1;
        var_s2 = arg0 + 4;
        do {
            temp_v1 = arg0 + var_s1;
            if ((M2C_FIELD(temp_v1, u8 *, 0x30) != 3) && ((temp_s5 = *var_s2, ((temp_s5 < func_0063CA40(5)) == 0)) || (M2C_FIELD(temp_v1, u8 *, 0x30) == 4))) {
                var_s3 = 1;
            }
            var_s1 += 1;
            var_s2 += 4;
        } while (var_s1 < 8);
    }
    if ((M2C_FIELD(arg0, u8 *, 0x20) == 0) && (var_s3 == 1)) {
        temp_s0 = M2C_FIELD(arg0, s32 *, 0);
        if (temp_s0 < func_0063CA40(0)) {
            return 1;
        }
        temp_v1_2 = M2C_FIELD(arg0, u8 *, 0x30);
        if ((temp_v1_2 == 2) || (temp_v1_2 == 3) || ((u32) (temp_v1_2 - 6) < 2U)) {
            return 1;
        }
        goto block_22;
    }
block_22:
    return 0;
}
