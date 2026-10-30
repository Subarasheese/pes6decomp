/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001A5880();                                /* extern */

s64 func_001A5F28(u32 arg0) {
    s32 temp_s1;
    s64 var_s0;

    temp_s1 = (arg0 >> 0xA) << 6;
    if ((s32) arg0 >= 0) {
        if ((arg0 & 0x3FF) == M2C_FIELD(temp_s1, s32 *, 8)) {
            var_s0 = M2C_FIELD(temp_s1, s64 *, 0x18);
            if (M2C_FIELD(temp_s1, s32 *, 0xC) & 1) {
                var_s0 += func_001A5880() - M2C_FIELD(temp_s1, s64 *, 0x10);
            }
            return var_s0;
        }
        goto block_4;
    }
block_4:
    return -1;
}
