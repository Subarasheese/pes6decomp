/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0022F0E0(void);
extern s32 func_0022C140(s32);
extern void func_0094A7F0(s32, s32);
extern u8 func_0022BC60(s32);
extern s32 func_00226000(void);
extern s32 func_0022BB90(s32);
extern void * func_0022C1E0(void);
extern s32 func_00226710(void);
extern u8 func_00239BE0(u8);
extern s32 func_00230380(void);
s32 func_00210DF0();                                /* extern */
s32 func_00225940(u8);                              /* extern */
void *func_0022BFF0(s32, u8);                       /* extern */
s32 func_00230410();                                /* extern */
M2C_UNK func_00239480();                            /* extern */
M2C_UNK func_0094A0E0(M2C_UNK, u8);                 /* extern */
M2C_UNK func_0094B020(s32);                         /* extern */
M2C_UNK func_0094CAE0(s32);                         /* extern */
M2C_UNK func_0094D190(s32);                         /* extern */
M2C_UNK func_0094D590(s32);                         /* extern */
M2C_UNK func_0094F270(s32, M2C_UNK);                /* extern */
M2C_UNK func_0094F4D0(s32, M2C_UNK, s8 *, s8 *);    /* extern */
M2C_UNK func_0096E8C0(s32, M2C_UNK);                /* extern */
M2C_UNK func_00975D30();                            /* extern */
M2C_UNK func_00976910(s32, u8, M2C_UNK);            /* extern */
M2C_UNK func_009786A0(s32);                         /* extern */
M2C_UNK func_0097ED80();                            /* extern */
M2C_UNK func_00994840(M2C_UNK);                     /* extern */
M2C_UNK func_0099AFA0();                            /* extern */
s32 func_0099B3F0();                                /* extern */
M2C_UNK func_0099B920(s32);                         /* extern */
M2C_UNK func_0099C660(s32, s32);                    /* extern */
s32 func_0099C9C0(s32, u8);                         /* extern */
M2C_UNK func_00AF6250(s32, M2C_UNK);                /* extern */
M2C_UNK func_00B00D40(s32, M2C_UNK);                /* extern */
M2C_UNK func_00B01B10(s32, s32);                    /* extern */
M2C_UNK func_00B21F40(s32, u8);                     /* extern */
extern char D_00591C09[];
extern char D_005922E8[];

void func_0099CC60(s32 arg0, u8 arg1) {
    u8 spA0;
    u8 spB0;
    u8 spC0;
    u8 spD0;
    s8 spEC;
    s8 spED;
    s8 spEE;
    s8 spEF;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_fp;
    s32 temp_fp_2;
    s32 temp_fp_3;
    s32 temp_fp_4;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s4;
    s32 temp_s6;
    s32 temp_s6_2;
    s32 temp_s6_3;
    s32 temp_v0;
    s32 temp_v0_12;
    s32 temp_v0_14;
    s32 temp_v0_16;
    s32 temp_v0_18;
    s32 temp_v0_20;
    s32 temp_v0_23;
    s32 temp_v0_3;
    s32 temp_v0_5;
    s32 temp_v0_7;
    s32 temp_v0_9;
    s32 var_fp;
    s32 var_v0_2;
    s8 var_v0;
    u8 temp_a0;
    u8 temp_a0_6;
    u8 temp_a0_7;
    u8 temp_a1;
    u8 temp_a1_2;
    u8 temp_a1_3;
    u8 temp_s0_10;
    u8 temp_s0_3;
    u8 temp_s0_4;
    u8 temp_s0_5;
    u8 temp_s0_6;
    u8 temp_s0_7;
    u8 temp_s0_8;
    u8 temp_s0_9;
    u8 temp_s3_2;
    u8 temp_s3_3;
    u8 temp_s3_4;
    u8 temp_s3_5;
    u8 temp_v0_10;
    u8 temp_v0_13;
    u8 temp_v0_15;
    u8 temp_v0_17;
    u8 temp_v0_21;
    u8 temp_v0_24;
    u8 temp_v0_4;
    u8 temp_v0_6;
    u8 var_s2;
    u8 var_s3;
    void *temp_s3;
    void *temp_v0_11;
    void *temp_v0_19;
    void *temp_v0_22;
    void *temp_v0_25;
    void *temp_v0_26;
    void *temp_v0_27;
    void *temp_v0_28;
    void *temp_v0_2;
    void *temp_v0_8;
    void *var_s0;

    var_fp = 0;
    temp_s4 = func_00226710() & 0xFF;
    temp_s3 = func_0022C1E0();
    temp_s0 = func_0022F0E0();
    if ((temp_s3 != NULL) && (temp_s0 != 0) && ((arg0 & 0xFF) < (s32) M2C_FIELD(temp_s3, u8 *, 0))) {
        temp_v0 = func_0022C140(arg0);
        if (temp_v0 != 0) {
            temp_v0_2 = func_0022BFF0(arg0, arg1);
            if (temp_v0_2 != NULL) {
                temp_a1 = M2C_FIELD(temp_v0_2, u8 *, 0x16);
                if ((((u64) ((s64) temp_a1 << 0x3B) >> 0x3F) != 0) && (((u64) ((s64) temp_a1 << 0x3A) >> 0x3F) != 1)) {
                    if (((u64) ((s64) temp_a1 << 0x3D) >> 0x3F) != 1) {
                        if (!(temp_a1 & 1)) {
                            if ((*(u8 *)D_005922E8) != 0) {
                                if ((s32) M2C_FIELD(temp_s0, u16 *, 2) >= (s32) M2C_FIELD(temp_s0, u16 *, 0)) {
                                    M2C_FIELD(temp_v0_2, u8 *, 0xB) = 0U;
                                    M2C_FIELD(temp_v0_2, u8 *, 0x10) = 3U;
                                } else {
                                    M2C_FIELD(temp_v0_2, u8 *, 0xB) = 3U;
                                    M2C_FIELD(temp_v0_2, u8 *, 0x10) = 0U;
                                }
                                M2C_FIELD(temp_v0_2, u8 *, 0xC) = 0U;
                                M2C_FIELD(temp_v0_2, u8 *, 0x11) = 0U;
                                M2C_FIELD(temp_v0_2, u8 *, 0xD) = 0U;
                                M2C_FIELD(temp_v0_2, u8 *, 0x12) = 0U;
                                M2C_FIELD(temp_v0_2, u8 *, 0xE) = 0U;
                                M2C_FIELD(temp_v0_2, u8 *, 0x13) = 0U;
                                M2C_FIELD(temp_v0_2, u8 *, 0xF) = 0U;
                                M2C_FIELD(temp_v0_2, u8 *, 0x14) = 0U;
                            } else {
                                M2C_FIELD(temp_v0_2, u8 *, 0xB) = (u8) M2C_FIELD(temp_s0, u8 *, 4);
                                M2C_FIELD(temp_v0_2, u8 *, 0x10) = (u8) M2C_FIELD(temp_s0, u8 *, 8);
                                M2C_FIELD(temp_v0_2, u8 *, 0xC) = (u8) M2C_FIELD(temp_s0, u8 *, 5);
                                M2C_FIELD(temp_v0_2, u8 *, 0x11) = (u8) M2C_FIELD(temp_s0, u8 *, 9);
                                M2C_FIELD(temp_v0_2, u8 *, 0xD) = (u8) M2C_FIELD(temp_s0, u8 *, 6);
                                M2C_FIELD(temp_v0_2, u8 *, 0x12) = (u8) M2C_FIELD(temp_s0, u8 *, 0xA);
                                M2C_FIELD(temp_v0_2, u8 *, 0xE) = (u8) M2C_FIELD(temp_s0, u8 *, 7);
                                M2C_FIELD(temp_v0_2, u8 *, 0x13) = (u8) M2C_FIELD(temp_s0, u8 *, 0xB);
                                M2C_FIELD(temp_v0_2, u8 *, 0xF) = (u8) M2C_FIELD(temp_s0, u8 *, 0xC);
                                M2C_FIELD(temp_v0_2, u8 *, 0x14) = (u8) M2C_FIELD(temp_s0, u8 *, 0xD);
                            }
                            func_0094A0E0(1, temp_a1);
                        }
                        temp_s6 = arg1 & 0xFF;
                        M2C_FIELD(temp_v0_2, u8 *, 0x16) = (u8) ((M2C_FIELD(temp_v0_2, u8 *, 0x16) & ~0x20) | 0x20);
                        M2C_FIELD(temp_v0_2, u8 *, 0x16) = (u8) ((M2C_FIELD(temp_v0_2, u8 *, 0x16) & ~0x10) | ((0 & 1) * 0x10));
                        if ((temp_s6 == (M2C_FIELD(temp_v0, u8 *, 5) - 1)) && ((M2C_FIELD(temp_s3, u8 *, 0x124) & 1) == 1) && (((u64) ((s64) M2C_FIELD(temp_v0_2, u8 *, 0x16) << 0x3E) >> 0x3F) == 1)) {
                            spB0 = func_0022BC60((s32) M2C_FIELD(temp_v0_2, u8 *, 5));
                            if (func_0022C1E0() != NULL) {
                                temp_v0_3 = func_0022C140(arg0);
                                if (temp_v0_3 != 0) {
                                    if (func_00225940(spB0) & 0xFF) {
                                        temp_v0_4 = M2C_FIELD(temp_v0_3, u8 *, 0xA);
                                        if ((s32) temp_v0_4 > 0) {
                                            M2C_FIELD(temp_v0_3, u8 *, 0xA) = (u8) (temp_v0_4 - 1);
                                        }
                                    }
                                    if (func_00230410() == 1) {
                                        func_0099AFA0();
                                    }
                                    if (func_00230380() == 1) {
                                        func_0097ED80();
                                    }
                                }
                            }
                            spA0 = func_0022BC60((s32) M2C_FIELD(temp_v0_2, u8 *, 6));
                            if (func_0022C1E0() != NULL) {
                                temp_v0_5 = func_0022C140(arg0);
                                if (temp_v0_5 != 0) {
                                    if (func_00225940(spA0) & 0xFF) {
                                        temp_v0_6 = M2C_FIELD(temp_v0_5, u8 *, 0xA);
                                        if ((s32) temp_v0_6 > 0) {
                                            M2C_FIELD(temp_v0_5, u8 *, 0xA) = (u8) (temp_v0_6 - 1);
                                        }
                                    }
                                    if (func_00230410() == 1) {
                                        func_0099AFA0();
                                    }
                                    if (func_00230380() == 1) {
                                        func_0097ED80();
                                    }
                                }
                            }
                        }
                        temp_a1_2 = M2C_FIELD(temp_v0_2, u8 *, 2);
                        if (temp_a1_2 != 0xFF) {
                            var_s0 = func_0022BFF0(arg0, temp_a1_2);
                        } else {
                            var_s0 = NULL;
                        }
                        if (M2C_FIELD(temp_v0_2, u8 *, 0x16) & 1) {
                            M2C_FIELD(temp_v0_2, u8 *, 0x17) = (u8) ((M2C_FIELD(temp_v0_2, u8 *, 0x17) & ~1) | (0 & 1));
                            if (var_s0 != NULL) {
                                if (M2C_FIELD(var_s0, u8 *, 3) != temp_s6) {
                                    M2C_FIELD(var_s0, u8 *, 6) = (u8) M2C_FIELD(temp_v0_2, u8 *, 5);
                                } else {
                                    M2C_FIELD(var_s0, u8 *, 5) = (u8) M2C_FIELD(temp_v0_2, u8 *, 5);
                                }
                            }
                        } else {
                            temp_v0_7 = func_0099C9C0(arg0, arg1);
                            switch (temp_v0_7) {    /* switch 2; irregular */
                            case 1:                 /* switch 2 */
                                M2C_FIELD(temp_v0_2, u8 *, 0x17) = (u8) ((M2C_FIELD(temp_v0_2, u8 *, 0x17) & ~1) | (1 & 1));
                                if (var_s0 != NULL) {
                                    if (M2C_FIELD(var_s0, u8 *, 3) != temp_s6) {
                                        M2C_FIELD(var_s0, u8 *, 6) = (u8) M2C_FIELD(temp_v0_2, u8 *, 6);
                                    } else {
                                        M2C_FIELD(var_s0, u8 *, 5) = (u8) M2C_FIELD(temp_v0_2, u8 *, 6);
                                    }
                                }
                                temp_fp = func_00239BE0(M2C_FIELD(temp_v0, u8 *, 9)) & 0xFF;
                                temp_v0_8 = func_0022BFF0(arg0, (M2C_FIELD(temp_v0, u8 *, 5) - 1) & 0xFF);
                                if ((temp_v0_8 != NULL) && (((temp_fp & 0xFF) - 1) == M2C_FIELD(temp_v0_2, u8 *, 0)) && ((M2C_FIELD(temp_s3, u8 *, 0x124) & 1) == 1) && (((u64) ((s64) M2C_FIELD(temp_v0_2, u8 *, 0x16) << 0x3E) >> 0x3F) == 0)) {
                                    if (M2C_FIELD(temp_v0_8, u8 *, 3) != temp_s6) {
                                        M2C_FIELD(temp_v0_8, u8 *, 6) = (u8) M2C_FIELD(temp_v0_2, u8 *, 5);
                                    } else {
                                        M2C_FIELD(temp_v0_8, u8 *, 5) = (u8) M2C_FIELD(temp_v0_2, u8 *, 5);
                                    }
                                    if (M2C_FIELD(temp_v0_8, u8 *, 5) == 0xFF) {
                                        var_fp = 1;
                                    } else {
                                        if (M2C_FIELD(temp_v0_8, u8 *, 6) != 0xFF) {
                                            M2C_FIELD(temp_v0_8, u8 *, 0x16) = (u8) ((M2C_FIELD(temp_v0_8, u8 *, 0x16) & ~0x10) | 0x10);
                                        }
                                        goto block_264;
                                    }
                                } else {
                                    if ((temp_s6 != (M2C_FIELD(temp_v0, u8 *, 5) - 1)) || ((M2C_FIELD(temp_s3, u8 *, 0x124) & 1) != 1) || (((u64) ((s64) M2C_FIELD(temp_v0_2, u8 *, 0x16) << 0x3E) >> 0x3F) != 1)) {
                                        temp_s3_2 = func_0022BC60((s32) M2C_FIELD(temp_v0_2, u8 *, 5)) & 0xFF;
                                        if (func_0022C1E0() != NULL) {
                                            temp_v0_9 = func_0022C140(arg0);
                                            if (temp_v0_9 != 0) {
                                                if (func_00225940(temp_s3_2) & 0xFF) {
                                                    temp_v0_10 = M2C_FIELD(temp_v0_9, u8 *, 0xA);
                                                    if ((s32) temp_v0_10 > 0) {
                                                        M2C_FIELD(temp_v0_9, u8 *, 0xA) = (u8) (temp_v0_10 - 1);
                                                    }
                                                }
                                                if (func_00230410() == 1) {
                                                    func_0099AFA0();
                                                }
                                                if (func_00230380() == 1) {
                                                    func_0097ED80();
                                                }
                                            }
                                        }
                                    }
block_264:
                                    var_fp = 1;
                                }
                                break;
                            case 0:                 /* switch 2 */
                                M2C_FIELD(temp_v0_2, u8 *, 0x17) = (u8) ((M2C_FIELD(temp_v0_2, u8 *, 0x17) & ~1) | (0 & 1));
                                if (var_s0 != NULL) {
                                    if (M2C_FIELD(var_s0, u8 *, 3) != temp_s6) {
                                        M2C_FIELD(var_s0, u8 *, 6) = (u8) M2C_FIELD(temp_v0_2, u8 *, 5);
                                    } else {
                                        M2C_FIELD(var_s0, u8 *, 5) = (u8) M2C_FIELD(temp_v0_2, u8 *, 5);
                                    }
                                }
                                temp_fp_2 = func_00239BE0(M2C_FIELD(temp_v0, u8 *, 9)) & 0xFF;
                                temp_v0_11 = func_0022BFF0(arg0, (M2C_FIELD(temp_v0, u8 *, 5) - 1) & 0xFF);
                                if ((temp_v0_11 != NULL) && (((temp_fp_2 & 0xFF) - 1) == M2C_FIELD(temp_v0_2, u8 *, 0)) && ((M2C_FIELD(temp_s3, u8 *, 0x124) & 1) == 1) && (((u64) ((s64) M2C_FIELD(temp_v0_2, u8 *, 0x16) << 0x3E) >> 0x3F) == 0)) {
                                    if (M2C_FIELD(temp_v0_11, u8 *, 3) != temp_s6) {
                                        M2C_FIELD(temp_v0_11, u8 *, 6) = (u8) M2C_FIELD(temp_v0_2, u8 *, 6);
                                    } else {
                                        M2C_FIELD(temp_v0_11, u8 *, 5) = (u8) M2C_FIELD(temp_v0_2, u8 *, 6);
                                    }
                                    if (M2C_FIELD(temp_v0_11, u8 *, 5) == 0xFF) {
                                        var_fp = 0;
                                    } else {
                                        if (M2C_FIELD(temp_v0_11, u8 *, 6) != 0xFF) {
                                            M2C_FIELD(temp_v0_11, u8 *, 0x16) = (u8) ((M2C_FIELD(temp_v0_11, u8 *, 0x16) & ~0x10) | 0x10);
                                        }
                                        goto block_231;
                                    }
                                } else {
                                    if ((temp_s6 != (M2C_FIELD(temp_v0, u8 *, 5) - 1)) || ((M2C_FIELD(temp_s3, u8 *, 0x124) & 1) != 1) || (((u64) ((s64) M2C_FIELD(temp_v0_2, u8 *, 0x16) << 0x3E) >> 0x3F) != 1)) {
                                        temp_s3_3 = func_0022BC60((s32) M2C_FIELD(temp_v0_2, u8 *, 6)) & 0xFF;
                                        if (func_0022C1E0() != NULL) {
                                            temp_v0_12 = func_0022C140(arg0);
                                            if (temp_v0_12 != 0) {
                                                if (func_00225940(temp_s3_3) & 0xFF) {
                                                    temp_v0_13 = M2C_FIELD(temp_v0_12, u8 *, 0xA);
                                                    if ((s32) temp_v0_13 > 0) {
                                                        M2C_FIELD(temp_v0_12, u8 *, 0xA) = (u8) (temp_v0_13 - 1);
                                                    }
                                                }
                                                if (func_00230410() == 1) {
                                                    func_0099AFA0();
                                                }
                                                if (func_00230380() == 1) {
                                                    func_0097ED80();
                                                }
                                            }
                                        }
                                    }
block_231:
                                    var_fp = 0;
                                }
                                break;
                            }
                        }
                        if ((var_s0 != NULL) && (M2C_FIELD(var_s0, u8 *, 5) != 0xFF) && (M2C_FIELD(var_s0, u8 *, 6) != 0xFF)) {
                            var_v0 = (M2C_FIELD(var_s0, u8 *, 0x16) & ~0x10) | 0x10;
                            goto block_275;
                        }
                        goto block_276;
                    }
                    if (((u64) ((s64) temp_a1 << 0x39) >> 0x3F) != 0) {
                        if (((u64) ((s64) temp_a1 << 0x38) >> 0x3F) != 1) {
                            if (!(temp_a1 & 1)) {
                                if ((*(u8 *)D_005922E8) != 0) {
                                    if ((s32) M2C_FIELD(temp_s0, u16 *, 2) >= (s32) M2C_FIELD(temp_s0, u16 *, 0)) {
                                        M2C_FIELD(temp_v0_2, u8 *, 0x10) = 0U;
                                        M2C_FIELD(temp_v0_2, u8 *, 0xB) = 3U;
                                    } else {
                                        M2C_FIELD(temp_v0_2, u8 *, 0x10) = 3U;
                                        M2C_FIELD(temp_v0_2, u8 *, 0xB) = 0U;
                                    }
                                    M2C_FIELD(temp_v0_2, u8 *, 0x11) = 0U;
                                    M2C_FIELD(temp_v0_2, u8 *, 0xC) = 0U;
                                    M2C_FIELD(temp_v0_2, u8 *, 0x12) = 0U;
                                    M2C_FIELD(temp_v0_2, u8 *, 0xD) = 0U;
                                    M2C_FIELD(temp_v0_2, u8 *, 0x13) = 0U;
                                    M2C_FIELD(temp_v0_2, u8 *, 0xE) = 0U;
                                    M2C_FIELD(temp_v0_2, u8 *, 0x14) = 0U;
                                    M2C_FIELD(temp_v0_2, u8 *, 0xF) = 0U;
                                } else {
                                    M2C_FIELD(temp_v0_2, u8 *, 0xB) = (u8) M2C_FIELD(temp_s0, u8 *, 8);
                                    M2C_FIELD(temp_v0_2, u8 *, 0x10) = (u8) M2C_FIELD(temp_s0, u8 *, 4);
                                    M2C_FIELD(temp_v0_2, u8 *, 0xC) = (u8) M2C_FIELD(temp_s0, u8 *, 9);
                                    M2C_FIELD(temp_v0_2, u8 *, 0x11) = (u8) M2C_FIELD(temp_s0, u8 *, 5);
                                    M2C_FIELD(temp_v0_2, u8 *, 0xD) = (u8) M2C_FIELD(temp_s0, u8 *, 0xA);
                                    M2C_FIELD(temp_v0_2, u8 *, 0x12) = (u8) M2C_FIELD(temp_s0, u8 *, 6);
                                    M2C_FIELD(temp_v0_2, u8 *, 0xE) = (u8) M2C_FIELD(temp_s0, u8 *, 0xB);
                                    M2C_FIELD(temp_v0_2, u8 *, 0x13) = (u8) M2C_FIELD(temp_s0, u8 *, 7);
                                    M2C_FIELD(temp_v0_2, u8 *, 0xF) = (u8) M2C_FIELD(temp_s0, u8 *, 0xD);
                                    M2C_FIELD(temp_v0_2, u8 *, 0x14) = (u8) M2C_FIELD(temp_s0, u8 *, 0xC);
                                }
                                func_0094A0E0(1, temp_a1);
                            }
                            temp_s6_2 = arg1 & 0xFF;
                            M2C_FIELD(temp_v0_2, u8 *, 0x16) = (u8) ((M2C_FIELD(temp_v0_2, u8 *, 0x16) & ~0x80) | 0x80);
                            M2C_FIELD(temp_v0_2, u8 *, 0x16) = (u8) ((M2C_FIELD(temp_v0_2, u8 *, 0x16) & ~0x20) | 0x20);
                            M2C_FIELD(temp_v0_2, u8 *, 0x16) = (u8) ((M2C_FIELD(temp_v0_2, u8 *, 0x16) & ~0x10) | ((0 & 1) * 0x10));
                            if ((temp_s6_2 == (M2C_FIELD(temp_v0, u8 *, 5) - 1)) && ((M2C_FIELD(temp_s3, u8 *, 0x124) & 1) == 1) && (((u64) ((s64) M2C_FIELD(temp_v0_2, u8 *, 0x16) << 0x3E) >> 0x3F) == 1)) {
                                spD0 = func_0022BC60((s32) M2C_FIELD(temp_v0_2, u8 *, 5));
                                if (func_0022C1E0() != NULL) {
                                    temp_v0_14 = func_0022C140(arg0);
                                    if (temp_v0_14 != 0) {
                                        if (func_00225940(spD0) & 0xFF) {
                                            temp_v0_15 = M2C_FIELD(temp_v0_14, u8 *, 0xA);
                                            if ((s32) temp_v0_15 > 0) {
                                                M2C_FIELD(temp_v0_14, u8 *, 0xA) = (u8) (temp_v0_15 - 1);
                                            }
                                        }
                                        if (func_00230410() == 1) {
                                            func_0099AFA0();
                                        }
                                        if (func_00230380() == 1) {
                                            func_0097ED80();
                                        }
                                    }
                                }
                                spC0 = func_0022BC60((s32) M2C_FIELD(temp_v0_2, u8 *, 6));
                                if (func_0022C1E0() != NULL) {
                                    temp_v0_16 = func_0022C140(arg0);
                                    if (temp_v0_16 != 0) {
                                        if (func_00225940(spC0) & 0xFF) {
                                            temp_v0_17 = M2C_FIELD(temp_v0_16, u8 *, 0xA);
                                            if ((s32) temp_v0_17 > 0) {
                                                M2C_FIELD(temp_v0_16, u8 *, 0xA) = (u8) (temp_v0_17 - 1);
                                            }
                                        }
                                        if (func_00230410() == 1) {
                                            func_0099AFA0();
                                        }
                                        if (func_00230380() == 1) {
                                            func_0097ED80();
                                        }
                                    }
                                }
                            }
                            temp_a1_3 = M2C_FIELD(temp_v0_2, u8 *, 2);
                            if (temp_a1_3 != 0xFF) {
                                var_s0 = func_0022BFF0(arg0, temp_a1_3);
                            } else {
                                var_s0 = NULL;
                            }
                            if (M2C_FIELD(temp_v0_2, u8 *, 0x16) & 1) {
                                M2C_FIELD(temp_v0_2, u8 *, 0x17) = (u8) ((M2C_FIELD(temp_v0_2, u8 *, 0x17) & ~1) | (0 & 1));
                                if (var_s0 != NULL) {
                                    if (M2C_FIELD(var_s0, u8 *, 3) != temp_s6_2) {
                                        M2C_FIELD(var_s0, u8 *, 6) = (u8) M2C_FIELD(temp_v0_2, u8 *, 5);
                                    } else {
                                        M2C_FIELD(var_s0, u8 *, 5) = (u8) M2C_FIELD(temp_v0_2, u8 *, 5);
                                    }
                                }
                            } else {
                                temp_v0_18 = func_0099C9C0(arg0, arg1);
                                switch (temp_v0_18) { /* switch 1; irregular */
                                case 1:             /* switch 1 */
                                    M2C_FIELD(temp_v0_2, u8 *, 0x17) = (u8) ((M2C_FIELD(temp_v0_2, u8 *, 0x17) & ~1) | (1 & 1));
                                    if (var_s0 != NULL) {
                                        if (M2C_FIELD(var_s0, u8 *, 3) != temp_s6_2) {
                                            M2C_FIELD(var_s0, u8 *, 6) = (u8) M2C_FIELD(temp_v0_2, u8 *, 6);
                                        } else {
                                            M2C_FIELD(var_s0, u8 *, 5) = (u8) M2C_FIELD(temp_v0_2, u8 *, 6);
                                        }
                                    }
                                    temp_fp_3 = func_00239BE0(M2C_FIELD(temp_v0, u8 *, 9)) & 0xFF;
                                    temp_v0_19 = func_0022BFF0(arg0, (M2C_FIELD(temp_v0, u8 *, 5) - 1) & 0xFF);
                                    if ((temp_v0_19 != NULL) && (((temp_fp_3 & 0xFF) - 1) == M2C_FIELD(temp_v0_2, u8 *, 0)) && ((M2C_FIELD(temp_s3, u8 *, 0x124) & 1) == 1) && (((u64) ((s64) M2C_FIELD(temp_v0_2, u8 *, 0x16) << 0x3E) >> 0x3F) == 0)) {
                                        if (M2C_FIELD(temp_v0_19, u8 *, 3) != temp_s6_2) {
                                            M2C_FIELD(temp_v0_19, u8 *, 6) = (u8) M2C_FIELD(temp_v0_2, u8 *, 5);
                                        } else {
                                            M2C_FIELD(temp_v0_19, u8 *, 5) = (u8) M2C_FIELD(temp_v0_2, u8 *, 5);
                                        }
                                        if (M2C_FIELD(temp_v0_19, u8 *, 5) == 0xFF) {
                                            var_fp = 1;
                                        } else {
                                            if (M2C_FIELD(temp_v0_19, u8 *, 6) != 0xFF) {
                                                M2C_FIELD(temp_v0_19, u8 *, 0x16) = (u8) ((M2C_FIELD(temp_v0_19, u8 *, 0x16) & ~0x10) | 0x10);
                                            }
                                            goto block_140;
                                        }
                                    } else {
                                        if ((temp_s6_2 != (M2C_FIELD(temp_v0, u8 *, 5) - 1)) || ((M2C_FIELD(temp_s3, u8 *, 0x124) & 1) != 1) || (((u64) ((s64) M2C_FIELD(temp_v0_2, u8 *, 0x16) << 0x3E) >> 0x3F) != 1)) {
                                            temp_s3_4 = func_0022BC60((s32) M2C_FIELD(temp_v0_2, u8 *, 5)) & 0xFF;
                                            if (func_0022C1E0() != NULL) {
                                                temp_v0_20 = func_0022C140(arg0);
                                                if (temp_v0_20 != 0) {
                                                    if (func_00225940(temp_s3_4) & 0xFF) {
                                                        temp_v0_21 = M2C_FIELD(temp_v0_20, u8 *, 0xA);
                                                        if ((s32) temp_v0_21 > 0) {
                                                            M2C_FIELD(temp_v0_20, u8 *, 0xA) = (u8) (temp_v0_21 - 1);
                                                        }
                                                    }
                                                    if (func_00230410() == 1) {
                                                        func_0099AFA0();
                                                    }
                                                    if (func_00230380() == 1) {
                                                        func_0097ED80();
                                                    }
                                                }
                                            }
                                        }
block_140:
                                        var_fp = 1;
                                    }
                                    break;
                                case 0:             /* switch 1 */
                                    M2C_FIELD(temp_v0_2, u8 *, 0x17) = (u8) ((M2C_FIELD(temp_v0_2, u8 *, 0x17) & ~1) | (0 & 1));
                                    if (var_s0 != NULL) {
                                        if (M2C_FIELD(var_s0, u8 *, 3) != temp_s6_2) {
                                            M2C_FIELD(var_s0, u8 *, 6) = (u8) M2C_FIELD(temp_v0_2, u8 *, 5);
                                        } else {
                                            M2C_FIELD(var_s0, u8 *, 5) = (u8) M2C_FIELD(temp_v0_2, u8 *, 5);
                                        }
                                    }
                                    temp_fp_4 = func_00239BE0(M2C_FIELD(temp_v0, u8 *, 9)) & 0xFF;
                                    temp_v0_22 = func_0022BFF0(arg0, (M2C_FIELD(temp_v0, u8 *, 5) - 1) & 0xFF);
                                    if ((temp_v0_22 != NULL) && (((temp_fp_4 & 0xFF) - 1) == M2C_FIELD(temp_v0_2, u8 *, 0)) && ((M2C_FIELD(temp_s3, u8 *, 0x124) & 1) == 1) && (((u64) ((s64) M2C_FIELD(temp_v0_2, u8 *, 0x16) << 0x3E) >> 0x3F) == 0)) {
                                        if (M2C_FIELD(temp_v0_22, u8 *, 3) != temp_s6_2) {
                                            M2C_FIELD(temp_v0_22, u8 *, 6) = (u8) M2C_FIELD(temp_v0_2, u8 *, 6);
                                        } else {
                                            M2C_FIELD(temp_v0_22, u8 *, 5) = (u8) M2C_FIELD(temp_v0_2, u8 *, 6);
                                        }
                                        if (M2C_FIELD(temp_v0_22, u8 *, 5) == 0xFF) {
                                            var_fp = 0;
                                        } else {
                                            if (M2C_FIELD(temp_v0_22, u8 *, 6) != 0xFF) {
                                                M2C_FIELD(temp_v0_22, u8 *, 0x16) = (u8) ((M2C_FIELD(temp_v0_22, u8 *, 0x16) & ~0x10) | 0x10);
                                            }
                                            goto block_107;
                                        }
                                    } else {
                                        if ((temp_s6_2 != (M2C_FIELD(temp_v0, u8 *, 5) - 1)) || ((M2C_FIELD(temp_s3, u8 *, 0x124) & 1) != 1) || (((u64) ((s64) M2C_FIELD(temp_v0_2, u8 *, 0x16) << 0x3E) >> 0x3F) != 1)) {
                                            temp_s3_5 = func_0022BC60((s32) M2C_FIELD(temp_v0_2, u8 *, 6)) & 0xFF;
                                            if (func_0022C1E0() != NULL) {
                                                temp_v0_23 = func_0022C140(arg0);
                                                if (temp_v0_23 != 0) {
                                                    if (func_00225940(temp_s3_5) & 0xFF) {
                                                        temp_v0_24 = M2C_FIELD(temp_v0_23, u8 *, 0xA);
                                                        if ((s32) temp_v0_24 > 0) {
                                                            M2C_FIELD(temp_v0_23, u8 *, 0xA) = (u8) (temp_v0_24 - 1);
                                                        }
                                                    }
                                                    if (func_00230410() == 1) {
                                                        func_0099AFA0();
                                                    }
                                                    if (func_00230380() == 1) {
                                                        func_0097ED80();
                                                    }
                                                }
                                            }
                                        }
block_107:
                                        var_fp = 0;
                                    }
                                    break;
                                }
                            }
                            if ((var_s0 != NULL) && (M2C_FIELD(var_s0, u8 *, 5) != 0xFF) && (M2C_FIELD(var_s0, u8 *, 6) != 0xFF)) {
                                var_v0 = (M2C_FIELD(var_s0, u8 *, 0x16) & ~0x10) | 0x10;
block_275:
                                M2C_FIELD(var_s0, s8 *, 0x16) = var_v0;
                            }
                            goto block_276;
                        }
                    } else {
                        if (!(temp_a1 & 1)) {
                            if ((*(u8 *)D_005922E8) != 0) {
                                if ((s32) M2C_FIELD(temp_s0, u16 *, 2) >= (s32) M2C_FIELD(temp_s0, u16 *, 0)) {
                                    M2C_FIELD(temp_v0_2, u8 *, 7) = 0U;
                                    M2C_FIELD(temp_v0_2, u8 *, 9) = 3U;
                                } else {
                                    M2C_FIELD(temp_v0_2, u8 *, 7) = 3U;
                                    M2C_FIELD(temp_v0_2, u8 *, 9) = 0U;
                                }
                                M2C_FIELD(temp_v0_2, u8 *, 8) = 0U;
                                M2C_FIELD(temp_v0_2, u8 *, 0xA) = 0U;
                            } else {
                                M2C_FIELD(temp_v0_2, u8 *, 7) = (u8) M2C_FIELD(temp_s0, u8 *, 4);
                                M2C_FIELD(temp_v0_2, u8 *, 9) = (u8) M2C_FIELD(temp_s0, u8 *, 8);
                                M2C_FIELD(temp_v0_2, u8 *, 8) = (u8) M2C_FIELD(temp_s0, u8 *, 5);
                                M2C_FIELD(temp_v0_2, u8 *, 0xA) = (u8) M2C_FIELD(temp_s0, u8 *, 9);
                            }
                            func_0094A0E0(1, temp_a1);
                        }
                        M2C_FIELD(temp_v0_2, u8 *, 0x16) = (u8) ((M2C_FIELD(temp_v0_2, u8 *, 0x16) & ~0x40) | 0x40);
block_276:
                        temp_a0 = M2C_FIELD(temp_v0_2, u8 *, 0x16);
                        if (!(temp_a0 & 1)) {
                            if (((u64) ((s64) temp_a0 << 0x3D) >> 0x3F) != 1) {
                                var_s2 = M2C_FIELD(temp_v0_2, u8 *, 5);
                                var_s3 = M2C_FIELD(temp_v0_2, u8 *, 6);
                            } else if (((u64) ((s64) temp_a0 << 0x38) >> 0x3F) != 0) {
                                var_s2 = M2C_FIELD(temp_v0_2, u8 *, 6);
                                var_s3 = M2C_FIELD(temp_v0_2, u8 *, 5);
                            } else {
                                var_s3 = M2C_FIELD(temp_v0_2, u8 *, 6);
                                var_s2 = M2C_FIELD(temp_v0_2, u8 *, 5);
                            }
                            temp_s6_3 = func_0022BC60((s32) var_s2) & 0xFF;
                            temp_s0_2 = func_0022BC60((s32) var_s3) & 0xFF;
                            if (!(func_0022BB90((s32) var_s2) & 0xFF) && !(func_0022BB90((s32) var_s3) & 0xFF)) {
                                spEF = 0;
                                spEE = 0;
                                temp_a0_2 = func_0022BC60((s32) var_s2) & 0xFF;
                                if (temp_a0_2 < 0x48) {
                                    func_0094F4D0(temp_a0_2, 1, &spEF, &spEE);
                                }
                                spED = 0;
                                spEC = 0;
                                temp_a0_3 = func_0022BC60((s32) var_s3) & 0xFF;
                                if (temp_a0_3 < 0x48) {
                                    func_0094F4D0(temp_a0_3, 1, &spED, &spEC);
                                }
                            } else {
                                func_0099C660((s32) var_s2, (s32) var_s3);
                            }
                            if (!(func_0022BB90((s32) var_s2) & 0xFF) && !(func_0022BB90((s32) var_s3) & 0xFF)) {
                                temp_a0_4 = func_0022BC60((s32) var_s2) & 0xFF;
                                if (temp_a0_4 < 0x48) {
                                    func_0094F270(temp_a0_4, 1);
                                }
                                temp_a0_5 = func_0022BC60((s32) var_s3) & 0xFF;
                                if (temp_a0_5 < 0x48) {
                                    func_0094F270(temp_a0_5, 1);
                                }
                            }
                            if (func_00230410() != 1) {
                                func_0094A7F0(temp_s4, (s32) var_s2);
                                func_0094A7F0(temp_s4, (s32) var_s3);
                            } else if ((u32) (temp_s4 - 0x26) < 2U) {
                                func_0094A7F0(temp_s4, (s32) var_s2);
                                func_0094A7F0(temp_s4, (s32) var_s3);
                            } else if (func_0099B3F0() == 1) {
                                func_0094A7F0(temp_s4, (s32) var_s2);
                                func_0094A7F0(temp_s4, (s32) var_s3);
                            }
                            if ((func_00230410() == 0) && (func_00230380() == 0)) {
                                func_0094B020((s32) var_s2);
                                func_0094B020((s32) var_s3);
                            }
                            if ((func_0022BB90((s32) var_s2) & 0xFF) || (func_0022BB90((s32) var_s3) & 0xFF)) {
                                func_0094CAE0(temp_s6_3);
                                func_0094CAE0(temp_s0_2);
                            }
                            func_0094D590(temp_s6_3);
                            func_0094D590(temp_s0_2);
                            if (((u32) ((*(u8 *)D_00591C09) - 1) < 2U) && (func_00230380() == 0)) {
                                func_0094D190(temp_s6_3);
                                func_0094D190(temp_s0_2);
                            }
                            func_009786A0(temp_s6_3);
                            func_009786A0(temp_s0_2);
                            if (func_00210DF0() != 2) {
                                func_0096E8C0(temp_s6_3, 0);
                                func_0096E8C0(temp_s0_2, 1);
                            } else {
                                func_00AF6250(temp_s6_3, 0);
                                func_00AF6250(temp_s0_2, 1);
                                func_00B01B10(temp_s6_3, temp_s0_2);
                                func_00B00D40((s32) var_s2, 0);
                                func_00B00D40((s32) var_s3, 1);
                            }
                            if (((func_0022BB90((s32) var_s2) & 0xFF) || (func_0022BB90((s32) var_s3) & 0xFF)) && ((func_00230410() == 1) || (func_00230380() == 1))) {
                                if (func_00210DF0() == 2) {
                                    func_00B21F40(arg0, arg1);
                                    func_00994840(1);
                                }
                                func_00975D30();
                                if (!(func_0022BB90((s32) M2C_FIELD(temp_v0_2, u8 *, 5)) & 0xFF)) {
                                    if (func_0022BB90((s32) M2C_FIELD(temp_v0_2, u8 *, 6)) & 0xFF) {
                                        temp_a0_6 = M2C_FIELD(temp_v0_2, u8 *, 0x16);
                                        if (((u64) ((s64) temp_a0_6 << 0x3A) >> 0x3F) != 1) {
                                            if ((((u64) ((s64) temp_a0_6 << 0x3D) >> 0x3F) == 1) && (((u64) ((s64) temp_a0_6 << 0x38) >> 0x3F) == 0)) {
                                                if ((M2C_FIELD(temp_v0_2, u8 *, 7) + M2C_FIELD(temp_v0_2, u8 *, 8)) < (M2C_FIELD(temp_v0_2, u8 *, 9) + M2C_FIELD(temp_v0_2, u8 *, 0xA))) {
                                                    if ((s32) M2C_FIELD(func_00226000(), u8 *, 1) < 0xFF) {
                                                        temp_v0_25 = func_00226000();
                                                        M2C_FIELD(temp_v0_25, u8 *, 1) = (u8) (M2C_FIELD(temp_v0_25, u8 *, 1) + 1);
                                                    }
                                                    temp_s0_3 = M2C_FIELD(func_00226000(), u8 *, 2);
                                                    if ((s32) temp_s0_3 < (s32) M2C_FIELD(func_00226000(), u8 *, 1)) {
                                                        temp_s0_4 = M2C_FIELD(func_00226000(), u8 *, 1);
                                                        M2C_FIELD(func_00226000(), u8 *, 2) = temp_s0_4;
                                                    }
                                                } else {
                                                    var_v0_2 = func_00226000();
                                                    goto block_369;
                                                }
                                            }
                                        } else if (var_fp == 1) {
                                            if ((s32) M2C_FIELD(func_00226000(), u8 *, 1) < 0xFF) {
                                                temp_v0_26 = func_00226000();
                                                M2C_FIELD(temp_v0_26, u8 *, 1) = (u8) (M2C_FIELD(temp_v0_26, u8 *, 1) + 1);
                                            }
                                            temp_s0_5 = M2C_FIELD(func_00226000(), u8 *, 2);
                                            if ((s32) temp_s0_5 < (s32) M2C_FIELD(func_00226000(), u8 *, 1)) {
                                                temp_s0_6 = M2C_FIELD(func_00226000(), u8 *, 1);
                                                M2C_FIELD(func_00226000(), u8 *, 2) = temp_s0_6;
                                            }
                                            func_00976910(temp_s4 & 0xFF, M2C_FIELD(temp_v0_2, u8 *, 0), 1);
                                        } else {
                                            M2C_FIELD(func_00226000(), s8 *, 1) = 0;
                                            if (((u64) ((s64) M2C_FIELD(temp_v0_2, u8 *, 0x16) << 0x3A) >> 0x3F) == 1) {
                                                func_00976910(temp_s4 & 0xFF, M2C_FIELD(temp_v0_2, u8 *, 0), 2);
                                            }
                                        }
                                    }
                                } else {
                                    temp_a0_7 = M2C_FIELD(temp_v0_2, u8 *, 0x16);
                                    if (((u64) ((s64) temp_a0_7 << 0x3A) >> 0x3F) != 1) {
                                        if ((((u64) ((s64) temp_a0_7 << 0x3D) >> 0x3F) == 1) && (((u64) ((s64) temp_a0_7 << 0x38) >> 0x3F) == 0)) {
                                            if ((M2C_FIELD(temp_v0_2, u8 *, 9) + M2C_FIELD(temp_v0_2, u8 *, 0xA)) < (M2C_FIELD(temp_v0_2, u8 *, 7) + M2C_FIELD(temp_v0_2, u8 *, 8))) {
                                                if ((s32) M2C_FIELD(func_00226000(), u8 *, 1) < 0xFF) {
                                                    temp_v0_27 = func_00226000();
                                                    M2C_FIELD(temp_v0_27, u8 *, 1) = (u8) (M2C_FIELD(temp_v0_27, u8 *, 1) + 1);
                                                }
                                                temp_s0_7 = M2C_FIELD(func_00226000(), u8 *, 2);
                                                if ((s32) temp_s0_7 < (s32) M2C_FIELD(func_00226000(), u8 *, 1)) {
                                                    temp_s0_8 = M2C_FIELD(func_00226000(), u8 *, 1);
                                                    M2C_FIELD(func_00226000(), u8 *, 2) = temp_s0_8;
                                                }
                                            } else {
                                                var_v0_2 = func_00226000();
block_369:
                                                M2C_FIELD(var_v0_2, s8 *, 1) = 0;
                                            }
                                        }
                                    } else if (var_fp == 0) {
                                        if ((s32) M2C_FIELD(func_00226000(), u8 *, 1) < 0xFF) {
                                            temp_v0_28 = func_00226000();
                                            M2C_FIELD(temp_v0_28, u8 *, 1) = (u8) (M2C_FIELD(temp_v0_28, u8 *, 1) + 1);
                                        }
                                        temp_s0_9 = M2C_FIELD(func_00226000(), u8 *, 2);
                                        if ((s32) temp_s0_9 < (s32) M2C_FIELD(func_00226000(), u8 *, 1)) {
                                            temp_s0_10 = M2C_FIELD(func_00226000(), u8 *, 1);
                                            M2C_FIELD(func_00226000(), u8 *, 2) = temp_s0_10;
                                        }
                                        func_00976910(temp_s4 & 0xFF, M2C_FIELD(temp_v0_2, u8 *, 0), 1);
                                    } else {
                                        M2C_FIELD(func_00226000(), s8 *, 1) = 0;
                                        if (((u64) ((s64) M2C_FIELD(temp_v0_2, u8 *, 0x16) << 0x3A) >> 0x3F) == 1) {
                                            func_00976910(temp_s4 & 0xFF, M2C_FIELD(temp_v0_2, u8 *, 0), 2);
                                        }
                                    }
                                }
                            }
                        }
                        func_0099B920(arg0);
                        func_00239480();
                    }
                }
            }
        }
    }
}
