/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002C69C0(void *arg0, s32 *arg1) {
    s32 temp_v1_2;
    s32 var_v0;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 0x1E);
    temp_v1_2 = ((M2C_FIELD(arg0, u8 *, 4) & 0x7F) + 1) * 3;
    var_v0 = temp_v1_2 >> 1;
    if (temp_v1_2 < 0) {
        var_v0 = (s32) (temp_v1_2 + 1) >> 1;
    }
    *arg1 += 0x1E0;
    return ((((u64) ((s64) temp_v1 << 0x3B) >> 0x3F) + ((u64) ((s64) temp_v1 << 0x3C) >> 0x3F)) * 0xF) + 1 + var_v0 + (((M2C_FIELD(arg0, u8 *, 3) & 0x7F) + 1) * 2) + (M2C_FIELD(arg0, u8 *, 8) & 0x7F);
}
