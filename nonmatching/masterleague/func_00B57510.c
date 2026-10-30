/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00236870(s32, s32, s32);
extern void func_00B52DD0(s32, s32, void *, void *, void *, void *);
extern s32 func_0022C140(s32);
extern u8 func_00225820(void);
extern u8 func_002368D0(s32, s32, s32);
extern u8 func_00239BE0(u8);
extern u8 func_00239C20(s32);
M2C_UNK func_00225680(s32);                         /* extern */
u8 *func_0022BFF0(s32, s32);                        /* extern */
s32 func_00984DF0(s32, s32);                        /* extern */
s32 func_00995330(s32, s32);                        /* extern */
s32 func_00995400(s32, s32);                        /* extern */
s32 func_0099B6E0(s32, s32);                        /* extern */
s32 func_0099B880();                                /* extern */
s32 func_00B52C70(s32, s32);                        /* extern */
s32 func_00B52F80(s32, s32, M2C_UNK);               /* extern */
s32 func_00B535B0();                                /* extern */
s32 func_00B54300();                                /* extern */
s64 func_00B569A0(s32);                             /* extern */
s32 func_00B57EB0(M2C_UNK, s32);                    /* extern */
s32 func_00B57F70();                                /* extern */
s32 func_00B58000();                                /* extern */
extern s32 D_003E77B4;

s64 func_00B57510(s32 arg0, s32 arg1) {
    s32 sp9C;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_6;
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_s0_3;
    s32 temp_s0_4;
    s32 temp_s0_5;
    s32 temp_s0_6;
    s32 temp_s0_7;
    s32 temp_s1;
    s32 temp_s1_2;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 temp_s4;
    s32 temp_s4_2;
    s32 temp_s4_3;
    s32 temp_s5;
    s32 temp_s5_2;
    s32 temp_s6;
    s32 temp_s7;
    s32 temp_v0_2;
    s32 temp_v0_5;
    s32 temp_v0_7;
    s32 temp_v0_9;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s32 var_v1_5;
    s32 var_v1_6;
    s32 var_v1_7;
    s32 var_v1_8;
    s32 var_v1_9;
    s64 temp_a0_5;
    s64 temp_a1_2;
    s64 temp_v1;
    s64 temp_v1_2;
    s64 temp_v1_3;
    s64 var_a0;
    s64 var_s1;
    s64 var_v0;
    s64 var_v0_2;
    s64 var_v0_3;
    u8 *temp_v0;
    u8 *temp_v0_10;
    u8 *temp_v0_3;
    u8 *temp_v0_4;
    u8 *temp_v0_6;
    u8 *temp_v0_8;

    temp_s3 = func_00B54300() & 0xFF;
    if ((arg0 & 0xFFFF) < 0x268) {
        temp_s0 = arg1 & 0xFF;
        if (temp_s0 >= 5) {
            goto block_266;
        }
        temp_s1 = func_00225820() & 0xFF;
        temp_s6 = func_00B535B0();
        if (func_00B52F80(temp_s3, arg1, 0) != 0) {
            if (func_00B52C70(temp_s3, arg1) != 0) {
                switch (temp_s0) {                  /* irregular */
                case 3:
                    func_00B52DD0(temp_s3, 0, NULL, &sp9C, NULL, NULL);
                    if (sp9C != 0) {
                        temp_s0_2 = func_00B57EB0(0, 6) & 0xFF;
                        if (temp_s0_2 != 0xFF) {
                            if (func_0099B6E0(temp_s0_2, temp_s3) != 0) {
                                if ((temp_s0_2 & 0xFF) == func_0099B880()) {
                                    temp_v0 = func_0022BFF0(6, func_00239C20(6) & 0xFF);
                                    if (temp_v0 != NULL) {
                                        temp_v0_2 = func_0022C140(6);
                                        if (temp_v0_2 != 0) {
                                            if (*temp_v0 != (func_00239BE0(M2C_FIELD(temp_v0_2, u8 *, 9)) & 0xFF)) {
                                                var_v1 = 0;
                                            } else {
                                                var_v1 = 1;
                                            }
                                        } else {
                                            var_v1 = 0;
                                        }
                                    } else {
                                        var_v1 = 0;
                                    }
                                    if (var_v1 == 1) {
                                        temp_a0 = func_00B57EB0(0, 6) & 0xFF;
                                        if (temp_a0 != 0xFF) {
                                            var_v1_2 = func_00984DF0(temp_a0, temp_s1) & 0xFF;
                                            if (var_v1_2 == 0xFF) {
                                                goto block_240;
                                            }
                                        } else {
block_240:
                                            var_v1_2 = 0xFF & 0xFF;
                                        }
                                        temp_s0_3 = var_v1_2 & 0xFF;
                                        if (temp_s0_3 != 0xFF) {
                                            temp_v0_3 = func_0022BFF0(6, func_00239C20(6) & 0xFF);
                                            if (temp_v0_3 != NULL) {
                                                if (M2C_FIELD(temp_v0_3, u8 *, 5) != temp_s0_3) {
                                                    if (M2C_FIELD(temp_v0_3, u8 *, 6) != temp_s0_3) {
                                                        var_v1_3 = 0;
                                                    } else {
                                                        goto block_256;
                                                    }
                                                } else {
block_256:
                                                    var_v1_3 = 1;
                                                }
                                            } else {
                                                var_v1_3 = 0;
                                            }
                                        } else {
                                            var_v1_3 = 0;
                                        }
                                        if (var_v1_3 == 1) {
                                            var_v0 = (s64) (1 << 0x38) >> 0x38;
                                        } else {
                                            goto block_259;
                                        }
                                    } else {
block_259:
                                        var_v0 = 0;
                                    }
                                } else {
                                    var_v0 = -1;
                                }
                            } else {
                                var_v0 = -1;
                            }
                        } else {
                            var_v0 = -1;
                        }
                        temp_v1 = (s64) (var_v0 << 0x38) >> 0x38;
                        if (temp_v1 >= 0) {
                            if (temp_v1 == 1) {
                                return 1;
                            }
                            goto block_266;
                        }
                        return (s64) (func_00B569A0(arg0) << 0x38) >> 0x38;
                    }
                    goto block_266;
                case 2:
                    temp_s0_4 = func_00B57EB0(0, 5) & 0xFF;
                    if (temp_s0_4 != 0xFF) {
                        if (func_0099B6E0(temp_s0_4, temp_s3) != 0) {
                            if ((temp_s0_4 & 0xFF) == func_0099B880()) {
                                temp_v0_4 = func_0022BFF0(5, func_00239C20(5) & 0xFF);
                                if (temp_v0_4 != NULL) {
                                    temp_v0_5 = func_0022C140(5);
                                    if (temp_v0_5 != 0) {
                                        if (*temp_v0_4 != (func_00239BE0(M2C_FIELD(temp_v0_5, u8 *, 9)) & 0xFF)) {
                                            var_v1_4 = 0;
                                        } else {
                                            var_v1_4 = 1;
                                        }
                                    } else {
                                        var_v1_4 = 0;
                                    }
                                } else {
                                    var_v1_4 = 0;
                                }
                                if (var_v1_4 == 1) {
                                    temp_a0_2 = func_00B57EB0(0, 5) & 0xFF;
                                    if (temp_a0_2 != 0xFF) {
                                        var_v1_5 = func_00984DF0(temp_a0_2, temp_s1) & 0xFF;
                                        if (var_v1_5 == 0xFF) {
                                            goto block_183;
                                        }
                                    } else {
block_183:
                                        var_v1_5 = 0xFF & 0xFF;
                                    }
                                    temp_s0_5 = var_v1_5 & 0xFF;
                                    if (temp_s0_5 != 0xFF) {
                                        temp_v0_6 = func_0022BFF0(5, func_00239C20(5) & 0xFF);
                                        if (temp_v0_6 != NULL) {
                                            if (M2C_FIELD(temp_v0_6, u8 *, 5) != temp_s0_5) {
                                                if (M2C_FIELD(temp_v0_6, u8 *, 6) != temp_s0_5) {
                                                    var_v1_6 = 0;
                                                } else {
                                                    goto block_199;
                                                }
                                            } else {
block_199:
                                                var_v1_6 = 1;
                                            }
                                        } else {
                                            var_v1_6 = 0;
                                        }
                                    } else {
                                        var_v1_6 = 0;
                                    }
                                    if (var_v1_6 == 1) {
                                        var_v0_2 = (s64) (1 << 0x38) >> 0x38;
                                    } else {
                                        goto block_202;
                                    }
                                } else {
block_202:
                                    var_v0_2 = 0;
                                }
                            } else {
                                var_v0_2 = -1;
                            }
                        } else {
                            var_v0_2 = -1;
                        }
                    } else {
                        var_v0_2 = -1;
                    }
                    temp_v1_2 = (s64) (var_v0_2 << 0x38) >> 0x38;
                    if (temp_v1_2 >= 0) {
                        if (temp_v1_2 == 1) {
                            return 1;
                        }
                        goto block_266;
                    }
                    return (s64) (func_00B569A0(arg0) << 0x38) >> 0x38;
                case 0:
                    temp_s0_6 = func_00B58000() & 0xFF;
                    if (temp_s0_6 != 0xFF) {
                        temp_s4 = func_00B57EB0(1, temp_s0_6) & 0xFF;
                        if (temp_s4 != 0xFF) {
                            if (func_0099B6E0(temp_s4, temp_s3) != 0) {
                                if ((temp_s4 & 0xFF) == func_0099B880()) {
                                    temp_s5 = func_00995400(temp_s4, temp_s3) & 0xFF;
                                    if (temp_s5 != 0xFF) {
                                        temp_s3_2 = func_00995330(temp_s3, temp_s1) & 0xFF;
                                        if (temp_s3_2 != 0xFF) {
                                            func_00225680(temp_s3_2);
                                            temp_s5_2 = temp_s5 & 0xFF;
                                            temp_s2 = (temp_s0_6 & 0xFF) * 0xC;
                                            temp_s7 = (temp_s5_2 / (s32) M2C_FIELD((temp_s2 + D_003E77B4), u8 *, 0x4AB9)) & 0xFF;
                                            temp_s4_2 = func_00984DF0(temp_s4, temp_s1) & 0xFF;
                                            temp_a1 = func_00984DF0(temp_s4, temp_s3_2) & 0xFF;
                                            if (((temp_s4_2 & 0xFF) != 0xFF) && ((temp_a1 & 0xFF) != 0xFF)) {
                                                temp_v0_7 = temp_s7 & 0xFF;
                                                if ((temp_v0_7 > 0) && ((func_002368D0(temp_s4_2, temp_a1, (temp_v0_7 - 1) & 0xFF) & 0xFF) == 2)) {
                                                    return 1;
                                                }
                                            }
                                            temp_a0_3 = func_00B57EB0(1, temp_s0_6) & 0xFF;
                                            if (temp_a0_3 != 0xFF) {
                                                var_a1 = func_00984DF0(temp_a0_3, temp_s1) & 0xFF;
                                                if (var_a1 == 0xFF) {
                                                    goto block_54;
                                                }
                                            } else {
block_54:
                                                var_a1 = 0xFF & 0xFF;
                                            }
                                            if ((var_a1 & 0xFF) != 0xFF) {
                                                var_s1 = (s64) (func_00236870(D_003E77B4 + 0x3CD6, var_a1, (s32) M2C_FIELD((temp_s2 + D_003E77B4), u8 *, 0x4AB6)) << 0x38) >> 0x38;
                                            } else {
                                                var_s1 = -1;
                                            }
                                            temp_a0_4 = func_00B57EB0(1, temp_s0_6) & 0xFF;
                                            if (temp_a0_4 != 0xFF) {
                                                var_a1_2 = func_00984DF0(temp_a0_4, temp_s3_2) & 0xFF;
                                                if (var_a1_2 == 0xFF) {
                                                    goto block_65;
                                                }
                                            } else {
block_65:
                                                var_a1_2 = 0xFF & 0xFF;
                                            }
                                            if ((var_a1_2 & 0xFF) != 0xFF) {
                                                var_a0 = (s64) (func_00236870(D_003E77B4 + 0x3CD6, var_a1_2, (s32) M2C_FIELD((temp_s2 + D_003E77B4), u8 *, 0x4AB6)) << 0x38) >> 0x38;
                                            } else {
                                                var_a0 = -1;
                                            }
                                            if (temp_s5_2 > 0) {
                                                temp_a1_2 = (s64) (var_s1 << 0x38) >> 0x38;
                                                if ((temp_a1_2 > 0) && (temp_s6 == 1) && (temp_a1_2 >= 0xF) && (temp_a1_2 < 0x11)) {
                                                    return 1;
                                                }
                                                if (temp_a1_2 > 0) {
                                                    temp_a0_5 = (s64) (var_a0 << 0x38) >> 0x38;
                                                    if (temp_a0_5 > 0) {
                                                        if ((temp_s6 == 1) && (temp_a1_2 >= 0xD) && (temp_a1_2 < 0xF) && (temp_a0_5 >= 0xA)) {
                                                            return 1;
                                                        }
                                                        if (temp_a1_2 == 1) {
                                                            if (temp_a0_5 == 2) {
                                                                return 1;
                                                            }
                                                            goto block_88;
                                                        }
block_88:
                                                        if (((temp_a1_2 == 2) && (temp_a0_5 == 1)) || ((temp_a1_2 == 1) && (temp_a0_5 == 1))) {
                                                            return 1;
                                                        }
                                                        goto block_266;
                                                    }
                                                }
                                                goto block_266;
                                            }
                                            goto block_266;
                                        }
                                        return (s64) (func_00B569A0(arg0) << 0x38) >> 0x38;
                                    }
                                    return (s64) (func_00B569A0(arg0) << 0x38) >> 0x38;
                                }
                                return (s64) (func_00B569A0(arg0) << 0x38) >> 0x38;
                            }
                            return (s64) (func_00B569A0(arg0) << 0x38) >> 0x38;
                        }
                        goto block_266;
                    }
                    return (s64) (func_00B569A0(arg0) << 0x38) >> 0x38;
                case 1:
                    temp_s0_7 = func_00B57F70() & 0xFF;
                    if (temp_s0_7 != 0xFF) {
                        temp_s4_3 = func_00B57EB0(0, temp_s0_7) & 0xFF;
                        if (temp_s4_3 != 0xFF) {
                            if (func_0099B6E0(temp_s4_3, temp_s3) != 0) {
                                if ((temp_s4_3 & 0xFF) == func_0099B880()) {
                                    temp_v0_8 = func_0022BFF0(temp_s0_7, func_00239C20(temp_s0_7) & 0xFF);
                                    if (temp_v0_8 != NULL) {
                                        temp_v0_9 = func_0022C140(temp_s0_7);
                                        if (temp_v0_9 != 0) {
                                            if (*temp_v0_8 != (func_00239BE0(M2C_FIELD(temp_v0_9, u8 *, 9)) & 0xFF)) {
                                                var_v1_7 = 0;
                                            } else {
                                                var_v1_7 = 1;
                                            }
                                        } else {
                                            var_v1_7 = 0;
                                        }
                                    } else {
                                        var_v1_7 = 0;
                                    }
                                    if (var_v1_7 == 1) {
                                        temp_a0_6 = func_00B57EB0(0, temp_s0_7) & 0xFF;
                                        if (temp_a0_6 != 0xFF) {
                                            var_v1_8 = func_00984DF0(temp_a0_6, temp_s1) & 0xFF;
                                            if (var_v1_8 == 0xFF) {
                                                goto block_127;
                                            }
                                        } else {
block_127:
                                            var_v1_8 = 0xFF & 0xFF;
                                        }
                                        temp_s1_2 = var_v1_8 & 0xFF;
                                        if (temp_s1_2 != 0xFF) {
                                            temp_v0_10 = func_0022BFF0(temp_s0_7, func_00239C20(temp_s0_7) & 0xFF);
                                            if (temp_v0_10 != NULL) {
                                                if (M2C_FIELD(temp_v0_10, u8 *, 5) != temp_s1_2) {
                                                    if (M2C_FIELD(temp_v0_10, u8 *, 6) != temp_s1_2) {
                                                        var_v1_9 = 0;
                                                    } else {
                                                        goto block_143;
                                                    }
                                                } else {
block_143:
                                                    var_v1_9 = 1;
                                                }
                                            } else {
                                                var_v1_9 = 0;
                                            }
                                        } else {
                                            var_v1_9 = 0;
                                        }
                                        if (var_v1_9 == 1) {
                                            var_v0_3 = (s64) (1 << 0x38) >> 0x38;
                                        } else {
                                            goto block_146;
                                        }
                                    } else {
block_146:
                                        var_v0_3 = 0;
                                    }
                                } else {
                                    var_v0_3 = -1;
                                }
                            } else {
                                var_v0_3 = -1;
                            }
                        } else {
                            var_v0_3 = -1;
                        }
                        temp_v1_3 = (s64) (var_v0_3 << 0x38) >> 0x38;
                        if (temp_v1_3 >= 0) {
                            if (temp_v1_3 == 1) {
                                return 1;
                            }
                            goto block_266;
                        }
                        return (s64) (func_00B569A0(arg0) << 0x38) >> 0x38;
                    }
                    return (s64) (func_00B569A0(arg0) << 0x38) >> 0x38;
                }
            } else {
                goto block_266;
            }
        } else {
            goto block_266;
        }
    } else {
block_266:
        return 0;
    }
}
