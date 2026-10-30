/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


f32 func_00165208(s32);                             /* extern */
f32 func_00165280(s32);                             /* extern */
s32 func_0018B318(s32, s64);                        /* extern */
s32 func_0018B6A0(s32);                             /* extern */
s32 func_0018C438(f32);                             /* extern */
f32 func_001A7760(s32, s32, M2C_UNK, f32, f32);     /* extern */
extern char D_005FE0C8[];

void func_001803F8(void *arg0) {
    s32 sp0;
    s32 sp4;
    s32 sp8;
    s32 spC;
    s32 sp10;
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f20;
    f32 temp_f2;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_f1_2;
    s32 temp_f1_3;
    s32 temp_f3;
    s32 temp_f4;
    s32 temp_lo;
    s32 temp_s0_2;
    s32 temp_s5;
    s32 temp_s6;
    s32 temp_s7;
    s32 temp_v0;
    void *temp_s0;
    void *temp_s2;
    void *temp_s3;
    void *temp_v1;
    void *var_fp;
    void *var_s2;
    void *var_s3;
    void *var_s4;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x2874);
    temp_s6 = M2C_FIELD(arg0, s32 *, 0x2870);
    sp0 = temp_v0;
    sp10 = 0;
    temp_s5 = M2C_FIELD(arg0, s32 *, 0x2878);
    temp_s7 = M2C_FIELD(arg0, s32 *, 0x287C);
    temp_a0 = M2C_FIELD(arg0, s32 *, 0x920);
    temp_a1 = temp_a0 > -1;
    temp_s0 = arg0 + ((M2C_FIELD(arg0, s32 *, 0x4EC) * 0xF80) + 0x970);
    sp4 = (s32) ((temp_a1 != 0) ? temp_a0 : (temp_a0 + 3)) >> 2;
    temp_s3 = temp_s0 + 0x180;
    sp8 = (s32) (temp_a0 + ((u32) temp_a0 >> 0x1F)) >> 1;
    temp_s2 = temp_s0 + 0x880;
    var_s4 = temp_s0 + 0xB10;
    var_fp = temp_s0 + 0x3F0;
    spC = func_0018B6A0(func_0018B318(func_0018C438(func_001A7760(temp_a0, temp_a1, 0xF80, (f32) (temp_s6 - temp_s5), (f32) (temp_s7 - temp_v0)) * 32768.0f), (*(s64 *)D_005FE0C8)));
    M2C_FIELD(temp_s3, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + temp_s6);
    M2C_FIELD(temp_s3, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + sp0);
    var_s3 = temp_s0 + 0x1A0;
    M2C_FIELD(temp_s2, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + temp_s5);
    M2C_FIELD(temp_s2, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + temp_s7);
    var_s2 = temp_s0 + 0x8A0;
    do {
        temp_lo = (s32) (sp10 << 0xF) / 17;
        temp_a0_2 = sp10 + 1;
        sp10 = temp_a0_2;
        temp_s0_2 = spC + temp_lo;
        temp_f20 = func_00165208(temp_s0_2);
        temp_f0 = func_00165280(temp_s0_2);
        temp_f1 = (f32) sp4;
        temp_f2 = (f32) sp8;
        temp_v1 = var_fp + 0x20;
        var_fp += 0x40;
        temp_f4 = (s32) (temp_f1 * temp_f0);
        temp_f3 = (s32) (temp_f1 * temp_f20);
        M2C_FIELD(var_s3, s16 *, 0x10) = (s16) ((M2C_FIELD(arg0, u16 *, 0x4DC) + temp_s6) - temp_f4);
        temp_a1_2 = temp_s7 + temp_f3;
        temp_a0_3 = sp0 - temp_f3;
        temp_f1_2 = (s32) (temp_f2 * temp_f20);
        M2C_FIELD(var_s3, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + temp_a0_3);
        var_s3 += 0x20;
        M2C_FIELD(var_s2, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + temp_s5 + temp_f4);
        M2C_FIELD(var_s2, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + temp_a1_2);
        var_s2 += 0x20;
        M2C_FIELD(temp_v1, s16 *, -0x10) = (s16) ((M2C_FIELD(arg0, u16 *, 0x4DC) + temp_s6) - temp_f4);
        M2C_FIELD(temp_v1, s16 *, -0xE) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + temp_a0_3);
        M2C_FIELD(var_s4, s16 *, -0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + temp_s5 + temp_f4);
        temp_f1_3 = (s32) (temp_f2 * temp_f0);
        M2C_FIELD(var_s4, s16 *, -0xE) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + temp_a1_2);
        M2C_FIELD(temp_v1, s16 *, 0x10) = (s16) ((M2C_FIELD(arg0, u16 *, 0x4DC) + temp_s6) - temp_f1_3);
        M2C_FIELD(temp_v1, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + (sp0 - temp_f1_2));
        M2C_FIELD(var_s4, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + temp_s5 + temp_f1_3);
        M2C_FIELD(var_s4, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + (temp_s7 + temp_f1_2));
        var_s4 += 0x40;
    } while (temp_a0_2 < 0x12);
}
