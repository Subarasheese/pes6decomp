/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009B3070(s32, s32);
void func_00B340A0(void *arg0, s32 arg1, s32 arg2) {
    f32 temp_f1;
    f32 var_f3;
    s16 temp_v1;
    s32 temp_a0_2;
    s32 temp_f0;
    s32 temp_v0;
    s32 var_v0;
    s32 var_v1;
    void *temp_a0;

    var_v0 = 0;
    temp_f0 = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 4), f32 *, 0x38);
    if ((arg1 < temp_f0) && (arg2 >= temp_f0)) {
        temp_v0 = func_009B3070((s32) M2C_FIELD(arg0, u16 *, 0x26), (s32) M2C_FIELD(arg0, u16 *, 0x2C)) & 0xFFFF;
        temp_a0 = M2C_FIELD(arg0, void **, 4);
        if (temp_v0 >= 0) {
            var_f3 = (f32) temp_v0;
        } else {
            var_f3 = 2.0f * (f32) (((u32) temp_v0 >> 1) | (temp_v0 & 1));
        }
        temp_f1 = (var_f3 * M2C_FIELD(temp_a0, f32 *, 0x28)) / (f32) ((arg2 + 1) - temp_f0);
        if (temp_f1 >= 2.1474836e9f) {
            var_v1 = (s32) (temp_f1 - 2.1474836e9f) | 0x80000000;
        } else {
            var_v1 = (s32) temp_f1;
        }
        var_v0 = (var_v1 & 0xFFFF & 0xFFFF) * ((M2C_FIELD(temp_a0, u8 *, 0x2D) != 0) ? -1 : 1);
    }
    if (var_v0 == 0) {
        M2C_FIELD(arg0, s16 *, 0x38) = 0;
        return;
    }
    temp_a0_2 = var_v0 + 0x10000;
    temp_v1 = temp_a0_2 & 0xFFFF;
    if ((temp_a0_2 < 0) && (temp_v1 != 0)) {

    }
    M2C_FIELD(arg0, s16 *, 0x38) = temp_v1;
}
