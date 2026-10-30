/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002260F0(s32);
s32 func_00221340(u16, M2C_UNK, M2C_UNK);           /* extern */
void *func_00223E00(u16);                           /* extern */
M2C_UNK func_0096DD30(void *, s8, s32, u16, s32);   /* extern */
extern char D_00591C09[];
extern char D_009C0190[];
extern char D_009C0194[];

void func_0096DE80(void) {
    s16 *var_a6_11;
    s16 *var_a7_10;
    s16 *var_a7_2;
    s16 *var_a7_3;
    s16 *var_a7_4;
    s16 *var_a7_5;
    s16 *var_a7_6;
    s16 *var_a7_7;
    s16 *var_a7_8;
    s16 *var_a7_9;
    s16 *var_t0;
    s16 *var_t0_2;
    s16 *var_t0_3;
    s16 *var_t0_4;
    s16 *var_t0_5;
    s16 *var_t0_6;
    s16 *var_t0_7;
    s16 *var_t0_8;
    s32 temp_a0;
    s32 temp_a5;
    s32 temp_s1_2;
    s32 temp_s6;
    s32 var_a0;
    s32 var_a2;
    s32 var_a3_2;
    s32 var_a4;
    s32 var_a5;
    s32 var_a6;
    s32 var_a6_10;
    s32 var_a6_2;
    s32 var_a6_3;
    s32 var_a6_4;
    s32 var_a6_5;
    s32 var_a6_6;
    s32 var_a6_7;
    s32 var_a6_8;
    s32 var_a6_9;
    s32 var_a7;
    s32 var_s0_2;
    s32 var_s3;
    s32 var_s5;
    s32 var_s7;
    s32 var_t0_9;
    s8 temp_v1;
    s8 var_a1;
    u16 *var_s0;
    u16 *var_s1;
    u16 temp_s1;
    u16 temp_s4;
    u16 var_a0_2;
    u16 var_a3;
    void *temp_a0_2;
    void *temp_v0;
    void *temp_v0_2;
    void *var_s2;

    if ((*(u8 *)D_00591C09) == 4) {
        if ((*(u16 *)D_009C0194) != 0) {
            var_s0 = ((void *)D_009C0190);
            do {
                temp_s1 = M2C_FIELD(var_s0, u16 *, 4);
                temp_v0 = func_00223E00(temp_s1);
                temp_a0 = temp_s1 & 0xFFFF;
                if ((temp_a0 >= 0x11F5) && (temp_a0 < 0x12A6)) {
                    M2C_FIELD(temp_v0, u8 *, 6) = (u8) ((M2C_FIELD(temp_v0, u8 *, 6) & ~0x3F) | (0 & 0x3F));
                }
                var_s0 += 6;
            } while (M2C_FIELD(var_s0, u16 *, 4) != 0);
        }
        var_s7 = 0;
        do {
            temp_s6 = func_002260F0(var_s7);
            var_s5 = 0;
            var_a0 = 0;
loop_9:
            if (M2C_FIELD((temp_s6 + ((var_a0 & 0xFF) * 0x16)), u16 *, 0x1E4) != 0) {
                var_s5 = (var_s5 + 1) & 0xFF;
            }
            var_a0 = (var_a0 + 1) & 0xFF;
            if (var_a0 < 0x20) {
                goto loop_9;
            }
            var_s0_2 = 0x1F;
            var_s2 = temp_s6 + 0x2AA;
loop_13:
            temp_s4 = M2C_FIELD(var_s2, u16 *, 0x1E4);
            if (temp_s4 != 0) {
                if ((*(u8 *)D_00591C09) != 4) {
                    var_a0_2 = 0;
                } else if (temp_s4 == 0) {
                    var_a0_2 = 0;
                } else {
                    var_s3 = 0;
                    if ((*(u16 *)D_009C0190) != 0) {
                        var_s1 = ((void *)D_009C0190);
loop_20:
                        if ((temp_s4 == *var_s1) && ((func_00221340(temp_s4, 3, 1) & 0xFFFF) == 0xFFFF)) {
                            var_a0_2 = M2C_FIELD((((void *)D_009C0190) + (var_s3 * 6)), u16 *, 4);
                        } else {
                            var_s1 += 6;
                            var_s3 += 1;
                            if (*var_s1 == 0) {
                                goto block_25;
                            }
                            goto loop_20;
                        }
                    } else {
block_25:
                        var_a0_2 = 0;
                    }
                }
                temp_s1_2 = var_a0_2 & 0xFFFF;
                if (temp_s1_2 != 0) {
                    var_s5 = (var_s5 - 1) & 0xFF;
                    if (var_s5 < 0x10) {
                        M2C_FIELD(var_s2, u16 *, 0x1E4) = var_a0_2;
                        temp_v0_2 = func_00223E00(var_a0_2);
                        if ((temp_s1_2 >= 0x11F5) && (temp_s1_2 < 0x12A6)) {
                            M2C_FIELD(temp_v0_2, u8 *, 6) = (u8) ((M2C_FIELD(temp_v0_2, u8 *, 6) & ~0x3F) | 2);
                        }
                    } else {
                        M2C_FIELD(var_s2, u16 *, 0x1E4) = 0U;
                        M2C_FIELD(var_s2, s8 *, 0x1E7) = 0xFF;
                    }
                }
            }
            var_s0_2 -= 1;
            var_s2 -= 0x16;
            if (var_s0_2 >= 0) {
                goto loop_13;
            }
            var_a2 = 0;
loop_35:
            var_a4 = var_a2 & 0xFF;
            var_a3 = M2C_FIELD((temp_s6 + (var_a4 * 0x16)), u16 *, 0x1E4);
            if (var_a3 == 0) {
                var_a3_2 = var_a4 + 1;
                if (var_a3_2 < 0x20) {
                    temp_a5 = 0x20 - var_a3_2;
                    if (temp_a5 >= 9) {
                        var_a7 = 0;
                        var_a6 = 0;
                        var_a4 = 0;
                        if ((var_a3_2 < 0x21) && (var_a3_2 < 0x7FFFFFFF)) {
                            var_a4 = 1;
                        }
                        if ((var_a4 != 0) && (var_a3_2 != 0x80000000)) {
                            var_a6 = 1;
                        }
                        if (var_a6 != 0) {
                            var_a4 = -var_a3_2 & 0x80000000;
                            var_a6_2 = 1;
                            if (var_a4 == 0) {
                                var_a4 = temp_a5 & 0x80000000;
                                if (var_a4 != 0) {
                                    var_a6_2 = 0;
                                }
                            }
                            if (var_a6_2 != 0) {
                                var_a7 = 1;
                            }
                        }
                        if (var_a7 != 0) {
                            var_a4 = temp_s6 + (var_a3_2 * 0x16);
                            do {
                                var_t0 = var_a4 + 0x1E4;
                                var_a7_2 = var_a4 + 0x1CE;
                                var_a6_3 = 0xB;
loop_53:
                                var_a6_3 -= 1;
                                *var_a7_2 = *var_t0;
                                var_t0 += 2;
                                var_a7_2 += 2;
                                if (var_a6_3 > 0) {
                                    goto loop_53;
                                }
                                var_t0_2 = var_a4 + 0x1FA;
                                var_a7_3 = var_a4 + 0x1E4;
                                var_a6_4 = 0xB;
loop_55:
                                var_a6_4 -= 1;
                                *var_a7_3 = *var_t0_2;
                                var_t0_2 += 2;
                                var_a7_3 += 2;
                                if (var_a6_4 > 0) {
                                    goto loop_55;
                                }
                                var_t0_3 = var_a4 + 0x210;
                                var_a7_4 = var_a4 + 0x1FA;
                                var_a6_5 = 0xB;
loop_57:
                                var_a6_5 -= 1;
                                *var_a7_4 = *var_t0_3;
                                var_t0_3 += 2;
                                var_a7_4 += 2;
                                if (var_a6_5 > 0) {
                                    goto loop_57;
                                }
                                var_t0_4 = var_a4 + 0x226;
                                var_a7_5 = var_a4 + 0x210;
                                var_a6_6 = 0xB;
loop_59:
                                var_a6_6 -= 1;
                                *var_a7_5 = *var_t0_4;
                                var_t0_4 += 2;
                                var_a7_5 += 2;
                                if (var_a6_6 > 0) {
                                    goto loop_59;
                                }
                                var_t0_5 = var_a4 + 0x23C;
                                var_a7_6 = var_a4 + 0x226;
                                var_a6_7 = 0xB;
loop_61:
                                var_a6_7 -= 1;
                                *var_a7_6 = *var_t0_5;
                                var_t0_5 += 2;
                                var_a7_6 += 2;
                                if (var_a6_7 > 0) {
                                    goto loop_61;
                                }
                                var_t0_6 = var_a4 + 0x252;
                                var_a7_7 = var_a4 + 0x23C;
                                var_a6_8 = 0xB;
loop_63:
                                var_a6_8 -= 1;
                                *var_a7_7 = *var_t0_6;
                                var_t0_6 += 2;
                                var_a7_7 += 2;
                                if (var_a6_8 > 0) {
                                    goto loop_63;
                                }
                                var_t0_7 = var_a4 + 0x268;
                                var_a7_8 = var_a4 + 0x252;
                                var_a6_9 = 0xB;
loop_65:
                                var_a6_9 -= 1;
                                *var_a7_8 = *var_t0_7;
                                var_t0_7 += 2;
                                var_a7_8 += 2;
                                if (var_a6_9 > 0) {
                                    goto loop_65;
                                }
                                var_t0_8 = var_a4 + 0x27E;
                                var_a7_9 = var_a4 + 0x268;
                                var_a6_10 = 0xB;
loop_67:
                                var_a6_10 -= 1;
                                *var_a7_9 = *var_t0_8;
                                var_t0_8 += 2;
                                var_a7_9 += 2;
                                if (var_a6_10 > 0) {
                                    goto loop_67;
                                }
                                var_a3_2 += 8;
                                var_a4 += 0xB0;
                            } while (var_a3_2 < 0x18);
                        }
                    }
                    if (var_a3_2 < 0x20) {
                        var_t0_9 = temp_s6 + (var_a3_2 * 0x16);
                        do {
                            var_a7_10 = var_t0_9 + 0x1E4;
                            var_a6_11 = var_t0_9 + 0x1CE;
                            var_a5 = 0xB;
loop_73:
                            var_a5 -= 1;
                            *var_a6_11 = *var_a7_10;
                            var_a7_10 += 2;
                            var_a6_11 += 2;
                            if (var_a5 > 0) {
                                goto loop_73;
                            }
                            var_a3_2 += 1;
                            var_a4 = var_a3_2 < 0x20;
                            var_t0_9 += 0x16;
                        } while (var_a4 != 0);
                    }
                }
                var_a2 = (var_a2 + 1) & 0xFF;
                var_a3 = var_a2 < 0x20;
                if (var_a3 == 0) {

                } else {
                    goto loop_35;
                }
            }
            var_a1 = 0;
loop_79:
            temp_a0_2 = temp_s6 + (var_a1 & 0xFF);
            M2C_FIELD(temp_a0_2, s8 *, 0x4B1) = var_a1;
            M2C_FIELD(temp_a0_2, s8 *, 0x4B2) = (s8) (var_a1 + 1);
            M2C_FIELD(temp_a0_2, s8 *, 0x4B3) = (s8) (var_a1 + 2);
            M2C_FIELD(temp_a0_2, s8 *, 0x4B4) = (s8) (var_a1 + 3);
            M2C_FIELD(temp_a0_2, s8 *, 0x4B5) = (s8) (var_a1 + 4);
            M2C_FIELD(temp_a0_2, s8 *, 0x4B6) = (s8) (var_a1 + 5);
            M2C_FIELD(temp_a0_2, s8 *, 0x4B7) = (s8) (var_a1 + 6);
            temp_v1 = var_a1 + 7;
            var_a1 = (var_a1 + 8) & 0xFF;
            M2C_FIELD(temp_a0_2, s8 *, 0x4B8) = temp_v1;
            if (var_a1 < 0x20) {
                goto loop_79;
            }
            var_s7 = (var_s7 + 1) & 0xFF;
        } while (var_s7 < 0x48);
        func_0096DD30(temp_a0_2, var_a1, var_a2, var_a3, var_a4);
    }
}
