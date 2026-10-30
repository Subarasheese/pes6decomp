/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00173558(s32, s32, M2C_UNK, s32, s32); /* extern */

s32 func_00174030(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a3;
    s32 temp_a4;
    s32 temp_a4_2;
    s32 temp_s3;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_a1;
    s32 var_s1;
    s32 var_s2;
    s32 var_v0;
    s32 var_v1;

    var_v1 = 0;
    var_a1 = 0;
    var_s2 = 0;
    temp_a0 = M2C_FIELD(arg0, s32 *, 0xBF0);
    var_s1 = 0;
    if (temp_a0 > 0) {
loop_2:
        temp_a4 = M2C_FIELD(arg0, s32 *, 0xB80);
        if (var_v1 != 0) {
            if (!(M2C_FIELD(((var_s1 * 0x24) + temp_a4), s32 *, 4) & 0x50)) {
                temp_v1 = M2C_FIELD(arg0, s32 *, 0xB8C);
                temp_s3 = var_s1 - var_s2;
                temp_a0_2 = temp_v1 < var_s1;
                if (temp_v1 >= var_s2) {
                    var_v0 = temp_v1 - temp_s3;
                    if (temp_a0_2 != 0) {
                        M2C_FIELD(arg0, s32 *, 0xB8C) = var_s2;
                    } else {
                        goto block_9;
                    }
                } else if (temp_a0_2 == 0) {
                    var_v0 = temp_v1 - temp_s3;
block_9:
                    M2C_FIELD(arg0, s32 *, 0xB8C) = var_v0;
                }
                func_00173558((var_s2 * 0x24) + temp_a4, (var_s1 * 0x24) + temp_a4, 0x24, M2C_FIELD(arg0, s32 *, 0xBF0) - var_s1, temp_a4);
                M2C_FIELD(arg0, s32 *, 0xD0C) = 0;
                M2C_FIELD(arg0, s32 *, 0xBF0) = (s32) (M2C_FIELD(arg0, s32 *, 0xBF0) - (var_s1 - var_s2));
                return 1;
            }
            goto block_13;
        }
        if (M2C_FIELD(((var_s1 * 0x24) + temp_a4), s32 *, 4) & 0x50) {
            var_s2 = var_s1;
            var_v1 = 1;
        }
block_13:
        var_s1 += 1;
        if (var_s1 >= temp_a0) {
            goto block_14;
        }
        goto loop_2;
    }
block_14:
    if (var_v1 != 0) {
        temp_a3 = M2C_FIELD(arg0, s32 *, 0xBF0);
        if (var_s1 == temp_a3) {
            temp_v0 = M2C_FIELD(arg0, s32 *, 0xB8C);
            temp_a4_2 = M2C_FIELD(arg0, s32 *, 0xB80);
            if ((temp_v0 >= var_s2) || (temp_v0 >= var_s1)) {
                M2C_FIELD(arg0, s32 *, 0xB8C) = var_s2;
            }
            func_00173558((var_s2 * 0x24) + temp_a4_2, (var_s1 * 0x24) + temp_a4_2, 0x24, temp_a3 - var_s1, temp_a4_2);
            var_a1 = 1;
            M2C_FIELD(arg0, s32 *, 0xBF0) = (s32) (M2C_FIELD(arg0, s32 *, 0xBF0) - (var_s1 - var_s2));
        }
    }
    M2C_FIELD(arg0, s32 *, 0xD0C) = 0;
    return var_a1;
}
