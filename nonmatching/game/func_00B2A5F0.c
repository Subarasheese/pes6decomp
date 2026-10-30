/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B2A6E0(void **, s32);                /* extern */

void func_00B2A5F0(void **arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, s32 arg4) {
    f32 temp_f1;
    f32 var_f0;
    f32 var_f0_2;
    s32 temp_s1;
    s32 var_v1;
    void *temp_v0;

    temp_v0 = M2C_FIELD(*arg0, void **, 4);
    temp_f1 = M2C_FIELD(temp_v0, f32 *, 0x38);
    if (!(temp_f1 >= 2.1474836e9f)) {
        var_v1 = (s32) temp_f1;
    } else {
        var_v1 = (s32) (temp_f1 - 2.1474836e9f) | 0x80000000;
    }
    temp_s1 = var_v1 & 0xFFFF & 0xFFFF;
    if (arg3 >= 0) {
        var_f0 = (f32) arg3;
    } else {
        var_f0 = 2.0f * (f32) (((u32) arg3 >> 1) | (arg3 & 1));
    }
    M2C_FIELD(temp_v0, f32 *, 0x38) = var_f0;
    func_00B2A6E0(arg0, arg4);
    if (temp_s1 < 0) {
        var_f0_2 = 2.0f * (f32) (((u32) temp_s1 >> 1) | (temp_s1 & 1));
    } else {
        var_f0_2 = (f32) temp_s1;
    }
    M2C_FIELD(M2C_FIELD(*arg0, void **, 4), f32 *, 0x38) = var_f0_2;
}
