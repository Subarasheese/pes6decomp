/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001AD298(void *arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_a0;
    s32 var_a3;
    u32 temp_v1;
    u64 var_a1;

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
            temp_a0 = M2C_FIELD(arg0, s32 *, 8);
            if (temp_a0 < -0x3FE) {
                var_a1 = 0;
            } else if (temp_a0 < 0x400) {
                var_a3 = temp_a0 + 0x3FF;
                var_a1 = var_a1 >> 8;
            } else {
                goto block_14;
            }
        }
    } else {
block_14:
        var_a3 = 0x7FF;
        var_a1 = 0;
    }
    return (((((arg2 & (0xFFF0 << 0x30)) | (var_a1 & (-1U >> 0xC))) & ((((0x800FFFFF << 0x10) | 0xFFFF) << 0x10) | 0xFFFF)) | ((var_a3 & 0x7FF) << 0x34)) & (-1U >> 1)) | ((s64) M2C_FIELD(arg0, s32 *, 4) << 0x3F);
}
