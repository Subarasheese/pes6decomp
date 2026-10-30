/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00235B60(void);
extern u8 func_00238590(s32);
u8 func_00233260(u8, u8, u8);                       /* extern */
s32 func_00236680(s32);                             /* extern */
extern s32 D_003E77B0;

s32 func_003230B0(void *arg0) {
    s32 temp_s5;
    s32 temp_s6;
    s32 temp_s7;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_s2;
    s32 var_s3;
    u8 temp_s5_2;
    u8 temp_v0;
    u8 temp_v1_4;
    void *temp_s0;
    void *var_s1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0);
    if ((temp_v1 != 9) && (temp_v1 != 8) && (temp_v1 != 7) && (temp_v1 != 6)) {
        M2C_FIELD(arg0, s8 *, 0x6C) = 0x80;
        M2C_FIELD(arg0, s8 *, 0x6D) = 0x80;
        M2C_FIELD(arg0, s8 *, 0x6E) = 0x80;
        M2C_FIELD(arg0, s8 *, 0xA8) = 0x80;
        M2C_FIELD(arg0, s8 *, 0xA9) = 0x80;
        M2C_FIELD(arg0, s8 *, 0xAA) = 0x80;
    } else {
        var_s3 = 0;
        var_s1 = arg0;
        do {
            temp_v0 = M2C_FIELD(arg0, u8 *, 0xD);
            temp_s0 = var_s1 + 0x6C;
            if (temp_v0 == 0) {
                M2C_FIELD(var_s1, u8 *, 0x6C) = 0x80U;
                M2C_FIELD(temp_s0, u8 *, 1) = 0x80U;
                M2C_FIELD(temp_s0, u8 *, 2) = 0x80U;
                M2C_FIELD(temp_s0, s8 *, 3) = 0;
            } else {
                temp_s7 = var_s3 % 2;
                M2C_FIELD(temp_s0, u8 *, 1) = func_00233260((temp_v0 - 1) & 0xFF, M2C_FIELD(arg0, u8 *, 0x2C), M2C_FIELD((D_003E77B0 + temp_s7), u8 *, 0x2C));
                M2C_FIELD(var_s1, u8 *, 0x6C) = func_00233260(M2C_FIELD(arg0, u8 *, 0xD), M2C_FIELD(arg0, u8 *, 0x2C), M2C_FIELD((D_003E77B0 + temp_s7), u8 *, 0x2C));
                if (M2C_FIELD(var_s1, u8 *, 0x6C) == M2C_FIELD(temp_s0, u8 *, 1)) {
                    if (M2C_FIELD(temp_s0, u8 *, 2) == 0x80) {
                        M2C_FIELD(temp_s0, u8 *, 2) = 0U;
                    }
                    M2C_FIELD(temp_s0, u8 *, 2) = (u8) (M2C_FIELD(temp_s0, u8 *, 2) + 1);
                    M2C_FIELD(temp_s0, s32 *, 4) = 2;
                } else {
                    M2C_FIELD(temp_s0, u8 *, 2) = 0U;
                    if ((s32) M2C_FIELD(temp_s0, u8 *, 1) < (s32) M2C_FIELD(var_s1, u8 *, 0x6C)) {
                        M2C_FIELD(temp_s0, s32 *, 4) = 3;
                        temp_v1_2 = (s32) M2C_FIELD(arg0, u8 *, 0x2C);
                        if ((temp_v1_2 != 0x1A) && (temp_v1_2 != 0x18) && (temp_v1_2 != 0x16) && (temp_v1_2 != 0x14) && (temp_v1_2 != 0x12) && (temp_v1_2 != 0xF) && (temp_v1_2 != 0xB) && (temp_v1_2 != 0xD) && (temp_v1_2 != 0x1C)) {

                        } else if (M2C_FIELD(temp_s0, u8 *, 1) == 1) {
                            M2C_FIELD(var_s1, u8 *, 0x5D) = 3U;
                        }
                    } else {
                        M2C_FIELD(temp_s0, s32 *, 4) = 1;
                        temp_v1_3 = (s32) M2C_FIELD(arg0, u8 *, 0x2C);
                        if ((temp_v1_3 != 0x1A) && (temp_v1_3 != 0x18) && (temp_v1_3 != 0x16) && (temp_v1_3 != 0x14) && (temp_v1_3 != 0x12) && (temp_v1_3 != 0xF) && (temp_v1_3 != 0xB) && (temp_v1_3 != 0xD) && (temp_v1_3 != 0x1C)) {

                        } else if ((M2C_FIELD(var_s1, u8 *, 0x6C) == 1) && (M2C_FIELD(var_s1, u8 *, 0x5D) == 1)) {
                            M2C_FIELD(var_s1, u8 *, 0x5D) = 2U;
                        }
                    }
                }
                temp_s5 = func_00238590(func_00235B60()) & 0xFF;
                var_s2 = func_00236680(func_00235B60()) & 0xFF;
                temp_s6 = var_s2 + temp_s5;
                M2C_FIELD(temp_s0, s8 *, 3) = 0;
                if (var_s2 < temp_s6) {
                    do {
                        temp_v1_4 = M2C_FIELD((temp_s7 + D_003E77B0), u8 *, 0x2C);
                        if ((temp_v1_4 != var_s2) && (temp_v1_4 != 0xFF)) {
                            temp_s5_2 = M2C_FIELD(var_s1, u8 *, 0x6C);
                            if (temp_s5_2 == (func_00233260((M2C_FIELD(arg0, u8 *, 0xD) - 1) & 0xFF, M2C_FIELD(arg0, u8 *, 0x2C), var_s2 & 0xFF) & 0xFF)) {
                                M2C_FIELD(temp_s0, s8 *, 3) = 1;
                            }
                        }
                        var_s2 += 1;
                    } while (var_s2 < temp_s6);
                }
            }
            var_s3 += 1;
            var_s1 += 0x3C;
        } while (var_s3 < 2);
    }
    return 1;
}
