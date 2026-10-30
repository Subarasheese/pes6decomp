/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225940(s32);
extern u8 func_00239BE0(u8);
extern s32 func_0022BAC0(s32);
extern s32 func_0022BFF0(s32, s32);
extern void func_009BAA00(void *, s32);
extern s32 func_0022C140(s32);
extern u8 func_0022BC60(s32);
extern void func_009BAAC0(void *, s32);
extern void * func_00229380(void);
s32 func_0097F790(u8, u8, M2C_UNK, u8);             /* extern */
extern void *D_003E7B0C;
extern void *D_003EA9C0;

void func_009BAF90(void) {
    u8 spA0;
    s32 temp_fp;
    s32 temp_s1;
    s32 var_a0;
    s32 var_s1;
    s32 var_s3;
    s32 var_s4;
    s8 var_s7;
    u32 temp_a2;
    u8 *temp_v0_2;
    u8 temp_a1;
    u8 var_v0;
    void *temp_a2_2;
    void *temp_a2_3;
    void *temp_a3;
    void *temp_a4;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s2;
    void *temp_s6;
    void *temp_v0;
    void *temp_v0_3;
    void *temp_v1;
    void *temp_v1_2;

    var_s7 = 0;
    var_s3 = 0;
    temp_s2 = D_003EA9C0;
    temp_s0 = func_00229380();
    if (temp_s2 != NULL) {
        spA0 = M2C_FIELD(D_003E7B0C, u8 *, 0x28);
        temp_v0 = func_0022C140((s32) spA0);
        M2C_FIELD(temp_s2, u8 *, 0xF0) = func_00239BE0(M2C_FIELD(temp_v0, u8 *, 9));
        if (M2C_FIELD(temp_v0, u8 *, 0xB) == 0) {
            M2C_FIELD(temp_s2, u8 *, 0xF3) = 0U;
        } else {
            M2C_FIELD(temp_s2, u8 *, 0xF3) = 1U;
        }
        if (M2C_FIELD(temp_s2, u8 *, 0xF3) != 1) {
            var_v0 = M2C_FIELD(temp_v0, u8 *, 5);
        } else {
            var_v0 = (M2C_FIELD(temp_v0, u8 *, 5) - 1) & 0xFF;
        }
        var_s1 = func_0097F790(M2C_FIELD(temp_s0, u8 *, 0), M2C_FIELD(temp_s0, u8 *, 5), 2, M2C_FIELD(D_003E7B0C, u8 *, 0x2B)) & 0xFF;
        temp_v0_2 = func_00229380();
        if (D_003EA9C0 != NULL) {
            if (!(var_s1 & 0xFF) && (*temp_v0_2 != 0xF)) {
                var_a0 = 1;
            } else {
                goto block_16;
            }
        } else {
block_16:
            var_a0 = 0;
        }
        if (var_a0 == 1) {
            var_s1 = func_0097F790(M2C_FIELD(temp_s0, u8 *, 0), M2C_FIELD(temp_s0, u8 *, 5), 2, (M2C_FIELD(D_003E7B0C, u8 *, 0x2B) + 1) & 0xFF) & 0xFF;
        }
        temp_a2 = var_s1 & 0xFF;
        temp_fp = var_v0 & 0xFF & 0xFF;
        var_s4 = 0;
        M2C_FIELD(temp_s2, u8 *, 0xE0) = (u8) (((var_s1 & 0xFF) / 10) + (temp_a2 >> 0x1F));
        M2C_FIELD(temp_s2, u8 *, 0xE2) = (u8) (((s32) temp_a2 % 10) - 1);
        if (temp_fp > 0) {
            do {
                temp_v0_3 = func_0022BFF0((s32) spA0, var_s4);
                if ((M2C_FIELD(temp_s2, u8 *, 0xE0) == M2C_FIELD(temp_v0_3, u8 *, 0)) && !(M2C_FIELD(temp_v0_3, u8 *, 0x16) & 1)) {
                    if (((u64) ((s64) M2C_FIELD(temp_v0_3, u8 *, 0x17) << 0x3C) >> 0x3F) == 1) {
                        M2C_FIELD((temp_s2 + (var_s3 & 0xFF)), s8 *, 0xE3) = 1;
                    }
                    temp_s1 = var_s3 & 0xFF;
                    temp_s0_2 = temp_s2 + (temp_s1 * 2);
                    M2C_FIELD(temp_s0_2, u8 *, 0x68) = func_0022BC60((s32) M2C_FIELD(temp_v0_3, u8 *, 5));
                    M2C_FIELD(temp_s0_2, u8 *, 0x69) = func_0022BC60((s32) M2C_FIELD(temp_v0_3, u8 *, 6));
                    temp_s6 = temp_s2 + (temp_s1 * 4);
                    M2C_FIELD(temp_s6, s16 *, 0x7C) = func_0022BAC0((s32) M2C_FIELD(temp_v0_3, u8 *, 5));
                    M2C_FIELD(temp_s6, s16 *, 0x7E) = func_0022BAC0((s32) M2C_FIELD(temp_v0_3, u8 *, 6));
                    M2C_FIELD(temp_s0_2, u8 *, 0xA4) = func_00225940(func_0022BC60((s32) M2C_FIELD(temp_v0_3, u8 *, 5)));
                    M2C_FIELD(temp_s0_2, u8 *, 0xA5) = func_00225940(func_0022BC60((s32) M2C_FIELD(temp_v0_3, u8 *, 6)));
                    temp_a1 = M2C_FIELD(temp_s2, u8 *, 0xE2);
                    if ((temp_a1 == 0) && (((u64) ((s64) M2C_FIELD(temp_v0_3, u8 *, 0x16) << 0x3D) >> 0x3F) == 1)) {
                        temp_a3 = temp_s2 + (temp_s1 * 2);
                        temp_a4 = temp_s2 + (temp_s1 * 6);
                        M2C_FIELD(temp_a4, s8 *, 4) = (s8) (M2C_FIELD(temp_v0_3, u8 *, 7) + M2C_FIELD(temp_v0_3, u8 *, 8));
                        M2C_FIELD(temp_a4, s8 *, 5) = 0;
                        M2C_FIELD(temp_a4, s8 *, 6) = 0;
                        M2C_FIELD(temp_a3, u8 *, 0x40) = (u8) (M2C_FIELD(temp_v0_3, u8 *, 7) + M2C_FIELD(temp_v0_3, u8 *, 8));
                        M2C_FIELD(temp_a3, u8 *, 0x54) = (u8) M2C_FIELD(temp_a3, u8 *, 0x40);
                        M2C_FIELD(temp_a4, s8 *, 7) = (s8) (M2C_FIELD(temp_v0_3, u8 *, 9) + M2C_FIELD(temp_v0_3, u8 *, 0xA));
                        M2C_FIELD(temp_a4, s8 *, 8) = 0;
                        M2C_FIELD(temp_a4, s8 *, 9) = 0;
                        M2C_FIELD(temp_a3, u8 *, 0x41) = (u8) (M2C_FIELD(temp_v0_3, u8 *, 9) + M2C_FIELD(temp_v0_3, u8 *, 0xA));
                        M2C_FIELD(temp_a3, u8 *, 0x55) = (u8) M2C_FIELD(temp_a3, u8 *, 0x41);
                        func_009BAA00(temp_v0_3, var_s3);
                    } else if ((temp_a1 == 1) && (((u64) ((s64) M2C_FIELD(temp_v0_3, u8 *, 0x16) << 0x3D) >> 0x3F) == 1)) {
                        temp_v1 = temp_s2 + (temp_s1 * 2);
                        temp_a2_2 = temp_s2 + (temp_s1 * 6);
                        M2C_FIELD(temp_a2_2, u8 *, 4) = (u8) (M2C_FIELD(temp_v0_3, u8 *, 0xB) + M2C_FIELD(temp_v0_3, u8 *, 0xC));
                        M2C_FIELD(temp_a2_2, u8 *, 5) = (u8) (M2C_FIELD(temp_v0_3, u8 *, 0xD) + M2C_FIELD(temp_v0_3, u8 *, 0xE));
                        M2C_FIELD(temp_a2_2, u8 *, 6) = (u8) M2C_FIELD(temp_v0_3, u8 *, 0xF);
                        M2C_FIELD(temp_v1, u8 *, 0x40) = (u8) (M2C_FIELD(temp_v0_3, u8 *, 7) + M2C_FIELD(temp_v0_3, u8 *, 8));
                        M2C_FIELD(temp_v1, s8 *, 0x54) = (s8) (M2C_FIELD(temp_a2_2, u8 *, 4) + (M2C_FIELD(temp_v1, u8 *, 0x40) + M2C_FIELD(temp_a2_2, u8 *, 5)));
                        M2C_FIELD(temp_a2_2, u8 *, 7) = (u8) (M2C_FIELD(temp_v0_3, u8 *, 0x10) + M2C_FIELD(temp_v0_3, u8 *, 0x11));
                        M2C_FIELD(temp_a2_2, u8 *, 8) = (u8) (M2C_FIELD(temp_v0_3, u8 *, 0x12) + M2C_FIELD(temp_v0_3, u8 *, 0x13));
                        M2C_FIELD(temp_a2_2, u8 *, 9) = (u8) M2C_FIELD(temp_v0_3, u8 *, 0x14);
                        M2C_FIELD(temp_v1, u8 *, 0x41) = (u8) (M2C_FIELD(temp_v0_3, u8 *, 9) + M2C_FIELD(temp_v0_3, u8 *, 0xA));
                        M2C_FIELD(temp_v1, s8 *, 0x55) = (s8) (M2C_FIELD(temp_a2_2, u8 *, 7) + (M2C_FIELD(temp_v1, u8 *, 0x41) + M2C_FIELD(temp_a2_2, u8 *, 8)));
                        func_009BAAC0(temp_v0_3, var_s3);
                    } else {
                        temp_a2_3 = temp_s2 + (temp_s1 * 6);
                        temp_v1_2 = temp_s2 + (temp_s1 * 2);
                        M2C_FIELD(temp_a2_3, u8 *, 4) = (u8) (M2C_FIELD(temp_v0_3, u8 *, 0xE) + (M2C_FIELD(temp_v0_3, u8 *, 0xD) + (M2C_FIELD(temp_v0_3, u8 *, 0xB) + M2C_FIELD(temp_v0_3, u8 *, 0xC))));
                        M2C_FIELD(temp_a2_3, s8 *, 5) = (s8) (M2C_FIELD(temp_v0_3, u8 *, 0xD) + M2C_FIELD(temp_v0_3, u8 *, 0xE));
                        M2C_FIELD(temp_a2_3, u8 *, 6) = (u8) M2C_FIELD(temp_v0_3, u8 *, 0xF);
                        M2C_FIELD(temp_v1_2, s8 *, 0x40) = 0;
                        M2C_FIELD(temp_v1_2, u8 *, 0x54) = (u8) M2C_FIELD(temp_a2_3, u8 *, 4);
                        M2C_FIELD(temp_a2_3, u8 *, 7) = (u8) (M2C_FIELD(temp_v0_3, u8 *, 0x13) + (M2C_FIELD(temp_v0_3, u8 *, 0x12) + (M2C_FIELD(temp_v0_3, u8 *, 0x10) + M2C_FIELD(temp_v0_3, u8 *, 0x11))));
                        M2C_FIELD(temp_a2_3, s8 *, 8) = (s8) (M2C_FIELD(temp_v0_3, u8 *, 0x12) + M2C_FIELD(temp_v0_3, u8 *, 0x13));
                        M2C_FIELD(temp_a2_3, u8 *, 9) = (u8) M2C_FIELD(temp_v0_3, u8 *, 0x14);
                        M2C_FIELD(temp_v1_2, s8 *, 0x41) = 0;
                        M2C_FIELD(temp_v1_2, u8 *, 0x55) = (u8) M2C_FIELD(temp_a2_3, u8 *, 7);
                        func_009BAAC0(temp_v0_3, var_s3);
                    }
                    var_s7 = (var_s7 + 1) & 0xFF;
                    var_s3 = (var_s3 + 1) & 0xFF;
                }
                var_s4 = (var_s4 + 1) & 0xFF;
            } while (var_s4 < temp_fp);
        }
        M2C_FIELD(temp_s2, s8 *, 0xE1) = var_s7;
    }
}
