/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009A1D50(s32, s32);                        /* extern */
extern char D_00591A90[];
extern char D_00591E00[];

void func_009A1580(void) {
    s32 spA0;
    M2C_UNK *var_fp;
    s32 temp_a0;
    s32 temp_a3;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a3;
    s32 var_a4;
    s32 var_a4_2;
    s32 var_a4_3;
    s32 var_a4_4;
    s32 var_a4_5;
    s32 var_a4_6;
    s32 var_a4_7;
    s32 var_a4_8;
    s32 var_a4_9;
    s32 var_a5;
    s32 var_v1;
    s8 temp_a2;
    s8 temp_a2_2;
    s8 temp_a2_3;
    s8 temp_a2_4;
    s8 temp_a2_5;
    s8 temp_a2_6;
    s8 temp_a2_7;
    s8 temp_a2_8;
    s8 temp_v1_2;
    u8 var_a1;
    u8 var_s5;
    void *temp_s7;
    void *temp_v0;
    void *var_a0_2;
    void *var_a4_10;
    void *var_a5_10;
    void *var_a5_2;
    void *var_a5_3;
    void *var_a5_4;
    void *var_a5_5;
    void *var_a5_6;
    void *var_a5_7;
    void *var_a5_8;
    void *var_a5_9;
    void *var_a6;
    void *var_a6_2;
    void *var_a6_3;
    void *var_a6_4;
    void *var_a6_5;
    void *var_a6_6;
    void *var_a6_7;
    void *var_a6_8;
    void *var_a6_9;

    var_fp = ((void *)D_00591E00);
    spA0 = 0;
    do {
        var_s5 = M2C_FIELD(var_fp, u8 *, 0xF8);
        if ((s32) var_s5 < (var_s5 + M2C_FIELD(var_fp, u8 *, 0xF6))) {
            temp_s7 = ((void *)D_00591A90) + ((u8) spA0 * 0x8B);
            temp_v0 = ((void *)D_00591E00) + (u8) spA0;
            do {
                if (func_009A1D50(spA0, (s32) var_s5) != 0) {
                    var_s5 += 1;
                } else {
                    var_a1 = var_s5;
                    if ((s32) var_s5 < 6) {
                        temp_a3 = 6 - var_s5;
                        if (temp_a3 >= 9) {
                            var_v1 = 0;
                            var_a5 = 0;
                            var_a2 = 0;
                            var_a0 = 0;
                            if (((s32) var_s5 < 7) && ((s32) var_s5 < 0x7FFFFFFF)) {
                                var_a0 = 1;
                            }
                            if (var_a0 != 0) {
                                if (var_s5 != 0x80000000) {
                                    var_a2 = 1;
                                }
                            }
                            if (var_a2 != 0) {
                                var_a4 = 1;
                                if (!(-(s32) var_s5 & 0x80000000) && (temp_a3 & 0x80000000)) {
                                    var_a4 = 0;
                                }
                                if (var_a4 != 0) {
                                    var_a5 = 1;
                                }
                            }
                            if (var_a5 != 0) {
                                temp_a0 = temp_a3 & 0x80000000;
                                var_a2_2 = 1;
                                if ((temp_a0 == 0) && (temp_a0 != 0)) {
                                    var_a2_2 = 0;
                                }
                                if (var_a2_2 != 0) {
                                    var_v1 = 1;
                                }
                            }
                            if (var_v1 != 0) {
                                var_a0_2 = temp_s7 + (var_s5 * 8);
                                do {
                                    var_a6 = var_a0_2 + 0x5A;
                                    var_a5_2 = var_a0_2 + 0x52;
                                    var_a4_2 = 4;
loop_33:
                                    var_a4_2 -= 1;
                                    temp_a2 = M2C_FIELD(var_a6, s8 *, 1);
                                    M2C_FIELD(var_a5_2, s8 *, 0) = (s8) M2C_FIELD(var_a6, s8 *, 0);
                                    var_a6 += 2;
                                    M2C_FIELD(var_a5_2, s8 *, 1) = temp_a2;
                                    var_a5_2 += 2;
                                    if (var_a4_2 > 0) {
                                        goto loop_33;
                                    }
                                    var_a6_2 = var_a0_2 + 0x62;
                                    var_a5_3 = var_a0_2 + 0x5A;
                                    var_a4_3 = 4;
loop_35:
                                    var_a4_3 -= 1;
                                    temp_a2_2 = M2C_FIELD(var_a6_2, s8 *, 1);
                                    M2C_FIELD(var_a5_3, s8 *, 0) = (s8) M2C_FIELD(var_a6_2, s8 *, 0);
                                    var_a6_2 += 2;
                                    M2C_FIELD(var_a5_3, s8 *, 1) = temp_a2_2;
                                    var_a5_3 += 2;
                                    if (var_a4_3 > 0) {
                                        goto loop_35;
                                    }
                                    var_a6_3 = var_a0_2 + 0x6A;
                                    var_a5_4 = var_a0_2 + 0x62;
                                    var_a4_4 = 4;
loop_37:
                                    var_a4_4 -= 1;
                                    temp_a2_3 = M2C_FIELD(var_a6_3, s8 *, 1);
                                    M2C_FIELD(var_a5_4, s8 *, 0) = (s8) M2C_FIELD(var_a6_3, s8 *, 0);
                                    var_a6_3 += 2;
                                    M2C_FIELD(var_a5_4, s8 *, 1) = temp_a2_3;
                                    var_a5_4 += 2;
                                    if (var_a4_4 > 0) {
                                        goto loop_37;
                                    }
                                    var_a6_4 = var_a0_2 + 0x72;
                                    var_a5_5 = var_a0_2 + 0x6A;
                                    var_a4_5 = 4;
loop_39:
                                    var_a4_5 -= 1;
                                    temp_a2_4 = M2C_FIELD(var_a6_4, s8 *, 1);
                                    M2C_FIELD(var_a5_5, s8 *, 0) = (s8) M2C_FIELD(var_a6_4, s8 *, 0);
                                    var_a6_4 += 2;
                                    M2C_FIELD(var_a5_5, s8 *, 1) = temp_a2_4;
                                    var_a5_5 += 2;
                                    if (var_a4_5 > 0) {
                                        goto loop_39;
                                    }
                                    var_a6_5 = var_a0_2 + 0x7A;
                                    var_a5_6 = var_a0_2 + 0x72;
                                    var_a4_6 = 4;
loop_41:
                                    var_a4_6 -= 1;
                                    temp_a2_5 = M2C_FIELD(var_a6_5, s8 *, 1);
                                    M2C_FIELD(var_a5_6, s8 *, 0) = (s8) M2C_FIELD(var_a6_5, s8 *, 0);
                                    var_a6_5 += 2;
                                    M2C_FIELD(var_a5_6, s8 *, 1) = temp_a2_5;
                                    var_a5_6 += 2;
                                    if (var_a4_6 > 0) {
                                        goto loop_41;
                                    }
                                    var_a6_6 = var_a0_2 + 0x82;
                                    var_a5_7 = var_a0_2 + 0x7A;
                                    var_a4_7 = 4;
loop_43:
                                    var_a4_7 -= 1;
                                    temp_a2_6 = M2C_FIELD(var_a6_6, s8 *, 1);
                                    M2C_FIELD(var_a5_7, s8 *, 0) = (s8) M2C_FIELD(var_a6_6, s8 *, 0);
                                    var_a6_6 += 2;
                                    M2C_FIELD(var_a5_7, s8 *, 1) = temp_a2_6;
                                    var_a5_7 += 2;
                                    if (var_a4_7 > 0) {
                                        goto loop_43;
                                    }
                                    var_a6_7 = var_a0_2 + 0x8A;
                                    var_a5_8 = var_a0_2 + 0x82;
                                    var_a4_8 = 4;
loop_45:
                                    var_a4_8 -= 1;
                                    temp_a2_7 = M2C_FIELD(var_a6_7, s8 *, 1);
                                    M2C_FIELD(var_a5_8, s8 *, 0) = (s8) M2C_FIELD(var_a6_7, s8 *, 0);
                                    var_a6_7 += 2;
                                    M2C_FIELD(var_a5_8, s8 *, 1) = temp_a2_7;
                                    var_a5_8 += 2;
                                    if (var_a4_8 > 0) {
                                        goto loop_45;
                                    }
                                    var_a6_8 = var_a0_2 + 0x92;
                                    var_a5_9 = var_a0_2 + 0x8A;
                                    var_a4_9 = 4;
loop_47:
                                    var_a4_9 -= 1;
                                    temp_a2_8 = M2C_FIELD(var_a6_8, s8 *, 1);
                                    M2C_FIELD(var_a5_9, s8 *, 0) = (s8) M2C_FIELD(var_a6_8, s8 *, 0);
                                    var_a6_8 += 2;
                                    M2C_FIELD(var_a5_9, s8 *, 1) = temp_a2_8;
                                    var_a5_9 += 2;
                                    if (var_a4_9 > 0) {
                                        goto loop_47;
                                    }
                                    var_a1 += 8;
                                    var_a0_2 += 0x40;
                                } while ((s32) var_a1 < -2);
                            }
                        }
                        if ((s32) var_a1 < 6) {
                            var_a6_9 = temp_s7 + (var_a1 * 8);
                            do {
                                var_a5_10 = var_a6_9 + 0x5A;
                                var_a4_10 = var_a6_9 + 0x52;
                                var_a3 = 4;
loop_52:
                                var_a3 -= 1;
                                temp_v1_2 = M2C_FIELD(var_a5_10, s8 *, 1);
                                M2C_FIELD(var_a4_10, s8 *, 0) = (s8) M2C_FIELD(var_a5_10, s8 *, 0);
                                var_a5_10 += 2;
                                M2C_FIELD(var_a4_10, s8 *, 1) = temp_v1_2;
                                var_a4_10 += 2;
                                if (var_a3 > 0) {
                                    goto loop_52;
                                }
                                var_a1 += 1;
                                var_a6_9 += 8;
                            } while ((s32) var_a1 < 6);
                        }
                    }
                    M2C_FIELD(temp_s7, s8 *, 0x82) = 0xFF;
                    M2C_FIELD(temp_s7, s8 *, 0x83) = 0xFF;
                    M2C_FIELD(temp_s7, s8 *, 0x84) = 0xFF;
                    M2C_FIELD(temp_s7, s8 *, 0x85) = 0xFF;
                    M2C_FIELD(temp_s7, s8 *, 0x86) = 0;
                    M2C_FIELD(temp_v0, u8 *, 0xF6) = (u8) (M2C_FIELD(temp_v0, u8 *, 0xF6) - 1);
                }
            } while ((s32) var_s5 < (M2C_FIELD(var_fp, u8 *, 0xF8) + M2C_FIELD(var_fp, u8 *, 0xF6)));
        }
        temp_v1 = spA0 + 1;
        spA0 = temp_v1;
        var_fp += 1;
    } while (temp_v1 < 2);
}
