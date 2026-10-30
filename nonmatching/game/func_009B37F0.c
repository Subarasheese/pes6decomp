/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


f32 func_0011D138(void *, s32, f32);                /* extern */
f32 func_0011D468(f32);                             /* extern */
s32 func_00BBB990(u16, s32);                        /* extern */
s32 func_00BBB9C0(u16, s32);                        /* extern */
extern char D_00591BEC[];

void func_009B37F0(void *arg0) {
    f32 var_f0;
    f32 var_f2;
    f32 var_f2_2;
    s32 temp_a1;
    u16 temp_v0;
    u16 temp_v0_2;
    void *temp_a0;
    void *temp_v1;

    temp_a0 = M2C_FIELD(arg0, void **, 4);
    if (M2C_FIELD(temp_a0, u8 *, 0x2C) != 0) {
        temp_a1 = M2C_FIELD(arg0, s32 *, 0x1C);
        if (temp_a1 != 0) {
            temp_v1 = M2C_FIELD(temp_a0, void **, 4);
            if ((M2C_FIELD(temp_v1, u16 *, 0x1A) != 0) && (M2C_FIELD(temp_v1, u8 *, 0xD) & 1)) {
                temp_v0 = M2C_FIELD(arg0, u16 *, 0x28);
                if ((s32) temp_v0 >= 0) {
                    var_f2 = (f32) temp_v0;
                } else {
                    var_f2 = 2.0f * (f32) ((temp_v0 >> 1) | (temp_v0 & 1));
                }
                M2C_FIELD(arg0, f32 *, 0xF0) = (f32) (((f32) M2C_FIELD(arg0, s32 *, 0x1C) * func_0011D138(temp_a0, temp_a1, (3.1415927f * var_f2) / 32768.0f)) / (*(f32 *)D_00591BEC));
                temp_v0_2 = M2C_FIELD(arg0, u16 *, 0x28);
                if ((s32) temp_v0_2 >= 0) {
                    var_f2_2 = (f32) temp_v0_2;
                } else {
                    var_f2_2 = 2.0f * (f32) ((temp_v0_2 >> 1) | (temp_v0_2 & 1));
                }
                var_f0 = -(((f32) M2C_FIELD(arg0, s32 *, 0x1C) * func_0011D468((3.1415927f * var_f2_2) / 32768.0f)) / (*(f32 *)D_00591BEC));
            } else {
                M2C_FIELD(arg0, f32 *, 0xF0) = (f32) ((f32) func_00BBB990(M2C_FIELD(arg0, u16 *, 0x28), temp_a1) / (*(f32 *)D_00591BEC));
                var_f0 = (f32) func_00BBB9C0(M2C_FIELD(arg0, u16 *, 0x28), M2C_FIELD(arg0, s32 *, 0x1C)) / (*(f32 *)D_00591BEC);
            }
            M2C_FIELD(arg0, f32 *, 0xF8) = var_f0;
            M2C_FIELD(arg0, f32 *, 0xE0) = (f32) (M2C_FIELD(arg0, f32 *, 0xE0) + M2C_FIELD(arg0, f32 *, 0xF0));
            M2C_FIELD(arg0, f32 *, 0xE8) = (f32) (M2C_FIELD(arg0, f32 *, 0xE8) + M2C_FIELD(arg0, f32 *, 0xF8));
        } else {
            M2C_FIELD(arg0, f32 *, 0xF0) = 0.0f;
            M2C_FIELD(arg0, f32 *, 0xF8) = 0.0f;
        }
    }
}
