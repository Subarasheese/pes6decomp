/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_0022F150(void);
extern u8 func_00225820(void);
extern s32 func_002260F0(s32);
s32 func_002249A0(s32, s32);                        /* extern */
s32 func_00224BC0(s32, s32);                        /* extern */
M2C_UNK func_00224CA0(s32, s32, u16, s32, s32);     /* extern */
s32 func_00224D90(s32, u8);                         /* extern */

void func_00AF66C0(void) {
    s32 temp_a1_2;
    s32 temp_a3;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s4_2;
    s32 temp_v0;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_a4;
    s32 var_s3;
    s32 var_s5;
    s32 var_v1;
    u16 temp_a2;
    u32 var_s1;
    u8 temp_a0_2;
    u8 temp_a1;
    u8 temp_a2_2;
    u8 temp_a2_3;
    u8 temp_a2_4;
    u8 temp_a2_5;
    u8 temp_a2_6;
    u8 temp_a2_7;
    u8 temp_a2_8;
    u8 temp_a2_9;
    void *temp_a0;
    void *temp_a1_3;
    void *temp_a2_10;
    void *temp_a2_11;
    void *temp_s4;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;

    temp_s2 = func_00225820() & 0xFF;
    temp_s4 = func_0022F150();
    temp_s0 = func_002260F0(temp_s2);
    if ((temp_s4 != NULL) && (temp_s0 != 0)) {
        var_s5 = 0;
        do {
            temp_s1 = func_00224BC0(temp_s2, var_s5) & 0xFFFF;
            temp_a3 = func_002249A0(temp_s2, var_s5) & 0xFF;
            var_a4 = 0;
loop_4:
            temp_v0 = var_a4 & 0xFF;
            temp_a0 = temp_s4 + (temp_v0 * 2);
            temp_v0_2 = temp_s4 + temp_v0;
            temp_a2 = M2C_FIELD(temp_a0, u16 *, 0x76C);
            if (!(temp_s1 & 0xFFFF) && (temp_a2 & 0xFFFF) && (temp_a3 == (M2C_FIELD(temp_v0_2, u8 *, 0x7AC) & 0xFF))) {
                func_00224CA0(temp_s2, var_s5, temp_a2, temp_a3, var_a4);
                M2C_FIELD(temp_a0, u16 *, 0x76C) = 0U;
                M2C_FIELD(temp_v0_2, u8 *, 0x7AC) = 0xFFU;
            } else {
                var_a4 = (var_a4 + 1) & 0xFF;
                if (var_a4 >= 0x20) {

                } else {
                    goto loop_4;
                }
            }
            var_s5 = (var_s5 + 1) & 0xFF;
        } while (var_s5 < 0x20);
        var_s3 = 0;
        do {
            var_s1 = 0;
loop_13:
            temp_s4_2 = var_s1 & 0xFF;
            if (!(func_00224D90(temp_s2, M2C_FIELD((temp_s0 + temp_s4_2), u8 *, 0x4B1)) & 0xFFFF)) {
                var_v1 = temp_s4_2;
                if (temp_s4_2 < 0x1F) {
                    if (((u32) (0x1F - var_s1) >= 9U) && (var_s1 < 0x20U)) {
                        do {
                            temp_v0_3 = temp_s0 + (var_v1 & 0xFF);
                            temp_a2_2 = M2C_FIELD(temp_v0_3, u8 *, 0x4B1);
                            var_v1 = (var_v1 + 8) & 0xFF;
                            M2C_FIELD(temp_v0_3, u8 *, 0x4B1) = (u8) M2C_FIELD(temp_v0_3, u8 *, 0x4B2);
                            M2C_FIELD(temp_v0_3, u8 *, 0x4B2) = temp_a2_2;
                            temp_a2_3 = M2C_FIELD(temp_v0_3, u8 *, 0x4B2);
                            M2C_FIELD(temp_v0_3, u8 *, 0x4B2) = (u8) M2C_FIELD(temp_v0_3, u8 *, 0x4B3);
                            M2C_FIELD(temp_v0_3, u8 *, 0x4B3) = temp_a2_3;
                            temp_a2_4 = M2C_FIELD(temp_v0_3, u8 *, 0x4B3);
                            M2C_FIELD(temp_v0_3, u8 *, 0x4B3) = (u8) M2C_FIELD(temp_v0_3, u8 *, 0x4B4);
                            M2C_FIELD(temp_v0_3, u8 *, 0x4B4) = temp_a2_4;
                            temp_a2_5 = M2C_FIELD(temp_v0_3, u8 *, 0x4B4);
                            M2C_FIELD(temp_v0_3, u8 *, 0x4B4) = (u8) M2C_FIELD(temp_v0_3, u8 *, 0x4B5);
                            M2C_FIELD(temp_v0_3, u8 *, 0x4B5) = temp_a2_5;
                            temp_a2_6 = M2C_FIELD(temp_v0_3, u8 *, 0x4B5);
                            M2C_FIELD(temp_v0_3, u8 *, 0x4B5) = (u8) M2C_FIELD(temp_v0_3, u8 *, 0x4B6);
                            M2C_FIELD(temp_v0_3, u8 *, 0x4B6) = temp_a2_6;
                            temp_a2_7 = M2C_FIELD(temp_v0_3, u8 *, 0x4B6);
                            M2C_FIELD(temp_v0_3, u8 *, 0x4B6) = (u8) M2C_FIELD(temp_v0_3, u8 *, 0x4B7);
                            M2C_FIELD(temp_v0_3, u8 *, 0x4B7) = temp_a2_7;
                            temp_a2_8 = M2C_FIELD(temp_v0_3, u8 *, 0x4B7);
                            M2C_FIELD(temp_v0_3, u8 *, 0x4B7) = (u8) M2C_FIELD(temp_v0_3, u8 *, 0x4B8);
                            M2C_FIELD(temp_v0_3, u8 *, 0x4B8) = temp_a2_8;
                            temp_a2_9 = M2C_FIELD(temp_v0_3, u8 *, 0x4B8);
                            M2C_FIELD(temp_v0_3, u8 *, 0x4B8) = (u8) M2C_FIELD(temp_v0_3, u8 *, 0x4B9);
                            M2C_FIELD(temp_v0_3, u8 *, 0x4B9) = temp_a2_9;
                        } while (var_v1 < 0x17);
                    }
                    var_a3 = var_v1 & 0xFF;
                    if (var_a3 < 0x1F) {
                        do {
                            temp_a2_10 = temp_s0 + var_a3;
                            temp_a1 = M2C_FIELD(temp_a2_10, u8 *, 0x4B1);
                            temp_a0_2 = M2C_FIELD(temp_a2_10, u8 *, 0x4B2);
                            var_v1 = (var_v1 + 1) & 0xFF;
                            var_a3 = var_v1;
                            M2C_FIELD(temp_a2_10, u8 *, 0x4B1) = temp_a0_2;
                            M2C_FIELD(temp_a2_10, u8 *, 0x4B2) = temp_a1;
                        } while (var_v1 < 0x1F);
                    }
                }
            }
            var_s1 = (var_s1 + 1) & 0xFF;
            if ((s32) var_s1 < 0x20) {
                goto loop_13;
            }
            var_s3 = (var_s3 + 1) & 0xFF;
        } while (var_s3 < 0x20);
        temp_v0_4 = func_0022F150();
        if (temp_v0_4 != NULL) {
            var_a3_2 = 0;
            do {
                temp_a1_2 = var_a3_2 & 0xFF;
                var_a3_2 = (var_a3_2 + 8) & 0xFF;
                temp_a2_11 = temp_v0_4 + (temp_a1_2 * 2);
                temp_a1_3 = temp_v0_4 + temp_a1_2;
                M2C_FIELD(temp_a2_11, s16 *, 0x76C) = 0;
                M2C_FIELD(temp_a1_3, s8 *, 0x7AC) = 0xFF;
                M2C_FIELD(temp_a2_11, s16 *, 0x76E) = 0;
                M2C_FIELD(temp_a1_3, s8 *, 0x7AD) = 0xFF;
                M2C_FIELD(temp_a2_11, s16 *, 0x770) = 0;
                M2C_FIELD(temp_a1_3, s8 *, 0x7AE) = 0xFF;
                M2C_FIELD(temp_a2_11, s16 *, 0x772) = 0;
                M2C_FIELD(temp_a1_3, s8 *, 0x7AF) = 0xFF;
                M2C_FIELD(temp_a2_11, s16 *, 0x774) = 0;
                M2C_FIELD(temp_a1_3, s8 *, 0x7B0) = 0xFF;
                M2C_FIELD(temp_a2_11, s16 *, 0x776) = 0;
                M2C_FIELD(temp_a1_3, s8 *, 0x7B1) = 0xFF;
                M2C_FIELD(temp_a2_11, s16 *, 0x778) = 0;
                M2C_FIELD(temp_a1_3, s8 *, 0x7B2) = 0xFF;
                M2C_FIELD(temp_a2_11, s16 *, 0x77A) = 0;
                M2C_FIELD(temp_a1_3, s8 *, 0x7B3) = 0xFF;
            } while (var_a3_2 < 0x20);
        }
    }
}
