/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
s16 func_00225680(u8);                              /* extern */
void *func_00994670(u8, s32);                       /* extern */
void *func_00994750();                              /* extern */
void *func_00994C60(u8, u8);                        /* extern */
s32 func_00B459B0(void *, s64);                     /* extern */
extern void *D_003EAE70;

void func_00B45610(void) {
    s32 var_s2_5;
    s32 var_s3_2;
    s64 var_s2;
    s64 var_s2_2;
    s64 var_s2_3;
    s64 var_s2_4;
    s8 var_a0;
    s8 var_s3;
    u64 temp_a0_2;
    u8 temp_a0;
    void *temp_s0;
    void *temp_s1;
    void *temp_v0;
    void *var_s0;

    temp_s1 = D_003EAE70;
    if (temp_s1 != NULL) {
        M2C_FIELD(temp_s1, s8 *, 0x3B5) = 0;
        temp_s0 = func_00994750();
        M2C_FIELD(temp_s1, u8 *, 0x7BC) = func_00225820();
        M2C_FIELD(temp_s1, s16 *, 0x7BE) = func_00225680(M2C_FIELD(temp_s1, u8 *, 0x7BC));
        var_s3 = 0;
        var_s2 = 0;
        if ((s32) M2C_FIELD(temp_s0, u8 *, 0x619D6) > 0) {
loop_2:
            if ((var_s3 & 0xFF) < 0x20) {
                if (func_00B459B0(temp_s0 + 0x6198C, (s64) (var_s2 << 0x30) >> 0x30) != 0) {
                    var_s3 = (var_s3 + 1) & 0xFF;
                }
                var_s2 += 1;
                if (var_s2 >= (s32) M2C_FIELD(temp_s0, u8 *, 0x619D6)) {

                } else {
                    goto loop_2;
                }
            }
        }
        var_s2_2 = 0;
        if ((s32) M2C_FIELD(temp_s0, u8 *, 0x61A21) > 0) {
loop_8:
            if ((var_s3 & 0xFF) < 0x20) {
                if (func_00B459B0(temp_s0 + 0x619D7, (s64) (var_s2_2 << 0x30) >> 0x30) != 0) {
                    var_s3 = (var_s3 + 1) & 0xFF;
                }
                var_s2_2 += 1;
                if (var_s2_2 >= (s32) M2C_FIELD(temp_s0, u8 *, 0x61A21)) {

                } else {
                    goto loop_8;
                }
            }
        }
        var_s2_3 = 0;
        if ((s32) M2C_FIELD(temp_s0, u8 *, 0x61A6C) > 0) {
loop_14:
            if ((var_s3 & 0xFF) < 0x20) {
                if (func_00B459B0(temp_s0 + 0x61A22, (s64) (var_s2_3 << 0x30) >> 0x30) != 0) {
                    var_s3 = (var_s3 + 1) & 0xFF;
                }
                var_s2_3 += 1;
                if (var_s2_3 >= (s32) M2C_FIELD(temp_s0, u8 *, 0x61A6C)) {

                } else {
                    goto loop_14;
                }
            }
        }
        var_s2_4 = 0;
        if ((s32) M2C_FIELD(temp_s0, u8 *, 0x61AB7) > 0) {
loop_20:
            if ((var_s3 & 0xFF) < 0x20) {
                if (func_00B459B0(temp_s0 + 0x61A6D, (s64) (var_s2_4 << 0x30) >> 0x30) != 0) {
                    var_s3 = (var_s3 + 1) & 0xFF;
                }
                var_s2_4 += 1;
                if (var_s2_4 >= (s32) M2C_FIELD(temp_s0, u8 *, 0x61AB7)) {

                } else {
                    goto loop_20;
                }
            }
        }
        M2C_FIELD(temp_s1, s8 *, 0x7C0) = var_s3;
        M2C_FIELD(temp_s1, u8 *, 0x7C1) = 0U;
        var_s3_2 = 0;
loop_26:
        if ((s32) M2C_FIELD(temp_s1, u8 *, 0x7C1) < 0x20) {
            var_s0 = func_00994670(M2C_FIELD(temp_s1, u8 *, 0x7BC), var_s3_2 & 0xFF);
            if (var_s0 != NULL) {
                var_s2_5 = 0;
loop_29:
                if ((s32) M2C_FIELD(temp_s1, u8 *, 0x7C1) < 0x20) {
                    temp_a0 = M2C_FIELD(var_s0, u8 *, 0);
                    if (temp_a0 != 0xFF) {
                        temp_v0 = func_00994C60(temp_a0, M2C_FIELD(var_s0, u8 *, 1));
                        if ((temp_v0 != NULL) && (M2C_FIELD(temp_v0, u16 *, 4) != 0) && (((u64) ((s64) M2C_FIELD(temp_v0, u16 *, 0) << 0x35) >> 0x3C) == 2)) {
                            temp_a0_2 = (u64) ((s64) (u8) M2C_FIELD(temp_v0, u16 *, 0) << 0x39) >> 0x3A;
                            if ((temp_a0_2 != 5) && (temp_a0_2 != 4) && (temp_a0_2 != 3) && (temp_a0_2 != 2)) {

                            } else {
                                M2C_FIELD(temp_s1, u8 *, 0x7C1) = (u8) (M2C_FIELD(temp_s1, u8 *, 0x7C1) + 1);
                            }
                        }
                    }
                    var_s2_5 += 1;
                    var_s0 += 2;
                    if (var_s2_5 < 0x48) {
                        goto loop_29;
                    }
                }
            }
            var_s3_2 += 1;
            if (var_s3_2 < 0x25) {
                goto loop_26;
            }
        }
        M2C_FIELD(temp_s1, s8 *, 0x3B7) = 0;
        var_a0 = 0;
        M2C_FIELD(temp_s1, s8 *, 0x3B8) = 1;
        M2C_FIELD(temp_s1, u8 *, 0x3B9) = 0U;
        M2C_FIELD(temp_s1, s8 *, 0x3B4) = 0;
        do {
            if ((s32) M2C_FIELD((temp_s1 + var_a0), u8 *, 0x7C0) > 0) {
                M2C_FIELD((temp_s1 + M2C_FIELD(temp_s1, u8 *, 0x3B9)), s8 *, 0x3B7) = var_a0;
                M2C_FIELD(temp_s1, u8 *, 0x3B9) = (u8) (M2C_FIELD(temp_s1, u8 *, 0x3B9) + 1);
            }
            var_a0 += 1;
        } while (var_a0 < 2);
        M2C_FIELD(temp_s1, u8 *, 0x3BA) = 0U;
        M2C_FIELD(temp_s1, u8 *, 0x3B6) = (u8) M2C_FIELD((M2C_FIELD(temp_s1, u8 *, 0x3BA) + temp_s1), u8 *, 0x3B7);
        M2C_FIELD(temp_s1, s8 *, 0x829) = 0;
        M2C_FIELD(temp_s1, s8 *, 0x82A) = 0;
        M2C_FIELD(temp_s1, s8 *, 0x8FD) = 0;
    }
}
