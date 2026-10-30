/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00186A98(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, void *arg6) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a1;
    s32 var_a2;
    s32 var_a3;
    s32 var_a4;
    s32 var_a5;
    s32 var_s0;
    s32 var_s1;
    s32 var_t0;
    s32 var_t1;
    s32 var_t2;
    s32 var_t3;
    s32 var_t8;
    s32 var_t9;
    s32 var_v0;
    s32 var_v1;
    s32 var_v1_2;
    void *temp_a6;
    void *temp_a6_2;
    void *temp_a6_3;
    void *temp_a6_4;
    void *temp_a6_5;
    void *temp_a6_6;
    void *temp_s3;

    var_a2 = arg2;
    var_a3 = arg3;
    temp_v1 = arg5 >> 0x1F;
    temp_s3 = arg6 + 0x20;
    temp_a0 = arg5 + 3;
    if (arg1 != 1) {
        if (arg1 < 2) {
            if (arg1 != 0) {
                var_v1 = arg5 - temp_v1;
                goto block_10;
            }
            var_t0 = var_a3;
            temp_a0_2 = (s32) ((arg5 > -1) ? arg5 : temp_a0) >> 2;
            var_a4 = var_a2 - arg4;
            var_t2 = var_a3 + temp_a0_2;
            var_s1 = var_t0 - ((s32) (arg5 - temp_v1) >> 1);
            var_t1 = var_t0 - (arg5 - temp_a0_2);
            goto block_8;
        }
        if (arg1 != 2) {
            var_v1 = arg5 - temp_v1;
block_10:
            var_a1 = var_a2;
            var_t1 = var_a3 - arg4;
            temp_a0_3 = (s32) ((arg5 > -1) ? arg5 : temp_a0) >> 2;
            var_s0 = var_a1 + (var_v1 >> 1);
            var_a4 = var_a1 + (arg5 - temp_a0_3);
            var_a0 = var_a2 - temp_a0_3;
        } else {
            var_a1 = var_a2;
            var_t1 = var_a3 + arg4;
            temp_a0_4 = (s32) ((arg5 > -1) ? arg5 : temp_a0) >> 2;
            var_s0 = var_a1 - ((s32) (arg5 - temp_v1) >> 1);
            var_a4 = var_a1 - (arg5 - temp_a0_4);
            var_a0 = var_a2 + temp_a0_4;
        }
        var_s1 = var_t1;
        var_t0 = var_t1;
        var_t2 = var_t1;
        var_t9 = var_a3;
        var_t3 = var_a3;
        var_v1_2 = var_a3;
        var_v0 = var_a0;
        var_a5 = var_a1;
        var_t8 = var_s0;
        var_a2 = var_a4;
    } else {
        var_t0 = var_a3;
        temp_a0_5 = (s32) ((arg5 > -1) ? arg5 : temp_a0) >> 2;
        var_a4 = var_a2 + arg4;
        var_t2 = var_a3 - temp_a0_5;
        var_s1 = var_t0 + ((s32) (arg5 - temp_v1) >> 1);
        var_t1 = var_t0 + (arg5 - temp_a0_5);
block_8:
        var_s0 = var_a4;
        var_a1 = var_a4;
        var_a0 = var_a4;
        var_t8 = var_a2;
        var_a5 = var_a2;
        var_v0 = var_a2;
        var_v1_2 = var_t2;
        var_t3 = var_t0;
        var_t9 = var_s1;
        var_a3 = var_t1;
    }
    M2C_FIELD(arg6, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + var_v0);
    M2C_FIELD(arg6, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + var_v1_2);
    M2C_FIELD(temp_s3, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + var_a0);
    M2C_FIELD(temp_s3, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + var_t2);
    temp_a6 = temp_s3 + 0x20;
    M2C_FIELD(temp_a6, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + var_a5);
    M2C_FIELD(temp_a6, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + var_t3);
    temp_a6_2 = temp_a6 + 0x20;
    M2C_FIELD(temp_a6_2, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + var_a1);
    M2C_FIELD(temp_a6_2, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + var_t0);
    temp_a6_3 = temp_a6_2 + 0x20;
    M2C_FIELD(temp_a6_3, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + var_t8);
    M2C_FIELD(temp_a6_3, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + var_t9);
    temp_a6_4 = temp_a6_3 + 0x20;
    M2C_FIELD(temp_a6_4, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + var_s0);
    M2C_FIELD(temp_a6_4, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + var_s1);
    temp_a6_5 = temp_a6_4 + 0x20;
    M2C_FIELD(temp_a6_5, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + var_a2);
    M2C_FIELD(temp_a6_5, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + var_a3);
    temp_a6_6 = temp_a6_5 + 0x20;
    M2C_FIELD(temp_a6_6, s16 *, 0x10) = (s16) (M2C_FIELD(arg0, u16 *, 0x4DC) + var_a4);
    M2C_FIELD(temp_a6_6, s16 *, 0x12) = (s16) (M2C_FIELD(arg0, u16 *, 0x4E0) + var_t1);
}
