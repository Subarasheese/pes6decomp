/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


f32 func_00165208(s32, s32);                        /* extern */
f32 func_00165280(s32, s32);                        /* extern */

void func_00184D38(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, void *arg6) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_lo;
    s32 temp_s5;
    s32 var_a0;
    s32 var_a1;
    s32 var_s4;
    s32 var_s7;
    void *temp_s2;
    void *temp_s2_2;
    void *var_s2;

    sp0 = arg5;
    if (arg1 != 1) {
        if (arg1 < 2) {
            goto block_10;
        }
        if (arg1 != 2) {
            var_s4 = 1;
            if (arg1 != 3) {
block_10:
                sp4 = -1;
                var_s4 = -1;
                var_a0 = M2C_FIELD(arg0, s32 *, 0x5ED4) == 0;
            } else {
                sp4 = 1;
                var_a0 = (M2C_FIELD(arg0, s32 *, 0x5ED8) != 0) ? 0 : 1;
            }
        } else {
            var_s4 = 1;
            sp4 = -1;
            var_a0 = (M2C_FIELD(arg0, s32 *, 0x5ED8) != 0) ? 0 : 1;
        }
    } else {
        var_s4 = -1;
        sp4 = 1;
        var_a0 = (M2C_FIELD(arg0, s32 *, 0x5ED4) != 0) ? 0 : sp4;
    }
    if (var_a0 != 0) {
        temp_a0 = M2C_FIELD(arg0, s32 *, 0x5ED0);
        var_a0 = (s32) ((temp_a0 > -1) ? temp_a0 : (temp_a0 + 3)) >> 2;
    }
    var_s7 = 0;
    temp_a0_2 = sp0 + var_a0;
    var_a1 = arg4 * 2;
    sp8 = temp_a0_2;
    temp_a0_3 = (var_s4 * temp_a0_2) + arg3;
    M2C_FIELD(arg6, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + ((sp4 * arg4) + arg2));
    M2C_FIELD(arg6, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + temp_a0_3);
    temp_s2 = arg6 + 0x20;
    M2C_FIELD(temp_s2, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + arg2);
    M2C_FIELD(temp_s2, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + temp_a0_3);
    temp_s2_2 = temp_s2 + 0x20;
    M2C_FIELD(temp_s2_2, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + arg2);
    temp_s5 = (sp4 * var_a1) + arg2;
    M2C_FIELD(temp_s2_2, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + arg3);
    var_s2 = temp_s2_2 + 0x20;
    do {
        temp_lo = (s32) (var_s7 << 0xE) / 7;
        var_s7 += 1;
        M2C_FIELD(var_s2, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + (temp_s5 - (sp4 * (s32) ((f32) arg4 * func_00165280(temp_lo, var_a1)))));
        var_a1 = var_s4 * (s32) ((f32) sp0 * func_00165208(temp_lo, sp4));
        M2C_FIELD(var_s2, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + (var_a1 + arg3));
        var_s2 += 0x20;
    } while (var_s7 < 8);
    M2C_FIELD(var_s2, u16 *, 0x10) = (u16) M2C_FIELD(var_s2, u16 *, -0x10);
    M2C_FIELD(var_s2, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + ((var_s4 * sp8) + arg3));
}
