/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001A4728();                                /* extern */
M2C_UNK func_001A4778();                            /* extern */
s64 func_001A5880();                                /* extern */
extern char D_005CBB98[];

s64 func_001A5DC0(u32 arg0, s64 arg1) {
    s32 temp_s0;
    s32 temp_s3;
    s32 temp_v1;
    s64 temp_v0;
    s64 var_s1;
    s64 var_v0;

    temp_s0 = (arg0 >> 0xA) << 6;
    temp_s3 = func_001A4728();
    if (((s32) arg0 >= 0) && ((arg0 & 0x3FF) == M2C_FIELD(temp_s0, s32 *, 8))) {
        if (M2C_FIELD(((void *)D_005CBB98), s32 *, 0x1C) != arg0) {
            var_s1 = M2C_FIELD(temp_s0, s64 *, 0x18);
            if (M2C_FIELD(temp_s0, s32 *, 0xC) & 1) {
                temp_v0 = func_001A5880();
                M2C_FIELD(temp_s0, s64 *, 0x18) = arg1;
                temp_v1 = temp_v0 - M2C_FIELD(temp_s0, s64 *, 0x10);
                M2C_FIELD(temp_s0, s64 *, 0x10) = temp_v0;
                var_s1 += temp_v1;
            } else {
                M2C_FIELD(temp_s0, s64 *, 0x18) = arg1;
            }
            var_v0 = var_s1;
            if (temp_s3 != 0) {
                func_001A4778();
                var_v0 = var_s1;
            }
            /* Duplicate return node #12. Try simplifying control flow for better match */
            return var_v0;
        }
        goto block_5;
    }
block_5:
    var_v0 = -1;
    if (temp_s3 != 0) {
        func_001A4778();
        return -1;
    }
    return var_v0;
}
