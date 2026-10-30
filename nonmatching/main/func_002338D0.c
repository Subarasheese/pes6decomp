/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
extern void * func_00229460(void);
s32 func_00229010(s32);                             /* extern */
s8 *func_00232510(void *, s32, s32);                /* extern */
s32 func_00234870(s32, s32, M2C_UNK, s32);          /* extern */
u8 *func_00234C90(s32, s32, s32);                   /* extern */
s8 *func_00236730(s32, s32, s32);                   /* extern */

void func_002338D0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 sp9C;
    u8 sp9D;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s5;
    s32 temp_s6;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_s5;
    s32 var_s5_2;
    s32 var_s5_3;
    s32 var_s7;
    s32 var_v1_4;
    s32 var_v1_5;
    s32 var_v1_6;
    s32 var_v1_7;
    s8 *var_v0_3;
    s8 var_v1_3;
    u16 *temp_a0_6;
    u8 var_v0;
    u8 var_v0_2;
    u8 var_v1;
    u8 var_v1_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;
    void *temp_a2;
    void *temp_s4;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;
    void *temp_v1_5;

    temp_s4 = func_00229460();
    if ((func_00231240() != 1) && (temp_s4 != NULL)) {
        temp_s6 = ((s32) (arg0 & 0xFF) / (s32) M2C_FIELD((((arg2 & 0xFF) * 0xC) + temp_s4), u8 *, 0x4AB9)) & 0xFF;
        temp_s0 = func_00234870(arg0, arg1, 0, arg2) & 0xFF;
        temp_a0 = temp_s0 & 0xFF;
        temp_s1 = func_00234870(arg0, arg1, 1, arg2) & 0xFF;
        if (temp_a0 < 0x71) {
            temp_v1 = temp_s1 & 0xFF;
            if ((temp_v1 < 0x71) && (temp_a0 != temp_v1)) {
                temp_s5 = func_00229010(temp_s0) & 0xFF;
                temp_a0_2 = func_00229010(temp_s1) & 0xFF;
                if (((temp_s5 & 0xFF) < 0x50) && ((temp_a0_2 & 0xFF) < 0x50)) {
                    sp9C = 0;
                    var_s5 = 0;
                    do {
                        if (func_00231240() == 1) {
                            var_a0 = 0;
                        } else {
                            var_v1 = *func_00234C90(temp_s0, arg0, var_s5 & 0xFF);
                            if ((s32) var_v1 >= 0x63) {
                                var_v1 = 0x63;
                            }
                            var_a0 = var_v1 & 0xFF;
                        }
                        if ((sp9C + (var_a0 & 0xFF)) < 0xFE) {
                            var_v0 = sp9C + var_a0;
                        } else {
                            var_v0 = 0xFE;
                        }
                        sp9C = var_v0;
                        var_s5 += 1;
                    } while (var_s5 < 2);
                    sp9D = 0;
                    var_s5_2 = 0;
                    do {
                        if (func_00231240() == 1) {
                            var_a0_2 = 0;
                        } else {
                            var_v1_2 = *func_00234C90(temp_s1, arg0, var_s5_2 & 0xFF);
                            if ((s32) var_v1_2 >= 0x63) {
                                var_v1_2 = 0x63;
                            }
                            var_a0_2 = var_v1_2 & 0xFF;
                        }
                        if ((sp9D + (var_a0_2 & 0xFF)) < 0xFE) {
                            var_v0_2 = sp9D + var_a0_2;
                        } else {
                            var_v0_2 = 0xFE;
                        }
                        sp9D = var_v0_2;
                        var_s5_2 += 1;
                    } while (var_s5_2 < 2);
                    if ((s32) sp9D >= (s32) sp9C) {
                        if ((s32) sp9C >= (s32) sp9D) {
                            var_s5_3 = (temp_s0 & 0xFF) * 0xC;
                            var_s7 = (temp_s1 & 0xFF) * 0xC;
                            temp_a0_3 = var_s5_3 + arg3;
                            temp_v1_2 = var_s7 + arg3;
                            M2C_FIELD(temp_a0_3, u8 *, 6) = (u8) (M2C_FIELD(temp_a0_3, u8 *, 6) + 1);
                            M2C_FIELD(temp_v1_2, u8 *, 6) = (u8) (M2C_FIELD(temp_v1_2, u8 *, 6) + 1);
                            M2C_FIELD(temp_a0_3, u8 *, 7) = (u8) (M2C_FIELD(temp_a0_3, u8 *, 7) + 1);
                            M2C_FIELD(temp_v1_2, u8 *, 7) = (u8) (M2C_FIELD(temp_v1_2, u8 *, 7) + 1);
                            if (func_00231240() != 1) {
                                *func_00232510(temp_s4 + 0x2974, temp_s0, arg0) = 3;
                            }
                            if (func_00231240() != 1) {
                                *func_00232510(temp_s4 + 0x2974, temp_s1, arg0) = 3;
                            }
                            *func_00236730(temp_s0, temp_s1, temp_s6) = 3;
                            var_v0_3 = func_00236730(temp_s1, temp_s0, temp_s6);
                            var_v1_3 = 3;
                        } else {
                            var_s7 = (temp_s1 & 0xFF) * 0xC;
                            var_s5_3 = (temp_s0 & 0xFF) * 0xC;
                            temp_a0_4 = var_s7 + arg3;
                            temp_v1_3 = var_s5_3 + arg3;
                            M2C_FIELD(temp_a0_4, u8 *, 4) = (u8) (M2C_FIELD(temp_a0_4, u8 *, 4) + 1);
                            M2C_FIELD(temp_v1_3, u8 *, 5) = (u8) (M2C_FIELD(temp_v1_3, u8 *, 5) + 1);
                            M2C_FIELD(temp_a0_4, u8 *, 7) = (u8) (M2C_FIELD(temp_a0_4, u8 *, 7) + 3);
                            if (func_00231240() != 1) {
                                *func_00232510(temp_s4 + 0x2974, temp_s1, arg0) = 1;
                            }
                            if (func_00231240() != 1) {
                                *func_00232510(temp_s4 + 0x2974, temp_s0, arg0) = 2;
                            }
                            *func_00236730(temp_s1, temp_s0, temp_s6) = 1;
                            var_v0_3 = func_00236730(temp_s0, temp_s1, temp_s6);
                            var_v1_3 = 2;
                        }
                    } else {
                        var_s5_3 = (temp_s0 & 0xFF) * 0xC;
                        var_s7 = (temp_s1 & 0xFF) * 0xC;
                        temp_a0_5 = var_s5_3 + arg3;
                        temp_v1_4 = var_s7 + arg3;
                        M2C_FIELD(temp_a0_5, u8 *, 4) = (u8) (M2C_FIELD(temp_a0_5, u8 *, 4) + 1);
                        M2C_FIELD(temp_v1_4, u8 *, 5) = (u8) (M2C_FIELD(temp_v1_4, u8 *, 5) + 1);
                        M2C_FIELD(temp_a0_5, u8 *, 7) = (u8) (M2C_FIELD(temp_a0_5, u8 *, 7) + 3);
                        if (func_00231240() != 1) {
                            *func_00232510(temp_s4 + 0x2974, temp_s0, arg0) = 1;
                        }
                        if (func_00231240() != 1) {
                            *func_00232510(temp_s4 + 0x2974, temp_s1, arg0) = 2;
                        }
                        *func_00236730(temp_s0, temp_s1, temp_s6) = 1;
                        var_v0_3 = func_00236730(temp_s1, temp_s0, temp_s6);
                        var_v1_3 = 2;
                    }
                    *var_v0_3 = var_v1_3;
                    temp_a0_6 = arg3 + var_s5_3;
                    var_v1_4 = *temp_a0_6 + sp9C;
                    if (var_v1_4 >= 0x3E7) {
                        var_v1_4 = 0x3E7;
                    }
                    *temp_a0_6 = (u16) var_v1_4;
                    temp_v1_5 = var_s5_3 + arg3;
                    var_v1_5 = M2C_FIELD(temp_v1_5, u16 *, 2) + sp9D;
                    if (var_v1_5 >= 0x3E7) {
                        var_v1_5 = 0x3E7;
                    }
                    M2C_FIELD(temp_v1_5, u16 *, 2) = (u16) var_v1_5;
                    temp_a2 = arg3 + var_s7;
                    var_v1_6 = M2C_FIELD(temp_a2, u16 *, 0) + sp9D;
                    if (var_v1_6 >= 0x3E7) {
                        var_v1_6 = 0x3E7;
                    }
                    M2C_FIELD(temp_a2, u16 *, 0) = (u16) var_v1_6;
                    var_v1_7 = M2C_FIELD(temp_a2, u16 *, 2) + sp9C;
                    if (var_v1_7 < 0x3E7) {

                    } else {
                        var_v1_7 = 0x3E7;
                    }
                    M2C_FIELD(temp_a2, u16 *, 2) = (u16) var_v1_7;
                }
            }
        }
    }
}
