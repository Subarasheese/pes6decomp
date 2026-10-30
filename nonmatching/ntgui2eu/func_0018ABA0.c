/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0018ABA0(void *arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_v0;
    s32 temp_v1_2;
    s32 var_a3;
    u32 temp_v1;
    u64 var_a1;
    u64 var_a1_2;

    temp_v1 = M2C_FIELD(arg0, u32 *, 0);
    var_a3 = 0;
    var_a1 = M2C_FIELD(arg0, u64 *, 0x10);
    if (temp_v1 < 2U) {
        var_a3 = 0x7FF;
        var_a1 |= 0x8000 << 0x24;
    } else if ((temp_v1 ^ 4) != 0) {
        if ((temp_v1 ^ 2) == 0) {
            var_a1 = 0;
        } else if (var_a1 != 0) {
            temp_v1_2 = M2C_FIELD(arg0, s32 *, 8);
            if (temp_v1_2 < -0x3FE) {
                temp_v0 = -0x3FE - temp_v1_2;
                var_a1_2 = var_a1 >> temp_v0;
                if (temp_v0 >= 0x39) {
                    var_a1_2 = 0;
                }
                goto block_17;
            }
            var_a3 = temp_v1_2 + 0x3FF;
            if (temp_v1_2 >= 0x400) {
                goto block_10;
            }
            if ((var_a1 & 0xFF) != 0x80) {
                var_a1_2 = var_a1 + 0x7F;
            } else {
                var_a1_2 = (var_a1 & 0x100) ? (var_a1 + 0x80) : var_a1;
            }
            if ((u64) (-1U >> 3) < var_a1_2) {
                var_a1_2 = var_a1_2 >> 1;
                var_a3 += 1;
            }
block_17:
            var_a1 = var_a1_2 >> 8;
        }
    } else {
block_10:
        var_a3 = 0x7FF;
        var_a1 = 0;
    }
    return (((((arg2 & (0xFFF0 << 0x30)) | (var_a1 & (-1U >> 0xC))) & ((((0x800FFFFF << 0x10) | 0xFFFF) << 0x10) | 0xFFFF)) | ((var_a3 & 0x7FF) << 0x34)) & (-1U >> 1)) | ((s64) M2C_FIELD(arg0, s32 *, 4) << 0x3F);
}
