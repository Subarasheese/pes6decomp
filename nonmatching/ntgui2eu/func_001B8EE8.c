/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001B8EE8(s64 arg0, s32 arg1) {
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 var_a1;
    s64 temp_a0;
    s64 var_v0;

    temp_a0 = ((arg0 >> 0x20) & 0x7FF00000) + 0xFCC00000;
    if (temp_a0 > 0) {
        var_a1 = ((arg1 & (0xFFFF0000U >> 0x20)) | (temp_a0 << 0x20)) & (-1 << 0x20);
    } else {
        temp_a0_2 = (s64) -temp_a0 >> 0x14;
        if (temp_a0_2 >= 0x14) {
            temp_a0_3 = temp_a0_2 - 0x14;
            if (temp_a0_3 < 0x1F) {
                var_v0 = 1 << ~temp_a0_3;
            } else {
                var_v0 = 1;
            }
            var_a1 = (arg1 & (0xFFFF0000U >> 0x20) & (-1 << 0x20)) | ((u64) (var_v0 << 0x20) >> 0x20);
        } else {
            var_a1 = ((arg1 & (0xFFFF0000U >> 0x20)) | ((s64) (0x80000 >> temp_a0_2) << 0x20)) & (-1 << 0x20);
        }
    }
    return var_a1;
}
