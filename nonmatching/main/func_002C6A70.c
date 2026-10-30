/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002C6A70(void *arg0, s32 *arg1) {
    s32 temp_a2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_v0;
    s32 var_v0_2;

    temp_v1 = (M2C_FIELD(arg0, u8 *, 9) & 0x7F) + 1;
    var_v0_2 = temp_v1 >> 1;
    if (temp_v1 < 0) {
        var_v0_2 = (s32) (temp_v1 + 1) >> 1;
    }
    temp_a2 = var_v0_2 + ((M2C_FIELD(arg0, u8 *, 2) & 0x7F) + 2 + (M2C_FIELD(arg0, u8 *, 0x18) & 0x7F));
    temp_v1_2 = (M2C_FIELD(arg0, u8 *, 0xC) & 0x7F) + 1;
    var_v0 = temp_v1_2 >> 1;
    if (temp_v1_2 < 0) {
        var_v0 = (s32) (temp_v1_2 + 1) >> 1;
    }
    *arg1 += 0xFA;
    return ((var_v0 + temp_a2) / 3) + ((u32) (var_v0 + temp_a2) >> 0x1F) + ((((M2C_FIELD(arg0, u8 *, 0x1E) & 1) + ((u64) ((s64) M2C_FIELD(arg0, u8 *, 0xF) << 0x38) >> 0x3F)) * 0xA) + (((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x18) << 0x38) >> 0x3F) * 0x1E) + 1 + (M2C_FIELD(arg0, u8 *, 4) & 0x7F));
}
