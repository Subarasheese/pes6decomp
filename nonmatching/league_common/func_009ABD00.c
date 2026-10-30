/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003E77B4;

s32 func_009ABD00(s32 arg0, s32 *arg1, s32 *arg2) {
    f32 temp_f2;
    f32 var_f0;
    f32 var_f0_2;
    s32 temp_a0;
    s32 temp_f1;
    u8 temp_a3;
    void *temp_v0;

    temp_v0 = ((arg0 & 0xFF) * 0xC) + D_003E77B4;
    temp_a3 = M2C_FIELD(temp_v0, u8 *, 0x4BAA);
    temp_a0 = (M2C_FIELD(temp_v0, u8 *, 0x4BAB) + (temp_a3 + M2C_FIELD(temp_v0, u8 *, 0x4BAC))) & 0xFF;
    if (temp_a0 != 0) {
        if ((s32) temp_a3 < 0) {
            var_f0 = 2.0f * (f32) ((temp_a3 >> 1) | (temp_a3 & 1));
        } else {
            var_f0 = (f32) temp_a3;
        }
        if (temp_a0 >= 0) {
            var_f0_2 = (f32) temp_a0;
        } else {
            var_f0_2 = 2.0f * (f32) (((u32) temp_a0 >> 1) | (temp_a0 & 1));
        }
        temp_f2 = (100.0f * var_f0) / var_f0_2;
        temp_f1 = (s32) temp_f2;
        if (arg1 != NULL) {
            *arg1 = temp_f1;
        }
        if (arg2 != NULL) {
            *arg2 = (s32) (100.0f * (temp_f2 - (f32) temp_f1));
        }
        return 1;
    }
    if (arg1 != NULL) {
        *arg1 = 0;
    }
    if (arg2 == NULL) {
        return 0;
    }
    *arg2 = 0;
    return 0;
}
