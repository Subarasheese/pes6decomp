/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0024E920(s32 arg0, void *arg1, s32 arg2, void *arg3) {
    s32 temp_a0;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_v0;
    s32 var_v0_2;

    temp_v1 = arg2 & 0xFFFF;
    temp_v0 = arg0 & 0xFFFF;
    if (temp_v0 == temp_v1) {
        return 0;
    }
    if (temp_v0 == 0) {
        return 0;
    }
    if (temp_v1 == 0) {
        return 0;
    }
    if (arg1 == NULL) {
        return 0;
    }
    if (arg3 != NULL) {
        temp_v1_2 = (M2C_FIELD(arg1, u8 *, 0x17) & 0x7F) + (M2C_FIELD(arg3, u8 *, 0x17) & 0x7F);
        var_v0_2 = temp_v1_2 >> 1;
        if (temp_v1_2 < 0) {
            var_v0_2 = (s32) (temp_v1_2 + 1) >> 1;
        }
        var_v0 = var_v0_2 & 0xFF;
        if ((M2C_FIELD(arg1, u16 *, 0x3C) & 0x1FF) == (M2C_FIELD(arg3, u16 *, 0x3C) & 0x1FF)) {
            temp_a0 = var_v0 & 0xFF;
            var_v0 = (((temp_a0 * 0x69) / 100) + ((u32) (temp_a0 * 0x69) >> 0x1F)) & 0xFF;
        }
        if ((var_v0 & 0xFF) >= 0x64) {
            var_v0 = 0x63;
        }
        return var_v0;
    }
    return 0;
}
