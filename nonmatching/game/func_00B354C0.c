/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009B3070(s32, s32);
extern s32 func_009B3480(void *, f32, f32);
extern s32 func_009B3220(s32, s32, s32);
extern s32 func_009B33A0(void *, s32, s32);
f32 func_001CD9E0(f32);                             /* extern */
s32 func_00B35790(void **, s32);                    /* extern */
s32 func_00BBB990(s32, s32);                        /* extern */
s32 func_00BBB9C0(s32, s32);                        /* extern */

void func_00B354C0(void **arg0, f32 fparg0, f32 fparg1) {
    f32 var_f12;
    s32 temp_a1_2;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_v0;
    s32 var_s2;
    s32 var_s6;
    s32 var_v0;
    u8 temp_s0;
    void *temp_a0;
    void *temp_a1;
    void *temp_s0_2;
    void *temp_s0_3;

    temp_v0 = func_009B33A0(*arg0, (s32) fparg0, (s32) fparg1);
    if (temp_v0 < 0) {
        var_f12 = 2.0f * (f32) (((u32) temp_v0 >> 1) | (temp_v0 & 1));
    } else {
        var_f12 = (f32) temp_v0;
    }
    temp_s4 = (s32) func_001CD9E0(var_f12);
    temp_s3 = func_009B3480(*arg0, fparg0, fparg1) & 0xFFFF;
    var_s6 = 0;
    var_s2 = 0;
    temp_s1 = (M2C_FIELD(*arg0, u8 *, 0x13) ^ 1) * 0xB;
loop_6:
    temp_a1 = *arg0;
    temp_s0 = M2C_FIELD((temp_s1 + temp_a1 + var_s2), u8 *, 0x1B4);
    if ((temp_s0 != 0xFF) && ((u32) M2C_FIELD((temp_a1 + (temp_s0 * 4)), u32 *, 0x158) < 0x900000U)) {
        if ((func_009B3070(temp_s3, (s32) M2C_FIELD((temp_a1 + (temp_s0 * 2)), u16 *, 0x128)) & 0xFFFF) < 0x800) {
            var_s6 = temp_s0 & 0xFF;
        } else {
            var_s2 += 1;
            if (var_s2 < 0xB) {
                goto loop_6;
            }
        }
    }
    temp_a1_2 = var_s6 & 0xFF;
    if (temp_a1_2 == 0) {
        var_v0 = func_009B3220(temp_s3, (s32) M2C_FIELD(*arg0, u16 *, 0x26), 0x100);
    } else {
        temp_a0 = *arg0;
        var_v0 = func_009B3220((M2C_FIELD(temp_a0, u16 *, 0x28) + (((func_00B35790(arg0, temp_a1_2) & 0xFF) ? -1 : 1) << 8)) & 0xFFFF, (s32) M2C_FIELD(temp_a0, u16 *, 0x26), 0x100);
    }
    temp_s1_2 = var_v0 & 0xFFFF;
    temp_s0_2 = *arg0;
    M2C_FIELD(temp_s0_2, f32 *, 0x6C) = (f32) (M2C_FIELD(temp_s0_2, f32 *, 0xE0) + (f32) func_00BBB990(temp_s1_2, temp_s4));
    temp_s0_3 = *arg0;
    M2C_FIELD(temp_s0_3, f32 *, 0x70) = (f32) (M2C_FIELD(temp_s0_3, f32 *, 0xE8) + (f32) func_00BBB9C0(temp_s1_2, temp_s4));
}
