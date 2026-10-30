/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00208330(s32);
s32 func_00B2ABD0(void **arg0, s32 arg1, s32 arg2) {
    f32 temp_f1;
    f32 temp_f2;
    f32 var_f3;
    f32 var_f3_2;
    s32 temp_f0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s0;
    s32 var_v1;
    u16 temp_v1;
    void *temp_a0;
    void *temp_a2;

    temp_a2 = M2C_FIELD(*arg0, void **, 4);
    temp_a0 = M2C_FIELD(temp_a2, void **, 4);
    temp_v1 = M2C_FIELD(temp_a0, u16 *, 0x1A);
    var_s0 = 0;
    if ((temp_v1 != 0) && (M2C_FIELD(temp_a0, u8 *, 0xD) & 1)) {
        var_f3 = 0.0f;
        temp_f1 = (f32) arg2;
        if (temp_f1 > 0.0f) {
            do {
                temp_v0 = (s32) var_f3;
                var_f3 += M2C_FIELD(temp_a2, f32 *, 0x28);
                var_s0 += M2C_FIELD((temp_a0 + (temp_v1 & 0xFFFF) + (temp_v0 * 4)), u16 *, 2);
            } while (var_f3 < temp_f1);
        }
    } else {
        temp_v0_2 = func_00208330(arg1);
        var_f3_2 = 0.0f;
        temp_f2 = (f32) arg2;
        if (temp_f2 > 0.0f) {
            do {
                temp_f0 = (s32) (1.0f + var_f3_2);
                var_v1 = temp_f0 >> 1;
                if (temp_f0 < 0) {
                    var_v1 = (s32) (temp_f0 + 1) >> 1;
                }
                var_f3_2 += M2C_FIELD(M2C_FIELD(*arg0, void **, 4), f32 *, 0x28);
                var_s0 += M2C_FIELD((temp_v0_2 + (var_v1 * 2)), u8 *, 1);
            } while (var_f3_2 < temp_f2);
        }
    }
    return var_s0;
}
