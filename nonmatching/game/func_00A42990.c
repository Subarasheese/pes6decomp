/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_002DCA30();                                /* extern */
void *func_00850350(u8);                            /* extern */
s32 func_00987BF0(s32, void *, s32);        /* extern */
u16 func_0099DFF0(void *, u8);                      /* extern */
s32 func_0099F360(s32);                             /* extern */
s32 func_009B30B0(u16, u16);                        /* extern */
s32 func_00A427F0(void *, s32);                 /* extern */
s32 func_00A439C0(void *, s32);                    /* extern */
extern void *D_003E7574;
extern s32 D_0058E5B0[];
extern u8 D_00591E4C[];
extern s32 D_00591E53[];
extern s32 D_00591E7C[];
extern u8 D_005922C4[];
extern u8 D_005922C5[];
extern u8 D_005922C6[];
extern u8 D_005922C7[];
extern u8 D_005922C8[];
extern s32 D_005922D8[];
extern s32 D_005922DC[];
extern s32 D_005922E0[];
extern s32 D_005922E4[];
extern u8 D_005922EC[];
extern u8 D_005922ED[];
extern u8 D_005922EE[];
extern u8 D_005922EF[];
extern u8 D_005922F0[];
extern u8 D_005922F1[];
extern u16 D_005922F2[];
extern u8 D_005922F4[];
extern u8 D_005922F5[];
extern u8 D_005926E0[];
extern u8 D_005926E4[];
extern u8 D_005926EC[];
extern u8 D_005926F0[];
extern f32 D_00C9A560[];
extern f32 D_00C9A564[];
extern f32 D_00C9A568[];
extern f32 D_00C9A56C[];

void func_00A42990(void *arg0) {
    f32 tbl[4];
    s32 temp_a0;
    s32 temp_a0_10;
    s32 temp_a0_11;
    s32 temp_a0_12;
    s32 temp_a0_13;
    s32 temp_a0_14;
    s32 temp_a0_15;
    s32 temp_a0_5;
    s32 temp_a0_6;
    s32 temp_a0_7;
    s32 temp_a0_8;
    s32 temp_a0_9;
    s32 temp_a1;
    s32 temp_a1_3;
    s32 temp_a1_4;
    s32 temp_a1_5;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_a4;
    s32 temp_a7;
    s32 temp_f0;
    s32 temp_f1;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s2_2;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_a0;
    s32 var_a1;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a2_3;
    s32 var_a2_4;
    s32 var_a3;
    s32 var_a4;
    s32 var_a5;
    s32 var_a7;
    s32 var_a7_2;
    s32 var_a7_3;
    s32 var_a7_4;
    s32 var_a7_5;
    s32 var_t0;
    s32 var_t0_2;
    s32 var_t1;
    s32 var_t1_2;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_5;
    s32 var_v1_6;
    u16 var_s1;
    u32 temp_a6;
    u8 temp_a0_2;
    u8 temp_a0_3;
    u8 temp_v1;
    void *temp_a0_4;
    void *temp_a1_2;
    void *temp_v0;

    temp_a2 = M2C_FIELD(arg0, s32 *, 0xB0);
    temp_a1 = temp_a2 & 0xA00;
    if (temp_a1 != 0xA00) {
        if (((*D_00591E7C) != 0) && !(temp_a2 & 0x200)) {
            (*D_005922C4) = 0;
            temp_a0 = M2C_FIELD(arg0, s32 *, 0x9C);
            if (temp_a0 & 1) {
                var_v1 = temp_a0 - 1;
                goto block_5;
            }
        } else {
            (*D_005922C4) += 1;
            if ((M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30) == 0x33) || ((s32) (*D_005922C4) >= 4)) {
                var_v1 = M2C_FIELD(arg0, s32 *, 0x9C) | 1;
block_5:
                M2C_FIELD(arg0, s32 *, 0x9C) = var_v1;
            }
        }
        if (!(M2C_FIELD(arg0, s32 *, 0xB0) & 0x100) && (M2C_FIELD(arg0, s32 *, 0xB4) & 0x200)) {
            func_00987BF0((M2C_FIELD(arg0, u8 *, 0x13) ^ 1) & 0xFF, arg0, 1);
            temp_a0_2 = *(D_00591E53 + ((M2C_FIELD(arg0, u8 *, 0x13) ^ 1) * 2));
            if (temp_a0_2 != 0xFF) {
                var_a1 = (s32) temp_a0_2 % 23;
            } else {
                var_a1 = 1;
            }
            temp_a1_2 = D_0058E5B0 + (var_a1 * 0x240);
            temp_f1 = (s32) (M2C_FIELD(arg0, f32 *, 0xE0) - M2C_FIELD(temp_a1_2, f32 *, 0xE0));
            temp_f0 = (s32) (M2C_FIELD(arg0, f32 *, 0xE8) - M2C_FIELD(temp_a1_2, f32 *, 0xE8));
            if (((temp_f1 * temp_f1) + (temp_f0 * temp_f0)) < 0x24001) {
                temp_a0_3 = M2C_FIELD(temp_a1_2, u8 *, 0x16);
                if ((temp_a0_3 != 0x44) && (temp_a0_3 != 0xD)) {
                    goto block_17;
                }
                temp_a0_4 = M2C_FIELD(temp_a1_2, void **, 4);
                if (M2C_FIELD(temp_a0_4, f32 *, 0x38) < (f32) ((M2C_FIELD(M2C_FIELD(temp_a0_4, void **, 4), u16 *, 8) * 2) - 2)) {
                    var_v1_2 = 1;
                } else {
                    goto block_17;
                }
            } else {
block_17:
                var_v1_2 = 0;
            }
            if (var_v1_2 != 0) {
                M2C_FIELD(arg0, s32 *, 0x9C) = (s32) (M2C_FIELD(arg0, s32 *, 0x9C) | 4);
            }
        }
        var_s1 = M2C_FIELD(arg0, u16 *, 0xFC);
        switch ((*D_005922D8)) {                       /* switch 1; irregular */
        case 0:                                     /* switch 1 */
            if (func_00A427F0(arg0, 0) >= 4) {
                (*D_005922E0) = var_s1 & 0xFFFF;
                (*D_005922D8) += 1;
                (*D_005922E4) = (s32) (*D_005926E0);
            }
            break;
        case 1:                                     /* switch 1 */
            if ((*D_005922E4) != 0) {
                temp_s2 = func_009B30B0(var_s1, (u16) (*D_005922E0)) & 0xFFFF;
                if ((func_00A427F0(arg0, 0) >= 4) && (temp_a0_5 = temp_s2 & 0xFFFF, ((temp_a0_5 < 0x20) == 0)) && (temp_a0_5 < 0x41)) {
                    (*D_005922D8) += 1;
                    (*D_005922E4) = (s32) (*D_005926E0);
                    (*D_005922DC) = ((((*D_005922E0) - (var_s1 & 0xFFFF)) + 0x10000) & 0xFFFF) < 0x8001;
                } else {
                    temp_a0_6 = (*D_005922E4) - 1;
                    (*D_005922E4) = temp_a0_6;
                    if (temp_a0_6 == 0) {
block_33:
                        (*D_005922D8) = 0;
                    }
                }
            }
            break;
        case 2:                                     /* switch 1 */
            if ((*D_005922E4) == 0) {
                goto block_33;
            }
            temp_s2_2 = func_009B30B0(var_s1, (u16) (*D_005922E0)) & 0xFFFF;
            if (func_00A427F0(arg0, 0) >= 4) {
                temp_a0_7 = temp_s2_2 & 0xFFFF;
                if ((temp_a0_7 >= 0x38) && (temp_a0_7 < 0x51)) {
                    M2C_FIELD(arg0, s32 *, 0x9C) = (s32) (M2C_FIELD(arg0, s32 *, 0x9C) | 0x10);
                }
            }
            break;
        }
        switch ((*D_005922EC)) {                       /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            if ((func_00A427F0(arg0, 0) != 0) && ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), var_s1) & 0xFFFF) < 0x20)) {
                (*D_005922EC) += 1;
                (*D_005922ED) = (*D_005926E4);
            }
            break;
        case 1:                                     /* switch 2 */
            if ((*D_005922ED) == 0) {
block_45:
                (*D_005922EC) = 0;
            } else {
                (*D_005922ED) -= 1;
                if (func_00A427F0(arg0, 0) == 0) {
                    (*D_005922EC) += 1;
                    (*D_005922ED) = (*D_005926E4);
                }
            }
            break;
        case 2:                                     /* switch 2 */
            if ((*D_005922ED) == 0) {
                goto block_45;
            }
            (*D_005922ED) -= 1;
            if ((func_00A427F0(arg0, 0) != 0) && ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), var_s1) & 0xFFFF) < 0x20)) {
                M2C_FIELD(arg0, s32 *, 0x9C) = (s32) (M2C_FIELD(arg0, s32 *, 0x9C) | 2);
            }
            break;
        }
        switch ((*D_005922EE)) {                       /* switch 3; irregular */
        case 0:                                     /* switch 3 */
            if ((func_00A427F0(arg0, 0) != 0) && ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), var_s1) & 0xFFFF) >= 0x60)) {
                (*D_005922EE) += 1;
                (*D_005922EF) = (*D_005926E4);
            }
            break;
        case 1:                                     /* switch 3 */
            if ((*D_005922EF) == 0) {
block_57:
                (*D_005922EE) = 0;
            } else {
                (*D_005922EF) -= 1;
                if (func_00A427F0(arg0, 0) == 0) {
                    (*D_005922EE) += 1;
                    (*D_005922EF) = (*D_005926E4);
                }
            }
            break;
        case 2:                                     /* switch 3 */
            if ((*D_005922EF) == 0) {
                goto block_57;
            }
            (*D_005922EF) -= 1;
            if ((func_00A427F0(arg0, 0) != 0) && ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), var_s1) & 0xFFFF) >= 0x60)) {
                M2C_FIELD(arg0, s32 *, 0x9C) = (s32) (M2C_FIELD(arg0, s32 *, 0x9C) | 8);
            }
            break;
        }
        switch ((*D_005922F0)) {                       /* switch 4; irregular */
        case 0:                                     /* switch 4 */
            if (func_00A427F0(arg0, 0) != 0) {
                temp_a0_8 = func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), var_s1) & 0xFFFF;
                if ((temp_a0_8 >= 0x20) && (temp_a0_8 < 0x61)) {
                    (*D_005922F2) = var_s1;
                    (*D_005922F0) += 1;
                    (*D_005922F1) = (*D_005926E4);
                }
            }
            break;
        case 1:                                     /* switch 4 */
            if ((*D_005922F1) == 0) {
                (*D_005922F0) = 0;
            } else {
                (*D_005922F1) -= 1;
                if (func_00A427F0(arg0, 0) == 0) {
                    (*D_005922F0) += 1;
                    (*D_005922F1) = (*D_005926E4);
                }
            }
            break;
        case 2:                                     /* switch 4 */
            if ((*D_005922F1) == 0) {
                (*D_005922F0) = 0;
            } else {
                (*D_005922F1) -= 1;
                if (func_00A427F0(arg0, 0) != 0) {
                    temp_a0_9 = func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), var_s1) & 0xFFFF;
                    if ((temp_a0_9 >= 0x20) && (temp_a0_9 < 0x61) && ((func_009B30B0((*D_005922F2), var_s1) & 0xFFFF) < 0x31)) {
                        if (((((var_s1 & 0xFFFF) - M2C_FIELD(arg0, u16 *, 0x26)) + 0x10000) & 0xFFFF) < 0x8001) {
                            var_v1_3 = M2C_FIELD(arg0, s32 *, 0x9C) | 0x20;
                        } else {
                            var_v1_3 = M2C_FIELD(arg0, s32 *, 0x9C) | 0x40;
                        }
block_78:
                        M2C_FIELD(arg0, s32 *, 0x9C) = var_v1_3;
                    }
                }
            }
            break;
        case 3:                                     /* switch 4 */
            if ((M2C_FIELD(arg0, s32 *, 0x1C) < 0x1100) && (M2C_FIELD(((char *)D_003E7574 + (*D_005926EC) * 4), s32 *, 0xFC) < 0x401) && ((*D_005922F1) != 0)) {
                (*D_005922F1) -= 1;
                if ((*D_00591E7C) != 0) {
                    temp_a0_10 = func_009B30B0((*D_005922F2), func_0099DFF0(arg0, (*D_005922F0))) & 0xFFFF;
                    if (temp_a0_10 < 0x21) {
                        M2C_FIELD(arg0, s32 *, 0x9C) = (s32) (M2C_FIELD(arg0, s32 *, 0x9C) | 0x200);
                    }
                    if (temp_a0_10 >= 0x60) {
                        var_v1_3 = M2C_FIELD(arg0, s32 *, 0x9C) | 0x400;
                        goto block_78;
                    }
                }
            } else {
                (*D_005922F0) = 0;
            }
            break;
        }
        temp_v1 = M2C_FIELD(arg0, u8 *, 0x47);
        if ((s32) temp_v1 < 8) {
            var_s1 = func_0099F360(temp_v1 & 0xFF) & 0xFFFF;
            if (func_002DCA30() != 0) {
                temp_v0 = func_00850350(M2C_FIELD(arg0, u8 *, 0x47));
                if (temp_v0 != NULL) {
                    tbl[0] = (*D_00C9A560);
                    tbl[1] = (*D_00C9A564);
                    tbl[2] = (*D_00C9A568);
                    tbl[3] = (*D_00C9A56C);
                    temp_a1_3 = (var_s1 & 0xFFFF) + *(s32 *)&tbl[M2C_FIELD(temp_v0, u8 *, 0x1B)];
                    var_a5 = temp_a1_3;
                    if (temp_a1_3 < 0x10000) {
                        if (temp_a1_3 < 0) {
                            var_a5 = temp_a1_3 + 0x10000;
                            if (var_a5 < 0) {
                                temp_a6 = 0xFFFF - var_a5;
                                temp_a4 = ((s32) (((0xFFFF - var_a5) / 2) + temp_a6) >> 0xF) + (temp_a6 >> 0x1F);
                                temp_a3 = temp_a4 + 1;
                                if (temp_a3 >= 9) {
                                    var_a0 = 0;
                                    var_v1_4 = 0;
                                    var_t1 = 0;
                                    var_t0 = 0;
                                    var_a7 = 0;
                                    var_a2 = 0;
                                    if (var_a5 <= 0) {
                                        if (temp_a1_3 < 0x7FFF0000) {
                                            var_a2 = 1;
                                        }
                                    }
                                    if ((var_a2 != 0) && (var_a5 < 0x7FFF0000)) {
                                        var_a7 = 1;
                                    }
                                    if ((var_a7 != 0) && (var_a5 != 0x80000000)) {
                                        var_t0 = 1;
                                    }
                                    if (var_t0 != 0) {
                                        temp_a1_4 = -var_a5 & 0x80000000;
                                        var_a7_2 = 1;
                                        if ((temp_a1_4 == 0) && (temp_a1_4 != 0)) {
                                            var_a7_2 = 0;
                                        }
                                        if (var_a7_2 != 0) {
                                            var_t1 = 1;
                                        }
                                    }
                                    if (var_t1 != 0) {
                                        var_a7_3 = 1;
                                        if (!(-var_a5 & 0x80000000) && (temp_a6 & 0x80000000)) {
                                            var_a7_3 = 0;
                                        }
                                        if (var_a7_3 != 0) {
                                            var_v1_4 = 1;
                                        }
                                    }
                                    if (var_v1_4 != 0) {
                                        temp_a1_5 = temp_a4 & 0x80000000;
                                        var_a2_2 = 1;
                                        if ((temp_a1_5 == 0) && (temp_a1_5 != (temp_a3 & 0x80000000))) {
                                            var_a2_2 = 0;
                                        }
                                        if (var_a2_2 != 0) {
                                            var_a0 = 1;
                                        }
                                    }
                                    if (var_a0 != 0) {
                                        do {
                                            var_a5 += 0x80000;
                                        } while (var_a5 < 0xFFF80000);
                                    }
                                }
                                if (var_a5 < 0) {
                                    do {
                                        var_a5 += 0x10000;
                                    } while (var_a5 < 0);
                                }
                            }
                        }
                    } else {
                        temp_v1_2 = temp_a1_3 - 0x8000;
                        var_a5 = temp_v1_2 - 0x8000;
                        if (var_a5 >= 0x10000) {
                            temp_a0_11 = ((s32) (((temp_v1_2 - 0x8000) / 2) + var_a5) >> 0xF) + ((u32) var_a5 >> 0x1F);
                            temp_v1_3 = temp_a0_11 + 1;
                            if (temp_v1_3 >= 9) {
                                var_a4 = 0;
                                var_a3 = 0;
                                var_a2_3 = 0;
                                var_t0_2 = 0;
                                var_a7_4 = 0;
                                if ((var_a5 >= 0xFFFF) && (temp_a1_3 >= 0x80010000)) {
                                    var_a7_4 = 1;
                                }
                                if ((var_a7_4 != 0) && (var_a5 >= 0x80010000)) {
                                    var_t0_2 = 1;
                                }
                                if (var_t0_2 != 0) {
                                    temp_a7 = var_a5 & 0x80000000;
                                    var_t1_2 = 1;
                                    if ((temp_a7 == 0x80000000) && (temp_a7 != ((temp_a1_3 + 0xFFFE0001) & 0x80000000))) {
                                        var_t1_2 = 0;
                                    }
                                    if (var_t1_2 != 0) {
                                        var_a2_3 = 1;
                                    }
                                }
                                if (var_a2_3 != 0) {
                                    var_a7_5 = 1;
                                    if (!((temp_a1_3 + 0xFFFE0001) & 0x80000000) && (var_a5 & 0x80000000)) {
                                        var_a7_5 = 0;
                                    }
                                    if (var_a7_5 != 0) {
                                        var_a3 = 1;
                                    }
                                }
                                if (var_a3 != 0) {
                                    temp_a0_12 = temp_a0_11 & 0x80000000;
                                    var_a2_4 = 1;
                                    if ((temp_a0_12 == 0) && (temp_a0_12 != (temp_v1_3 & 0x80000000))) {
                                        var_a2_4 = 0;
                                    }
                                    if (var_a2_4 != 0) {
                                        var_a4 = 1;
                                    }
                                }
                                if (var_a4 != 0) {
                                    do {
                                        var_a5 += 0xFFF80000;
                                    } while (var_a5 >= 0x90000);
                                }
                            }
                            if (var_a5 >= 0x10000) {
                                do {
                                    var_a5 = (var_a5 - 0x8000) - 0x8000;
                                } while (var_a5 >= 0x10000);
                            }
                        }
                    }
                    var_s1 = var_a5 & 0xFFFF;
                }
            }
        }
        switch ((*D_005922F4)) {                       /* switch 5; irregular */
        case 0:                                     /* switch 5 */
            if ((M2C_FIELD(arg0, u8 *, 0) == (*D_00591E4C)) && (func_00A427F0(arg0, 0) >= 4) && ((func_009B30B0(0xC000U, var_s1) & 0xFFFF) < 0x11)) {
                (*D_005922F4) += 1;
                (*D_005922F5) = (*D_005926F0);
            }
            break;
        case 1:                                     /* switch 5 */
            if ((*D_005922F5) != 0) {
                (*D_005922F5) -= 1;
                temp_s1 = func_009B30B0(0x4000U, var_s1) & 0xFFFF;
                if ((func_00A427F0(arg0, 0) >= 4) && ((temp_s1 & 0xFFFF) < 0x11)) {
                    M2C_FIELD(arg0, s32 *, 0x9C) = (s32) (M2C_FIELD(arg0, s32 *, 0x9C) | 0x80);
                    (*D_005922F4) = 0;
                    (*D_005922F5) = 0;
                }
            }
            break;
        }
        var_v1_5 = (M2C_FIELD(arg0, s32 *, 0xB0) & 0x100) == 0;
        if (var_v1_5 != 0) {
            var_v1_5 = (M2C_FIELD(arg0, s32 *, 0xB4) & 0x400) != 0;
        }
        if (var_v1_5 != 0) {
            if ((*D_005922C5) == 1) {
                M2C_FIELD(arg0, s32 *, 0x9C) = (s32) (M2C_FIELD(arg0, s32 *, 0x9C) | 2);
                M2C_FIELD(arg0, s32 *, 0xB8) = (s32) M2C_FIELD(arg0, s32 *, 0xB0);
                M2C_FIELD(arg0, s32 *, 0xB8) = (s32) (M2C_FIELD(arg0, s32 *, 0xB8) - 0x400);
                M2C_FIELD(arg0, u8 *, 0x40) = (u8) (*D_005926E0);
            } else {
                (*D_005922C5) = 1;
                (*D_005922C6) = (*D_005926EC);
            }
        }
        if ((*D_005922C6) != 0) {
            (*D_005922C6) -= 1;
            if ((*D_005922C6) == 0) {
                (*D_005922C5) = 0;
                temp_a0_13 = M2C_FIELD(arg0, s32 *, 0x9C);
                if (temp_a0_13 & 2) {
                    M2C_FIELD(arg0, s32 *, 0x9C) = (s32) (temp_a0_13 - 2);
                }
            }
        }
        if ((M2C_FIELD(arg0, s32 *, 0x1C) < 0x400) && ((u32) M2C_FIELD(arg0, u32 *, 0x110) < 0x14400U) && (M2C_FIELD(D_003E7574, s32 *, 0x50) < 0x200)) {
            temp_a0_14 = M2C_FIELD(arg0, s32 *, 0xB0);
            if ((temp_a0_14 & 0x400) && (temp_a0_14 & 0x800)) {
                M2C_FIELD(arg0, s32 *, 0x9C) = (s32) (M2C_FIELD(arg0, s32 *, 0x9C) | 0x100);
            }
        }
        var_v1_6 = (M2C_FIELD(arg0, s32 *, 0xB0) & 0x100) == 0;
        if (var_v1_6 != 0) {
            var_v1_6 = (M2C_FIELD(arg0, s32 *, 0xB4) & 0x200) != 0;
        }
        if (var_v1_6 != 0) {
            if ((*D_005922C7) == 1) {
                M2C_FIELD(arg0, s32 *, 0x9C) = (s32) (M2C_FIELD(arg0, s32 *, 0x9C) | 8);
                M2C_FIELD(arg0, s32 *, 0xB8) = (s32) M2C_FIELD(arg0, s32 *, 0xB0);
                M2C_FIELD(arg0, s32 *, 0xB8) = (s32) (M2C_FIELD(arg0, s32 *, 0xB8) - 0x200);
                M2C_FIELD(arg0, u8 *, 0x40) = (u8) (*D_005926E0);
            } else {
                (*D_005922C7) = 1;
                (*D_005922C8) = (*D_005926EC);
            }
        }
        if ((*D_005922C8) != 0) {
            (*D_005922C8) -= 1;
            if ((*D_005922C8) == 0) {
                (*D_005922C7) = 0;
                temp_a0_15 = M2C_FIELD(arg0, s32 *, 0x9C);
                if (temp_a0_15 & 8) {
                    M2C_FIELD(arg0, s32 *, 0x9C) = (s32) (temp_a0_15 - 8);
                    return;
                }
            }
        }
        return;
    }
    func_00A439C0(arg0, temp_a1);
}
