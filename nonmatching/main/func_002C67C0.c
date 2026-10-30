/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002C67C0(void *arg0, s32 *arg1) {
    s32 temp_a4;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_v0;
    u8 temp_a7;

    temp_a7 = M2C_FIELD(arg0, u8 *, 0x1E);
    temp_v1_2 = (M2C_FIELD(arg0, u8 *, 7) & 0x7F) + 1;
    var_v0 = temp_v1_2 >> 1;
    if (temp_v1_2 < 0) {
        var_v0 = (s32) (temp_v1_2 + 1) >> 1;
    }
    temp_v1 = ((((u64) ((s64) temp_a7 << 0x39) >> 0x3F) + ((u64) ((s64) temp_a7 << 0x38) >> 0x3F) + ((u64) ((s64) temp_a7 << 0x3A) >> 0x3F)) * 0x19) + (M2C_FIELD(arg0, u8 *, 8) & 0x7F) + 3 + (M2C_FIELD(arg0, u8 *, 3) & 0x7F) + (M2C_FIELD(arg0, u8 *, 0x16) & 0x7F) + var_v0;
    temp_a4 = (M2C_FIELD(arg0, u8 *, 0x1B) & 0x7F) + 1;
    *arg1 += 0x339;
    return ((temp_v1 * temp_a4) / 100) + ((u32) (temp_v1 * temp_a4) >> 0x1F) + (((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x24) << 0x38) >> 0x3A) + (temp_a4 * 2) + 0x8F);
}
