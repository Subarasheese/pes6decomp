/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002C6C00(void *arg0, s32 *arg1) {
    s32 temp_v1;
    s32 var_v0;

    temp_v1 = ((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x24) << 0x38) >> 0x3A) + 0x8F;
    var_v0 = temp_v1 >> 1;
    if (temp_v1 < 0) {
        var_v0 = (s32) (temp_v1 + 1) >> 1;
    }
    *arg1 += 0x14A;
    return ((((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x13) << 0x38) >> 0x3F) + ((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x12) << 0x38) >> 0x3F)) * 0xF) + 2 + (M2C_FIELD(arg0, u8 *, 0x16) & 0x7F) + var_v0 + (M2C_FIELD(arg0, u8 *, 0x15) & 0x7F);
}
