/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002C7150(void *arg0, s32 *arg1) {
    s32 temp_a0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_v0;
    s32 var_v0_2;
    u32 temp_a0_2;

    temp_v1 = (M2C_FIELD(arg0, u8 *, 4) & 0x7F) + 1;
    var_v0_2 = temp_v1 >> 1;
    if (temp_v1 < 0) {
        var_v0_2 = (s32) (temp_v1 + 1) >> 1;
    }
    temp_a0 = var_v0_2 + ((M2C_FIELD(arg0, u8 *, 2) & 0x7F) + 2 + (M2C_FIELD(arg0, u8 *, 0x19) & 0x7F));
    temp_a0_2 = (u32) (temp_a0 * 0x12C) >> 0x1F;
    var_v0 = ((temp_a0 * 0x12C) / 250) + temp_a0_2;
    temp_v1_2 = ((temp_a0 * 0x12C) / 250) + temp_a0_2;
    if (var_v0 < temp_v1_2) {
        var_v0 = temp_v1_2;
    }
    *arg1 += 0x12C;
    return var_v0;
}
