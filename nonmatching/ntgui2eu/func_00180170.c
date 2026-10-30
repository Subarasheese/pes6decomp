/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


f32 func_00165208(s32);                             /* extern */
f32 func_00165280(s32);                             /* extern */
s32 func_0018B318(s32, s64);                        /* extern */
s32 func_0018B6A0(s32);                             /* extern */
s32 func_0018C438(f32);                             /* extern */
f32 func_001A7760(s32, s32, f32, f32);              /* extern */
extern char D_005FE0C0[];

void func_00180170(void *arg0) {
    f32 temp_f20;
    f32 temp_f21;
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_fp;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_s5;
    s32 temp_s6;
    s32 temp_s7;
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_t1;
    void *temp_t1_2;
    void *temp_t1_3;
    void *temp_t1_4;
    void *temp_t1_5;
    void *temp_t1_6;
    void *temp_t1_7;
    void *temp_t1_8;

    temp_s4 = M2C_FIELD(arg0, s32 *, 0x2870);
    temp_s5 = M2C_FIELD(arg0, s32 *, 0x2874);
    temp_s6 = M2C_FIELD(arg0, s32 *, 0x2878);
    temp_s7 = M2C_FIELD(arg0, s32 *, 0x287C);
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x920);
    temp_a0 = temp_s7 - temp_s5;
    temp_a1 = temp_v0 > -1;
    temp_f20 = (f32) ((s32) ((temp_a1 != 0) ? temp_v0 : (temp_v0 + 3)) >> 2);
    temp_f21 = (f32) ((s32) (temp_v0 + ((u32) temp_v0 >> 0x1F)) >> 1);
    temp_v0_2 = func_0018B6A0(func_0018B318(func_0018C438(func_001A7760(temp_a0, temp_a1, (f32) (temp_s4 - temp_s6), (f32) temp_a0) * 32768.0f), (*(s64 *)D_005FE0C0)));
    temp_fp = (s32) (temp_f20 * func_00165280(temp_v0_2));
    temp_s1 = (s32) (temp_f20 * func_00165208(temp_v0_2));
    temp_s0 = (s32) (temp_f21 * func_00165280(temp_v0_2));
    temp_a1_2 = (s32) (temp_f21 * func_00165208(temp_v0_2));
    temp_s3 = arg0 + 0x970 + (M2C_FIELD(arg0, s32 *, 0x4EC) * 0xF80);
    temp_t1 = temp_s3 + 0x70;
    M2C_FIELD(temp_t1, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + (temp_s4 - temp_s0));
    M2C_FIELD(temp_t1, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + (temp_s5 - temp_a1_2));
    temp_t1_2 = temp_s3 + 0x90;
    M2C_FIELD(temp_t1_2, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + (temp_s6 - temp_s0));
    M2C_FIELD(temp_t1_2, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + (temp_s7 - temp_a1_2));
    temp_t1_3 = temp_s3 + 0xB0;
    M2C_FIELD(temp_t1_3, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + (temp_s4 - temp_fp));
    M2C_FIELD(temp_t1_3, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + (temp_s5 - temp_s1));
    temp_t1_4 = temp_s3 + 0xD0;
    M2C_FIELD(temp_t1_4, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + (temp_s6 - temp_fp));
    M2C_FIELD(temp_t1_4, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + (temp_s7 - temp_s1));
    temp_t1_5 = temp_s3 + 0xF0;
    M2C_FIELD(temp_t1_5, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + (temp_s4 + temp_fp));
    M2C_FIELD(temp_t1_5, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + (temp_s5 + temp_s1));
    temp_t1_6 = temp_s3 + 0x110;
    M2C_FIELD(temp_t1_6, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + (temp_s6 + temp_fp));
    M2C_FIELD(temp_t1_6, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + (temp_s7 + temp_s1));
    temp_t1_7 = temp_s3 + 0x130;
    M2C_FIELD(temp_t1_7, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + (temp_s4 + temp_s0));
    M2C_FIELD(temp_t1_7, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + (temp_s5 + temp_a1_2));
    temp_t1_8 = temp_s3 + 0x150;
    M2C_FIELD(temp_t1_8, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + (temp_s6 + temp_s0));
    M2C_FIELD(temp_t1_8, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + (temp_s7 + temp_a1_2));
}
