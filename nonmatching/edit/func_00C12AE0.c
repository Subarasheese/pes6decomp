/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001E6530(void *);
extern s32 func_001E6500(void *);
extern s32 func_001DC900(void *);
M2C_UNK func_001C4730(f32 *, s32, M2C_UNK);         /* extern */
M2C_UNK func_001EEAC0(s32, s32);                    /* extern */
M2C_UNK func_00B90110(s32, M2C_UNK, M2C_UNK, s64, s64); /* extern */
M2C_UNK func_00B90180(s32, s32, s32, s32, s32);     /* extern */
void *func_00C18ED0(s32);                           /* extern */

void func_00C12AE0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    f32 sp70;
    f32 sp74;
    f32 sp78;
    f32 sp7C;
    f32 temp_f1;
    f32 temp_f3;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f1;
    f32 var_f1_2;
    f32 var_f20;
    f32 var_f21;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s8 temp_v1;
    u8 temp_v0_4;
    void *temp_s0;

    temp_v0 = func_001DC900(func_00C18ED0(arg2));
    if (temp_v0 != 0) {
        temp_s0 = M2C_FIELD(((arg2 * 4) + arg1), void **, 0x1C);
        func_001C4730(&sp70, arg3, 0x10);
        func_001EEAC0(arg0, temp_v0);
        temp_v0_2 = func_001E6530((void *) temp_v0);
        if (temp_v0_2 < 0) {
            var_f0 = 2.0f * (f32) (((u32) temp_v0_2 >> 1) | (temp_v0_2 & 1));
        } else {
            var_f0 = (f32) temp_v0_2;
        }
        var_f21 = 1023.0f;
        if (var_f0 <= 1023.0f) {
            var_f21 = 1.0f;
            if (!(var_f0 < 1.0f)) {
                var_f21 = var_f0;
            }
        }
        temp_v0_3 = func_001E6500((void *) temp_v0);
        if (temp_v0_3 < 0) {
            var_f0_2 = 2.0f * (f32) (((u32) temp_v0_3 >> 1) | (temp_v0_3 & 1));
        } else {
            var_f0_2 = (f32) temp_v0_3;
        }
        var_f20 = 1023.0f;
        if (var_f0_2 <= 1023.0f) {
            var_f20 = 1.0f;
            if (!(var_f0_2 < 1.0f)) {
                var_f20 = var_f0_2;
            }
        }
        temp_v0_4 = M2C_FIELD(temp_s0, u8 *, 4);
        if ((s32) temp_v0_4 < 0) {
            var_f1 = 2.0f * (f32) ((temp_v0_4 >> 1) | (temp_v0_4 & 1));
        } else {
            var_f1 = (f32) temp_v0_4;
        }
        temp_f1 = var_f1 / 128.0f;
        temp_f3 = (var_f21 - 1.0f) * temp_f1;
        sp78 = temp_f3;
        sp7C = var_f20 * temp_f1;
        if (arg2 != 3) {
            sp70 += (f32) M2C_FIELD(temp_s0, s8 *, 0);
            sp74 += (f32) M2C_FIELD(temp_s0, s8 *, 1);
        } else {
            temp_v1 = M2C_FIELD(temp_s0, s8 *, 0);
            sp70 += (f32) (temp_v1 - 0x20);
            var_f1_2 = (f32) (0x80 - temp_v1);
            sp74 += (f32) (M2C_FIELD(temp_s0, s8 *, 1) - 0x60);
            if (!(temp_f3 <= var_f1_2)) {

            } else {
                var_f1_2 = 0.0f;
                if (!(temp_f3 < 0.0f)) {
                    var_f1_2 = temp_f3;
                }
            }
            sp78 = var_f1_2;
            if (!(temp_f3 <= 96.0f)) {
                var_f21 *= var_f1_2 / temp_f3;
            }
        }
        func_00B90180(arg0, (s32) sp70, (s32) sp74, (s32) sp78, (s32) sp7C);
        func_00B90110(arg0, 0, 0, (s64) ((s64) (s32) var_f21 << 0x30) >> 0x30, (s64) ((s64) (s32) var_f20 << 0x30) >> 0x30);
    }
}
