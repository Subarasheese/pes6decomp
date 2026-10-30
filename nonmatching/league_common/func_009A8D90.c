/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00229DF0(void);
s32 func_00225B20(u8);                              /* extern */
s32 func_0099B630(M2C_UNK);                         /* extern */
M2C_UNK func_009A8950(u8, u8, s32, M2C_UNK, u8 *, M2C_UNK); /* extern */
M2C_UNK func_009A8AF0(u8, u8, u8 *, void *);        /* extern */
extern void *D_003EA9A0;

void func_009A8D90(void) {
    u8 sp78;
    u8 sp79;
    u8 sp7A;
    u8 sp7B;
    u8 sp7C;
    u8 sp7D;
    u8 sp7E;
    u8 sp7F;
    u8 sp80;
    u8 sp81;
    u8 sp82;
    u8 sp83;
    u8 sp84;
    u8 sp85;
    u8 sp86;
    u8 sp87;
    u8 sp88;
    u8 sp89;
    u8 sp8A;
    u8 sp8B;
    u8 sp8C;
    u8 sp8D;
    u8 sp8E;
    u8 sp8F;
    s32 var_a2;
    s32 var_a3;
    s32 var_s0;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s2_3;
    s32 var_s2_4;
    s32 var_s2_5;
    s32 var_s2_6;
    s32 var_s3_2;
    s32 var_s3_3;
    s32 var_s3_4;
    s32 var_s3_5;
    s32 var_s3_6;
    s32 var_v0_2;
    s32 var_v0_4;
    s32 var_v0_5;
    s32 var_v0_7;
    s32 var_v0_8;
    s32 var_v1;
    s8 var_a0;
    s8 var_a0_2;
    s8 var_a0_3;
    s8 var_a0_4;
    s8 var_a0_5;
    s8 var_a1_2;
    s8 var_s3;
    s8 var_v0;
    u8 temp_s0;
    u8 temp_s2_3;
    u8 temp_s2_4;
    u8 temp_s2_5;
    u8 temp_s3;
    u8 temp_s4;
    u8 temp_s4_2;
    u8 temp_s4_3;
    u8 temp_s4_4;
    u8 temp_s4_5;
    u8 temp_s4_6;
    u8 temp_s5;
    u8 temp_s5_2;
    u8 temp_s5_3;
    u8 temp_s5_4;
    u8 temp_s5_5;
    u8 temp_v1_2;
    u8 temp_v1_3;
    u8 var_v0_3;
    u8 var_v0_6;
    void *temp_s0_2;
    void *temp_s1;
    void *temp_s2;
    void *temp_s2_2;
    void *temp_s2_6;
    void *temp_s2_7;
    void *temp_s2_8;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *temp_v0_5;
    void *temp_v0_6;
    void *temp_v1;
    void *temp_v1_4;
    void *var_a1;

    temp_s1 = D_003EA9A0;
    if (temp_s1 != NULL) {
        temp_v0 = func_00229DF0();
        M2C_FIELD(temp_s1, u8 *, 0xC9B) = 0U;
        M2C_FIELD(temp_s1, s8 *, 0xC9C) = 0;
        var_a3 = 0;
        var_a1 = temp_s1;
        do {
            M2C_FIELD(var_a1, s8 *, 0x773) = 2;
            var_a2 = 0;
            M2C_FIELD(var_a1, s8 *, 0x774) = 0;
            M2C_FIELD(var_a1, s8 *, 0x775) = 0;
            M2C_FIELD(var_a1, s8 *, 0x7BE) = 0;
loop_3:
            temp_v1 = var_a1 + var_a2;
            M2C_FIELD(temp_v1, s8 *, 0x776) = 0;
            var_a2 += 8;
            M2C_FIELD(temp_v1, s8 *, 0x7BF) = 0;
            M2C_FIELD(temp_v1, s8 *, 0x807) = 0;
            M2C_FIELD(temp_v1, s8 *, 0x777) = 0;
            M2C_FIELD(temp_v1, s8 *, 0x7C0) = 0;
            M2C_FIELD(temp_v1, s8 *, 0x808) = 0;
            M2C_FIELD(temp_v1, s8 *, 0x778) = 0;
            M2C_FIELD(temp_v1, s8 *, 0x7C1) = 0;
            M2C_FIELD(temp_v1, s8 *, 0x809) = 0;
            M2C_FIELD(temp_v1, s8 *, 0x779) = 0;
            M2C_FIELD(temp_v1, s8 *, 0x7C2) = 0;
            M2C_FIELD(temp_v1, s8 *, 0x80A) = 0;
            M2C_FIELD(temp_v1, s8 *, 0x77A) = 0;
            M2C_FIELD(temp_v1, s8 *, 0x7C3) = 0;
            M2C_FIELD(temp_v1, s8 *, 0x80B) = 0;
            M2C_FIELD(temp_v1, s8 *, 0x77B) = 0;
            M2C_FIELD(temp_v1, s8 *, 0x7C4) = 0;
            M2C_FIELD(temp_v1, s8 *, 0x80C) = 0;
            M2C_FIELD(temp_v1, s8 *, 0x77C) = 0;
            M2C_FIELD(temp_v1, s8 *, 0x7C5) = 0;
            M2C_FIELD(temp_v1, s8 *, 0x80D) = 0;
            M2C_FIELD(temp_v1, s8 *, 0x77D) = 0;
            M2C_FIELD(temp_v1, s8 *, 0x7C6) = 0;
            M2C_FIELD(temp_v1, s8 *, 0x80E) = 0;
            if (var_a2 < 0x48) {
                goto loop_3;
            }
            var_a3 += 1;
            var_a1 += 0xDC;
        } while (var_a3 < 6);
        temp_v1_2 = M2C_FIELD(temp_v0, u8 *, 7);
        switch (temp_v1_2) {                        /* irregular */
        case 0:
            temp_v1_3 = M2C_FIELD(temp_v0, u8 *, 6);
            var_s3 = -1;
            if (temp_v1_3 == 0) {
                var_s3 = 0;
            } else {
                var_v0 = 1;
                if (temp_v1_3 != 1) {
                    var_v0 = 2;
                    if (temp_v1_3 != 2) {
                        var_v0 = 3;
                        if (temp_v1_3 == 3) {
                            goto block_19;
                        }
                    } else {
                        goto block_19;
                    }
                } else {
block_19:
                    var_s3 = var_v0;
                }
            }
            if (var_s3 >= 0) {
                func_009A8AF0(0U, var_s3 & 0xFF, &sp8E, NULL);
                var_s2 = 0;
                if ((s32) sp8E > 0) {
loop_22:
                    func_009A8950(0U, var_s3 & 0xFF, var_s2, 0, &sp8F, 0);
                    if (func_00225B20(sp8F) != 1) {
                        var_s2 = (var_s2 + 1) & 0xFF;
                        if (var_s2 >= (s32) sp8E) {
                            goto block_28;
                        }
                        goto loop_22;
                    }
                    var_v0_2 = var_s2 & 0xFF;
                } else {
block_28:
                    var_v0_2 = 0xFF;
                }
                if ((var_v0_2 & 0xFF) != 0xFF) {
                    temp_v0_2 = temp_s1 + (M2C_FIELD(temp_s1, u8 *, 0xC9B) * 0xDC);
                    temp_s2 = temp_v0_2 + 0x773;
                    if (temp_s2 != NULL) {
                        M2C_FIELD(temp_v0_2, u8 *, 0x773) = 0U;
                        M2C_FIELD(temp_s2, s8 *, 1) = var_s3;
                        func_009A8AF0(M2C_FIELD(temp_v0_2, u8 *, 0x773), (u8) M2C_FIELD(temp_s2, s8 *, 1), temp_s2 + 2, temp_s2 + 3);
                        temp_s4 = (u8) M2C_FIELD(temp_s2, s8 *, 1);
                        temp_s5 = M2C_FIELD(temp_v0_2, u8 *, 0x773);
                        func_009A8AF0(temp_s5, temp_s4, &sp82, NULL);
                        var_s3_2 = 0;
                        if ((s32) sp82 > 0) {
loop_32:
                            func_009A8950(temp_s5, temp_s4, var_s3_2, 0, &sp83, 0);
                            if (func_00225B20(sp83) != 1) {
                                var_s3_2 = (var_s3_2 + 1) & 0xFF;
                                if (var_s3_2 >= (s32) sp82) {
                                    goto block_38;
                                }
                                goto loop_32;
                            }
                            var_a0 = var_s3_2 & 0xFF;
                        } else {
block_38:
                            var_a0 = 0xFF;
                        }
                        if ((var_a0 & 0xFF) != 0xFF) {
                            M2C_FIELD(temp_s2, s8 *, 0x4B) = var_a0;
                        }
                    }
                    var_v0_3 = M2C_FIELD(temp_s1, u8 *, 0xC9B) + 1;
block_63:
                    M2C_FIELD(temp_s1, u8 *, 0xC9B) = var_v0_3;
                }
            }
            break;
        case 1:
            func_009A8AF0(0U, 4U, &sp8C, NULL);
            var_s2_2 = 0;
            if ((s32) sp8C > 0) {
loop_44:
                func_009A8950(0U, 4U, var_s2_2, 0, &sp8D, 0);
                if (func_00225B20(sp8D) != 1) {
                    var_s2_2 = (var_s2_2 + 1) & 0xFF;
                    if (var_s2_2 >= (s32) sp8C) {
                        goto block_50;
                    }
                    goto loop_44;
                }
                var_v0_4 = var_s2_2 & 0xFF;
            } else {
block_50:
                var_v0_4 = 0xFF;
            }
            if ((var_v0_4 & 0xFF) != 0xFF) {
                temp_v0_3 = temp_s1 + (M2C_FIELD(temp_s1, u8 *, 0xC9B) * 0xDC);
                temp_s2_2 = temp_v0_3 + 0x773;
                if (temp_s2_2 != NULL) {
                    M2C_FIELD(temp_v0_3, u8 *, 0x773) = 0U;
                    M2C_FIELD(temp_s2_2, u8 *, 1) = 4U;
                    func_009A8AF0(M2C_FIELD(temp_v0_3, u8 *, 0x773), M2C_FIELD(temp_s2_2, u8 *, 1), temp_s2_2 + 2, temp_s2_2 + 3);
                    temp_s4_2 = M2C_FIELD(temp_s2_2, u8 *, 1);
                    temp_s5_2 = M2C_FIELD(temp_v0_3, u8 *, 0x773);
                    func_009A8AF0(temp_s5_2, temp_s4_2, &sp80, NULL);
                    var_s3_3 = 0;
                    if ((s32) sp80 > 0) {
loop_54:
                        func_009A8950(temp_s5_2, temp_s4_2, var_s3_3, 0, &sp81, 0);
                        if (func_00225B20(sp81) != 1) {
                            var_s3_3 = (var_s3_3 + 1) & 0xFF;
                            if (var_s3_3 >= (s32) sp80) {
                                goto block_59;
                            }
                            goto loop_54;
                        }
                        var_a0_2 = var_s3_3 & 0xFF;
                    } else {
block_59:
                        var_a0_2 = 0xFF;
                    }
                    if ((var_a0_2 & 0xFF) != 0xFF) {
                        M2C_FIELD(temp_s2_2, s8 *, 0x4B) = var_a0_2;
                    }
                }
                var_v0_3 = M2C_FIELD(temp_s1, u8 *, 0xC9B) + 1;
                goto block_63;
            }
            break;
        }
        temp_s2_3 = M2C_FIELD(temp_v0, u8 *, 3);
        if ((s32) temp_s2_3 < (func_0099B630(8) & 0xFF)) {
            temp_s2_4 = M2C_FIELD(temp_v0, u8 *, 3);
            if ((s32) temp_s2_4 < (func_0099B630(7) & 0xFF)) {
                temp_s2_5 = M2C_FIELD(temp_v0, u8 *, 3);
                if ((s32) temp_s2_5 >= (func_0099B630(6) & 0xFF)) {
                    func_009A8AF0(1U, 5U, &sp86, NULL);
                    var_s2_3 = 0;
                    if ((s32) sp86 > 0) {
loop_113:
                        func_009A8950(1U, 5U, var_s2_3, 0, &sp87, 0);
                        if (func_00225B20(sp87) != 1) {
                            var_s2_3 = (var_s2_3 + 1) & 0xFF;
                            if (var_s2_3 >= (s32) sp86) {
                                goto block_119;
                            }
                            goto loop_113;
                        }
                        var_v0_5 = var_s2_3 & 0xFF;
                    } else {
block_119:
                        var_v0_5 = 0xFF;
                    }
                    if ((var_v0_5 & 0xFF) != 0xFF) {
                        temp_v0_4 = temp_s1 + (M2C_FIELD(temp_s1, u8 *, 0xC9B) * 0xDC);
                        temp_s2_6 = temp_v0_4 + 0x773;
                        if (temp_s2_6 != NULL) {
                            M2C_FIELD(temp_v0_4, u8 *, 0x773) = 1U;
                            M2C_FIELD(temp_s2_6, u8 *, 1) = 5U;
                            func_009A8AF0(M2C_FIELD(temp_v0_4, u8 *, 0x773), M2C_FIELD(temp_s2_6, u8 *, 1), temp_s2_6 + 2, temp_s2_6 + 3);
                            temp_s4_3 = M2C_FIELD(temp_s2_6, u8 *, 1);
                            temp_s5_3 = M2C_FIELD(temp_v0_4, u8 *, 0x773);
                            func_009A8AF0(temp_s5_3, temp_s4_3, &sp7A, NULL);
                            var_s3_4 = 0;
                            if ((s32) sp7A > 0) {
loop_123:
                                func_009A8950(temp_s5_3, temp_s4_3, var_s3_4, 0, &sp7B, 0);
                                if (func_00225B20(sp7B) != 1) {
                                    var_s3_4 = (var_s3_4 + 1) & 0xFF;
                                    if (var_s3_4 >= (s32) sp7A) {
                                        goto block_129;
                                    }
                                    goto loop_123;
                                }
                                var_a0_3 = var_s3_4 & 0xFF;
                            } else {
block_129:
                                var_a0_3 = 0xFF;
                            }
                            if ((var_a0_3 & 0xFF) != 0xFF) {
                                M2C_FIELD(temp_s2_6, s8 *, 0x4B) = var_a0_3;
                            }
                        }
                        var_v0_6 = M2C_FIELD(temp_s1, u8 *, 0xC9B) + 1;
                        goto block_133;
                    }
                }
            } else {
                func_009A8AF0(1U, 9U, &sp88, NULL);
                var_s2_4 = 0;
                if ((s32) sp88 > 0) {
loop_91:
                    func_009A8950(1U, 9U, var_s2_4, 0, &sp89, 0);
                    if (func_00225B20(sp89) != 1) {
                        var_s2_4 = (var_s2_4 + 1) & 0xFF;
                        if (var_s2_4 >= (s32) sp88) {
                            goto block_97;
                        }
                        goto loop_91;
                    }
                    var_v0_7 = var_s2_4 & 0xFF;
                } else {
block_97:
                    var_v0_7 = 0xFF;
                }
                if ((var_v0_7 & 0xFF) != 0xFF) {
                    temp_v0_5 = temp_s1 + (M2C_FIELD(temp_s1, u8 *, 0xC9B) * 0xDC);
                    temp_s2_7 = temp_v0_5 + 0x773;
                    if (temp_s2_7 != NULL) {
                        M2C_FIELD(temp_v0_5, u8 *, 0x773) = 1U;
                        M2C_FIELD(temp_s2_7, u8 *, 1) = 9U;
                        func_009A8AF0(M2C_FIELD(temp_v0_5, u8 *, 0x773), M2C_FIELD(temp_s2_7, u8 *, 1), temp_s2_7 + 2, temp_s2_7 + 3);
                        temp_s4_4 = M2C_FIELD(temp_s2_7, u8 *, 1);
                        temp_s5_4 = M2C_FIELD(temp_v0_5, u8 *, 0x773);
                        func_009A8AF0(temp_s5_4, temp_s4_4, &sp7C, NULL);
                        var_s3_5 = 0;
                        if ((s32) sp7C > 0) {
loop_101:
                            func_009A8950(temp_s5_4, temp_s4_4, var_s3_5, 0, &sp7D, 0);
                            if (func_00225B20(sp7D) != 1) {
                                var_s3_5 = (var_s3_5 + 1) & 0xFF;
                                if (var_s3_5 >= (s32) sp7C) {
                                    goto block_107;
                                }
                                goto loop_101;
                            }
                            var_a0_4 = var_s3_5 & 0xFF;
                        } else {
block_107:
                            var_a0_4 = 0xFF;
                        }
                        if ((var_a0_4 & 0xFF) != 0xFF) {
                            M2C_FIELD(temp_s2_7, s8 *, 0x4B) = var_a0_4;
                        }
                    }
                    var_v0_6 = M2C_FIELD(temp_s1, u8 *, 0xC9B) + 1;
                    goto block_133;
                }
            }
        } else {
            func_009A8AF0(0U, 6U, &sp8A, NULL);
            var_s2_5 = 0;
            if ((s32) sp8A > 0) {
loop_68:
                func_009A8950(0U, 6U, var_s2_5, 0, &sp8B, 0);
                if (func_00225B20(sp8B) != 1) {
                    var_s2_5 = (var_s2_5 + 1) & 0xFF;
                    if (var_s2_5 >= (s32) sp8A) {
                        goto block_74;
                    }
                    goto loop_68;
                }
                var_v0_8 = var_s2_5 & 0xFF;
            } else {
block_74:
                var_v0_8 = 0xFF;
            }
            if ((var_v0_8 & 0xFF) != 0xFF) {
                temp_v0_6 = temp_s1 + (M2C_FIELD(temp_s1, u8 *, 0xC9B) * 0xDC);
                temp_s2_8 = temp_v0_6 + 0x773;
                if (temp_s2_8 != NULL) {
                    M2C_FIELD(temp_v0_6, u8 *, 0x773) = 0U;
                    M2C_FIELD(temp_s2_8, u8 *, 1) = 6U;
                    func_009A8AF0(M2C_FIELD(temp_v0_6, u8 *, 0x773), M2C_FIELD(temp_s2_8, u8 *, 1), temp_s2_8 + 2, temp_s2_8 + 3);
                    temp_s4_5 = M2C_FIELD(temp_s2_8, u8 *, 1);
                    temp_s5_5 = M2C_FIELD(temp_v0_6, u8 *, 0x773);
                    func_009A8AF0(temp_s5_5, temp_s4_5, &sp7E, NULL);
                    var_s3_6 = 0;
                    if ((s32) sp7E > 0) {
loop_78:
                        func_009A8950(temp_s5_5, temp_s4_5, var_s3_6, 0, &sp7F, 0);
                        if (func_00225B20(sp7F) != 1) {
                            var_s3_6 = (var_s3_6 + 1) & 0xFF;
                            if (var_s3_6 >= (s32) sp7E) {
                                goto block_83;
                            }
                            goto loop_78;
                        }
                        var_a0_5 = var_s3_6 & 0xFF;
                    } else {
block_83:
                        var_a0_5 = 0xFF;
                    }
                    if ((var_a0_5 & 0xFF) != 0xFF) {
                        M2C_FIELD(temp_s2_8, s8 *, 0x4B) = var_a0_5;
                    }
                }
                var_v0_6 = M2C_FIELD(temp_s1, u8 *, 0xC9B) + 1;
block_133:
                M2C_FIELD(temp_s1, u8 *, 0xC9B) = var_v0_6;
            }
        }
        temp_s0 = M2C_FIELD(temp_v0, u8 *, 3);
        if ((s32) temp_s0 >= (func_0099B630(9) & 0xFF)) {
            func_009A8AF0(0U, 5U, &sp84, NULL);
            var_s0 = 0;
            if ((s32) sp84 > 0) {
loop_136:
                func_009A8950(0U, 5U, var_s0, 0, &sp85, 0);
                if (func_00225B20(sp85) != 1) {
                    var_s0 = (var_s0 + 1) & 0xFF;
                    if (var_s0 >= (s32) sp84) {
                        goto block_142;
                    }
                    goto loop_136;
                }
                var_v1 = var_s0 & 0xFF;
            } else {
block_142:
                var_v1 = 0xFF;
            }
            if ((var_v1 & 0xFF) != 0xFF) {
                temp_v1_4 = temp_s1 + (M2C_FIELD(temp_s1, u8 *, 0xC9B) * 0xDC);
                temp_s0_2 = temp_v1_4 + 0x773;
                if (temp_s0_2 != NULL) {
                    M2C_FIELD(temp_v1_4, u8 *, 0x773) = 0U;
                    M2C_FIELD(temp_s0_2, u8 *, 1) = 5U;
                    func_009A8AF0(M2C_FIELD(temp_v1_4, u8 *, 0x773), M2C_FIELD(temp_s0_2, u8 *, 1), temp_s0_2 + 2, temp_s0_2 + 3);
                    temp_s3 = M2C_FIELD(temp_s0_2, u8 *, 1);
                    temp_s4_6 = M2C_FIELD(temp_v1_4, u8 *, 0x773);
                    func_009A8AF0(temp_s4_6, temp_s3, &sp78, NULL);
                    var_s2_6 = 0;
                    if ((s32) sp78 > 0) {
loop_146:
                        func_009A8950(temp_s4_6, temp_s3, var_s2_6, 0, &sp79, 0);
                        if (func_00225B20(sp79) != 1) {
                            var_s2_6 = (var_s2_6 + 1) & 0xFF;
                            if (var_s2_6 >= (s32) sp78) {
                                goto block_151;
                            }
                            goto loop_146;
                        }
                        var_a1_2 = var_s2_6 & 0xFF;
                    } else {
block_151:
                        var_a1_2 = 0xFF;
                    }
                    if ((var_a1_2 & 0xFF) != 0xFF) {
                        M2C_FIELD(temp_s0_2, s8 *, 0x4B) = var_a1_2;
                    }
                }
                M2C_FIELD(temp_s1, u8 *, 0xC9B) = (u8) (M2C_FIELD(temp_s1, u8 *, 0xC9B) + 1);
            }
        }
        M2C_FIELD(temp_s1, s8 *, 0x772) = 0;
        M2C_FIELD(temp_s1, s32 *, 0xCA0) = 0;
        M2C_FIELD(temp_s1, s16 *, 0xCA4) = 0;
        M2C_FIELD(temp_s1, s16 *, 0xCA6) = 0;
    }
}
