/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


f32 func_00165208(s32);                             /* extern */
f32 func_00165280(s32);                             /* extern */

void func_0017D970(void *arg0) {
    f32 temp_f20;
    f32 temp_f21;
    s32 temp_a2;
    s32 temp_s0;
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_s6;
    s32 temp_s7;
    s32 var_s5;
    void *temp_a0;
    void *temp_s2;
    void *var_s2;

    var_s5 = 0;
    temp_a2 = M2C_FIELD(arg0, s32 *, 0x5D4);
    temp_s6 = (s32) M2C_FIELD(arg0, s32 *, 0x5B0) >> 1;
    temp_a0 = (M2C_FIELD(arg0, s32 *, 0x4EC) * 0x480) + arg0 + 0x920;
    temp_s2 = temp_a0 + 0x70;
    temp_s7 = (s32) M2C_FIELD(arg0, s32 *, 0x5AC) >> 1;
    temp_s4 = M2C_FIELD(arg0, s32 *, 0x5A0) + temp_a2 + temp_s7;
    M2C_FIELD(temp_s2, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + temp_s4);
    temp_s3 = M2C_FIELD(arg0, s32 *, 0x5A4) + temp_a2 + temp_s6;
    M2C_FIELD(temp_s2, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + temp_s3);
    var_s2 = temp_a0 + 0x90;
    do {
        temp_f20 = (f32) temp_s7;
        temp_s0 = var_s5 * 0x888;
        temp_f21 = (f32) temp_s6;
        var_s5 += 1;
        M2C_FIELD(var_s2, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + (temp_s4 + (s32) (temp_f20 * func_00165280(temp_s0))));
        M2C_FIELD(var_s2, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + (temp_s3 + (s32) (temp_f21 * func_00165208(temp_s0))));
        var_s2 += 0x20;
    } while (var_s5 < 0x1E);
    M2C_FIELD(var_s2, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + (temp_s4 + (s32) (temp_f20 * func_00165280(0))));
    M2C_FIELD(var_s2, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + (temp_s3 + (s32) (temp_f21 * func_00165208(0))));
}
