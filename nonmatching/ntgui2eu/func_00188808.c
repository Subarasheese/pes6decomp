/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00188808(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a3;
    s32 temp_a4;
    s32 temp_a6;
    s32 temp_a7;
    s32 temp_t0;
    s32 var_a0;
    s32 var_a3;
    s32 var_a4;
    s32 var_a5;
    s32 var_a7;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_s3;
    s32 var_t1;
    s32 var_t2;
    s32 var_t3;
    s32 var_t8;
    s32 var_t9;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_a1_3;
    void *temp_a1_4;
    void *temp_a1_5;
    void *temp_a1_6;
    void *temp_a1_7;
    void *temp_a1_8;
    void *temp_s4;
    void *temp_v1;

    temp_s4 = arg0 + 0x970;
    temp_a0 = M2C_FIELD(arg0, s32 *, 0x5D4);
    temp_a3 = M2C_FIELD(arg0, s32 *, 0x920);
    temp_a6 = M2C_FIELD(arg0, s32 *, 0x5A0) + temp_a0;
    temp_a7 = M2C_FIELD(temp_s4, s32 *, 0x304);
    temp_a4 = temp_a3 + 3;
    temp_t0 = M2C_FIELD(arg0, s32 *, 0x5A4) + temp_a0;
    if (M2C_FIELD(arg0, s32 *, 0xC78) == 0) {
        temp_a0_2 = temp_a3 * 3;
        var_a0 = temp_t0 + temp_a7;
        var_a4 = temp_a6;
        var_t9 = var_a0;
        var_a7 = var_a4 + temp_a3;
        var_t1 = var_a4 + ((s32) ((temp_a3 > -1) ? temp_a3 : temp_a4) >> 2);
        var_a3 = temp_t0;
        var_t8 = var_a4 + ((s32) ((temp_a0_2 > -1) ? temp_a0_2 : (temp_a0_2 + 3)) >> 2);
        var_s1 = var_t1;
        var_s3 = var_t8;
        var_t3 = var_a7;
        var_t2 = var_a0;
        var_a5 = var_a0;
        var_s2 = var_a3;
        var_s0 = var_a3;
    } else {
        temp_a0_3 = temp_a3 * 3;
        var_a5 = temp_t0;
        var_a7 = temp_a6 + temp_a7;
        var_t3 = temp_a6;
        var_t2 = var_a5 + ((s32) ((temp_a3 > -1) ? temp_a3 : temp_a4) >> 2);
        var_t9 = var_a5 + ((s32) ((temp_a0_3 > -1) ? temp_a0_3 : (temp_a0_3 + 3)) >> 2);
        var_a0 = var_a5 + temp_a3;
        var_t8 = var_a7;
        var_t1 = var_a7;
        var_a4 = var_a7;
        var_s3 = var_t3;
        var_s1 = var_t3;
        var_s0 = var_t2;
        var_s2 = var_t9;
        var_a3 = var_a0;
    }
    temp_v1 = (M2C_FIELD(arg0, s32 *, 0x4EC) * 0x180) + temp_s4;
    temp_a1 = temp_v1 + 0x70;
    M2C_FIELD(temp_a1, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + temp_a6);
    M2C_FIELD(temp_a1, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + temp_t0);
    temp_a1_2 = temp_v1 + 0x90;
    M2C_FIELD(temp_a1_2, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + var_a4);
    M2C_FIELD(temp_a1_2, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + var_a5);
    temp_a1_3 = temp_v1 + 0xB0;
    M2C_FIELD(temp_a1_3, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + var_s1);
    M2C_FIELD(temp_a1_3, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + var_s0);
    temp_a1_4 = temp_v1 + 0xD0;
    M2C_FIELD(temp_a1_4, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + var_t1);
    M2C_FIELD(temp_a1_4, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + var_t2);
    temp_a1_5 = temp_v1 + 0xF0;
    M2C_FIELD(temp_a1_5, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + var_s3);
    M2C_FIELD(temp_a1_5, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + var_s2);
    temp_a1_6 = temp_v1 + 0x110;
    M2C_FIELD(temp_a1_6, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + var_t8);
    M2C_FIELD(temp_a1_6, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + var_t9);
    temp_a1_7 = temp_v1 + 0x130;
    M2C_FIELD(temp_a1_7, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + var_t3);
    M2C_FIELD(temp_a1_7, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + var_a3);
    temp_a1_8 = temp_v1 + 0x150;
    M2C_FIELD(temp_a1_8, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + var_a7);
    M2C_FIELD(temp_a1_8, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + var_a0);
}
