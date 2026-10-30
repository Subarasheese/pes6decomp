/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00934230(void);
extern void * func_00934090(s32);
extern s32 func_00933490(s32);
extern void * func_00954560(s32);
extern s32 func_009341B0(void);
extern void * func_00936B90(void);
M2C_UNK func_001C4730(void *, void *, M2C_UNK);     /* extern */
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001C8590(void *, void *, M2C_UNK);     /* extern */
s8 func_00824B50();                                 /* extern */
s32 func_00824B60();                                /* extern */
s32 func_00828320(s32);                             /* extern */
s32 func_008283A0(s32);                             /* extern */
M2C_UNK func_00828420();                            /* extern */
s32 func_00828460();                                /* extern */
s32 func_008284A0();                                /* extern */
s32 func_008284D0();                                /* extern */
void *func_0082AE20(M2C_UNK, s32);                  /* extern */
s32 func_0082C2A0();                                /* extern */
void *func_008410B0();                              /* extern */
s32 func_00841100();                                /* extern */
M2C_UNK func_00842A90(M2C_UNK);                     /* extern */
extern char D_008A5F70[];
extern char D_008A6490[];
extern char D_008A6494[];

s32 func_0094D7C0(void) {
    s32 *temp_v0_2;
    s32 temp_fp;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_s4;
    s32 temp_s5;
    s32 temp_s5_2;
    s32 temp_s6;
    s32 temp_s7;
    s32 temp_s7_2;
    s32 temp_v0_3;
    s32 temp_v0_5;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a1;
    s32 var_s0;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s2;
    s32 var_s2_2;
    s32 var_s4;
    s32 var_s4_2;
    s8 *var_v0_4;
    s8 temp_s0_3;
    u16 *var_v0_2;
    u16 *var_v0_5;
    u16 var_v0_3;
    u16 var_v0_6;
    void *temp_a0;
    void *temp_s1;
    void *temp_s1_2;
    void *temp_s2_2;
    void *temp_v0;
    void *temp_v0_10;
    void *temp_v0_11;
    void *temp_v0_4;
    void *temp_v0_6;
    void *temp_v0_7;
    void *temp_v0_8;
    void *temp_v0_9;
    void *temp_v1;
    void *var_a1_2;
    void *var_s5;
    void *var_s5_2;
    void *var_v0;
    void *var_v1;

    temp_s0 = func_009341B0();
    temp_s6 = func_00828460();
    func_00828420();
    temp_s4 = func_008284D0();
    temp_s3 = func_008284A0();
    temp_s2 = func_0082C2A0();
    temp_v0 = func_00936B90();
    if (temp_v0 == NULL) {
        return 1;
    }
    if (temp_s2 == 0) {
        return 1;
    }
    if ((((void *)D_008A5F70) != NULL) && (temp_s4 != 0) && (temp_s3 != 0) && (temp_s6 != -1)) {
        if (temp_s0 != -1) {
            temp_v0_2 = func_00934230();
            if (temp_v0_2 != NULL) {
                if ((temp_v0 + 0x2BAC8) == NULL) {
                    return 1;
                }
                if ((temp_s2 + 0x5B18) != 0) {
                    var_s4 = 0;
loop_31:
                    if (var_s4 < temp_s0) {
                        temp_v0_3 = func_00933490(var_s4);
                        if (temp_v0_3 != 0) {
                            var_s1 = 0;
                            var_s2 = 0;
loop_26:
                            if (var_s2 < temp_s6) {
                                if (temp_v0_3 == func_008283A0(var_s2)) {
                                    var_s1 = 1;
                                }
                                var_s2 += 1;
                                goto loop_26;
                            }
                            if (var_s1 == 0) {
                                temp_v0_4 = func_00934090(var_s4);
                                if (temp_v0_4 != NULL) {
                                    func_001C48E8(temp_v0_4, 0, 0x118);
                                }
                            }
                        }
                        var_s4 += 1;
                        goto loop_31;
                    }
                    var_s0 = 0;
                    do {
                        temp_a0 = temp_v0_2 + (var_s0 * 0x118);
                        if (M2C_FIELD(temp_a0, s32 *, 4) == 0) {
                            var_a1 = var_s0;
loop_39:
                            if (var_a1 < 0x32) {
                                temp_v1 = temp_v0_2 + (var_a1 * 0x118);
                                if (M2C_FIELD(temp_v1, s32 *, 4) == 0) {
                                    var_a1 += 1;
                                    goto loop_39;
                                }
                                temp_s1 = temp_v1 + 4;
                                func_001C4730(temp_a0 + 4, temp_s1, 0x118);
                                func_001C48E8(temp_s1, 0, 0x118);
                            }
                        }
                        var_s0 += 1;
                    } while (var_s0 < 0x32);
                    *temp_v0_2 = 0;
                    var_a0 = 0;
                    do {
                        if (M2C_FIELD((temp_v0_2 + (var_a0 * 0x118)), s32 *, 4) != 0) {
                            *temp_v0_2 += 1;
                        }
                        var_a0 += 1;
                    } while (var_a0 < 0x32);
                    temp_fp = func_009341B0();
                    var_s4_2 = 0;
loop_142:
                    if (var_s4_2 < temp_s6) {
                        temp_v0_5 = func_008283A0(var_s4_2);
                        if ((temp_v0_5 != 0) && !(func_00828320(var_s4_2) & 0xFF)) {
                            var_s1_2 = 0;
                            var_s2_2 = 0;
loop_54:
                            if (var_s2_2 < temp_fp) {
                                if (temp_v0_5 == func_00933490(var_s2_2)) {
                                    var_s1_2 = 1;
                                }
                                var_s2_2 += 1;
                                goto loop_54;
                            }
                            if (var_s1_2 == 0) {
                                var_a0_2 = 0;
loop_138:
                                if (var_a0_2 < 0x32) {
                                    temp_s2_2 = temp_v0_2 + (var_a0_2 * 0x118);
                                    if (M2C_FIELD(temp_s2_2, s32 *, 4) != 0) {
                                        var_a0_2 += 1;
                                        goto loop_138;
                                    }
                                    temp_s1_2 = temp_s2_2 + 4;
                                    func_001C48E8(temp_s1_2, 0, 0x118);
                                    M2C_FIELD(temp_s2_2, s32 *, 4) = temp_v0_5;
                                    if (func_0082C2A0() == 0) {
                                        var_v0 = NULL;
                                    } else {
                                        var_v0 = func_00954560((*(s32 *)D_008A6490));
                                    }
                                    if (var_v0 != NULL) {
                                        func_001C8590(temp_s1_2 + 4, var_v0, 0x20);
                                    }
                                    temp_v0_6 = func_0082AE20(3, func_00824B60());
                                    if (temp_v0_6 != NULL) {
                                        M2C_FIELD(temp_s1_2, u16 *, 0x26) = (u16) M2C_FIELD(temp_v0_6, u16 *, 0x3E);
                                    }
                                    M2C_FIELD(temp_s1_2, s8 *, 0x49) = 3;
                                    if (func_0082C2A0() == 0) {
                                        var_a1_2 = NULL;
                                    } else {
                                        temp_s0_2 = (*(s32 *)D_008A6494);
                                        temp_s5 = func_0082C2A0();
                                        temp_v0_7 = func_00936B90();
                                        if (temp_v0_7 == NULL) {
                                            goto block_74;
                                        }
                                        if (temp_s5 != 0) {
                                            var_s5 = temp_v0_7 + 0xDC;
                                        } else {
block_74:
                                            var_s5 = NULL;
                                        }
                                        if (var_s5 == NULL) {
                                            var_v1 = NULL;
                                        } else if (temp_s0_2 < 0) {
                                            var_v1 = NULL;
                                        } else {
                                            temp_s7 = func_0082C2A0();
                                            temp_v0_8 = func_00936B90();
                                            if (temp_v0_8 == NULL) {
                                                goto block_85;
                                            }
                                            if (temp_s7 != 0) {
                                                var_v0_2 = temp_v0_8 + 0xDC;
                                            } else {
block_85:
                                                var_v0_2 = NULL;
                                            }
                                            if (var_v0_2 != NULL) {
                                                var_v0_3 = *var_v0_2;
                                            } else {
                                                var_v0_3 = 0;
                                            }
                                            if (temp_s0_2 < (var_v0_3 & 0xFFFF)) {
                                                var_v1 = var_s5 + (temp_s0_2 * 0x68) + 2;
                                            } else {
                                                var_v1 = NULL;
                                            }
                                        }
                                        if (var_v1 != NULL) {
                                            if (M2C_FIELD(var_v1, u8 *, 0x26) != 0) {
                                                var_a1_2 = var_v1 + 0x26;
                                            } else {
                                                var_a1_2 = NULL;
                                            }
                                        } else {
                                            var_a1_2 = NULL;
                                        }
                                    }
                                    if (var_a1_2 != NULL) {
                                        func_001C8590(temp_s1_2 + 0x28, var_a1_2, 0x20);
                                    }
                                    M2C_FIELD(temp_s1_2, s8 *, 0x25) = func_00824B50();
                                    temp_s0_3 = func_00824B50();
                                    temp_s5_2 = func_0082C2A0();
                                    temp_v0_9 = func_00936B90();
                                    if (temp_v0_9 == NULL) {
                                        goto block_110;
                                    }
                                    if (temp_s5_2 != 0) {
                                        var_s5_2 = temp_v0_9 + 0xDC;
                                    } else {
block_110:
                                        var_s5_2 = NULL;
                                    }
                                    if (var_s5_2 == NULL) {
                                        var_v0_4 = NULL;
                                    } else if (temp_s0_3 < 0) {
                                        var_v0_4 = NULL;
                                    } else {
                                        temp_s7_2 = func_0082C2A0();
                                        temp_v0_10 = func_00936B90();
                                        if (temp_v0_10 == NULL) {
                                            goto block_121;
                                        }
                                        if (temp_s7_2 != 0) {
                                            var_v0_5 = temp_v0_10 + 0xDC;
                                        } else {
block_121:
                                            var_v0_5 = NULL;
                                        }
                                        if (var_v0_5 != NULL) {
                                            var_v0_6 = *var_v0_5;
                                        } else {
                                            var_v0_6 = 0;
                                        }
                                        if (temp_s0_3 < (var_v0_6 & 0xFFFF)) {
                                            var_v0_4 = var_s5_2 + (temp_s0_3 * 0x68) + 2;
                                        } else {
                                            var_v0_4 = NULL;
                                        }
                                    }
                                    if (var_v0_4 == NULL) {
                                        var_v0_4 = NULL;
                                    }
                                    if (var_v0_4 != NULL) {
                                        M2C_FIELD(temp_s1_2, s8 *, 0x4A) = (s8) *var_v0_4;
                                    }
                                    M2C_FIELD(temp_s1_2, s8 *, 0x4B) = 0;
                                    M2C_FIELD(temp_s1_2, s32 *, 0x4C) = func_00841100();
                                    temp_v0_11 = func_008410B0();
                                    if (temp_v0_11 != NULL) {
                                        func_001C8590(temp_s1_2 + 0x50, temp_v0_11, 0x40);
                                    }
                                    func_001C4730(temp_s2_2 + 0x98, temp_s1_2 + 4, 0x21);
                                    func_001C4730(temp_s2_2 + 0xDA, temp_s1_2 + 0x28, 0x21);
                                }
                            }
                        }
                        var_s4_2 += 1;
                        goto loop_142;
                    }
                    *temp_v0_2 = 0;
                    var_a0_3 = 0;
                    do {
                        if (M2C_FIELD((temp_v0_2 + (var_a0_3 * 0x118)), s32 *, 4) != 0) {
                            *temp_v0_2 += 1;
                        }
                        var_a0_3 += 1;
                    } while (var_a0_3 < 0x32);
                    func_009341B0();
                    func_00842A90(1);
                    return 4;
                }
                goto block_20;
            }
block_20:
            return 1;
        }
        goto block_12;
    }
block_12:
    return 1;
}
