/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s16 func_0018ED60(s32);
extern s16 func_0018ED90(s32);
void func_0011EE00(s32 arg0, s32 arg1, void *arg2, s32 arg3, s32 arg4, s32 arg5, f32 fparg0) {
    s16 temp_v0;
    s32 temp_s0;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 temp_s4;
    s32 temp_s4_2;
    s32 temp_s5;
    s32 temp_s6;
    s32 temp_v0_3;
    void *temp_a1;
    void *temp_a1_2;
    void *temp_v0_2;
    void *temp_v0_4;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;

    temp_s6 = arg5 * 0xC;
    temp_s4 = (arg3 + 0x800) - (func_0018ED60(arg1) >> 1);
    temp_s4_2 = temp_s4 * 0x10;
    temp_s3 = (arg4 + 0x800) - (func_0018ED90(arg1) >> 1);
    temp_s3_2 = temp_s3 * 0x10;
    temp_s5 = (s32) ((f32) func_0018ED60(arg1) * fparg0);
    temp_v0 = func_0018ED90(arg1);
    M2C_FIELD(arg2, s32 *, 0xC) = 0x50000007;
    M2C_FIELD(arg2, s32 *, 0) = 0x60000007;
    temp_a1 = arg2 + 0x10;
    M2C_FIELD(arg2, s32 *, 8) = 0;
    M2C_FIELD(arg2, s32 *, 4) = 0;
    M2C_FIELD(temp_a1, s32 *, 4) = 0x60000000;
    M2C_FIELD(temp_a1, s32 *, 8) = 0x535310;
    temp_v1 = arg2 + 0x20;
    M2C_FIELD(temp_a1, s32 *, 0xC) = 0;
    M2C_FIELD(arg2, s32 *, 0x10) = 0x8001;
    M2C_FIELD(temp_v1, s32 *, 4) = 0;
    M2C_FIELD(temp_v1, s32 *, 0xC) = 0;
    temp_v0_2 = arg2 + 0x30;
    M2C_FIELD(temp_v1, s32 *, 8) = 0;
    temp_a1_2 = arg2 + 0x40;
    M2C_FIELD(arg2, s32 *, 0x20) = 0x116;
    M2C_FIELD(temp_v0_2, s32 *, 4) = 0x80;
    M2C_FIELD(temp_v0_2, s32 *, 0xC) = 0x80;
    temp_v1_2 = arg2 + 0x50;
    M2C_FIELD(temp_v0_2, s32 *, 8) = 0x80;
    M2C_FIELD(arg2, s32 *, 0x30) = 0x80;
    M2C_FIELD(temp_a1_2, s32 *, 4) = 8;
    M2C_FIELD(temp_a1_2, s32 *, 0xC) = 0;
    M2C_FIELD(temp_a1_2, s32 *, 8) = 0;
    M2C_FIELD(arg2, s32 *, 0x40) = 8;
    M2C_FIELD(temp_v1_2, s32 *, 4) = (s32) (temp_s3_2 + temp_s6);
    M2C_FIELD(temp_v1_2, s32 *, 0xC) = 0;
    M2C_FIELD(temp_v1_2, s32 *, 8) = 0;
    M2C_FIELD(arg2, s32 *, 0x50) = (s32) (temp_s4_2 + temp_s6);
    temp_s0 = (func_0018ED90(arg0) * 0x10) - 8;
    temp_v1_3 = arg2 + 0x60;
    temp_v0_3 = func_0018ED60(arg0) * 0x10;
    M2C_FIELD(temp_v1_3, s32 *, 4) = temp_s0;
    M2C_FIELD(temp_v1_3, s32 *, 0xC) = 0;
    M2C_FIELD(temp_v1_3, s32 *, 8) = 0;
    M2C_FIELD(arg2, s32 *, 0x60) = (s32) (temp_v0_3 - 8);
    temp_v0_4 = arg2 + 0x70;
    M2C_FIELD(temp_v0_4, s32 *, 4) = (s32) (temp_s3_2 + ((s32) ((f32) temp_v0 * fparg0) * 0x10) + temp_s6);
    M2C_FIELD(temp_v0_4, s32 *, 0xC) = 0;
    M2C_FIELD(temp_v0_4, s32 *, 8) = 0;
    M2C_FIELD(arg2, s32 *, 0x70) = (s32) (temp_s4_2 + (temp_s5 * 0x10) + temp_s6);
}
