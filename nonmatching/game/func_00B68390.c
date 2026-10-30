/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00B69A80(void);
extern s64 func_002BE490(s32, s32);
extern s32 func_00BBB8C0(s32);
extern char D_00591DCD[];
extern char D_00591E57[];
extern char Pes6MatchSquads[];

s32 func_00B68390(void **arg0, s32 arg1) {
    s32 var_v0;
    s64 temp_s0_10;
    s64 temp_s0_11;
    s64 temp_s0_12;
    s64 temp_s0_13;
    s64 temp_s0_14;
    s64 temp_s0_15;
    s64 temp_s0_16;
    s64 temp_s0_17;
    s64 temp_s0_18;
    s64 temp_s0_19;
    s64 temp_s0_20;
    s64 temp_s0_21;
    s64 temp_s0_22;
    s64 temp_s0_23;
    s64 temp_s0_24;
    s64 temp_s0_25;
    s64 temp_s0_26;
    s64 temp_s0_27;
    s64 temp_s0_28;
    s64 temp_s0_29;
    s64 temp_s0_2;
    s64 temp_s0_30;
    s64 temp_s0_31;
    s64 temp_s0_32;
    s64 temp_s0_33;
    s64 temp_s0_34;
    s64 temp_s0_35;
    s64 temp_s0_36;
    s64 temp_s0_37;
    s64 temp_s0_38;
    s64 temp_s0_39;
    s64 temp_s0_3;
    s64 temp_s0_40;
    s64 temp_s0_41;
    s64 temp_s0_42;
    s64 temp_s0_43;
    s64 temp_s0_44;
    s64 temp_s0_45;
    s64 temp_s0_46;
    s64 temp_s0_47;
    s64 temp_s0_48;
    s64 temp_s0_49;
    s64 temp_s0_4;
    s64 temp_s0_50;
    s64 temp_s0_51;
    s64 temp_s0_52;
    s64 temp_s0_53;
    s64 temp_s0_54;
    s64 temp_s0_55;
    s64 temp_s0_56;
    s64 temp_s0_57;
    s64 temp_s0_58;
    s64 temp_s0_59;
    s64 temp_s0_5;
    s64 temp_s0_60;
    s64 temp_s0_6;
    s64 temp_s0_7;
    s64 temp_s0_8;
    s64 temp_s0_9;
    u64 temp_a2;
    u8 temp_s0;
    void *temp_v1;

    temp_v1 = *arg0;
    temp_s0 = M2C_FIELD(temp_v1, u8 *, 0x12);
    temp_a2 = (u64) ((s64) M2C_FIELD(((M2C_FIELD(temp_v1, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (temp_s0 * 0x6900))), u8 *, 0x89) << 0x3B) >> 0x3E;
    var_v0 = 1;
    switch (temp_a2) {                              /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        switch (arg1) {                             /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            if ((*(u8 *)D_00591DCD) != 0) {
                temp_s0_2 = (s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30;
                if ((temp_s0_2 - ((s64) (func_002BE490(((temp_s0 & 0xFF) ^ 1) & 0xFF, 1) << 0x30) >> 0x30)) != 0) {
                    temp_s0_3 = (s64) (func_002BE490((M2C_FIELD(*arg0, u8 *, 0x12) ^ 1) & 0xFF, 1) << 0x30) >> 0x30;
                    if ((((s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30) - temp_s0_3) <= 0) {
                        var_v0 = 2;
                    } else {
                        goto block_235;
                    }
                } else {
                    var_v0 = 2;
                }
            } else {
                temp_s0_4 = (s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30;
                if ((temp_s0_4 - ((s64) (func_002BE490(((temp_s0 & 0xFF) ^ 1) & 0xFF, 1) << 0x30) >> 0x30)) != 0) {
                    temp_s0_5 = (s64) (func_002BE490((M2C_FIELD(*arg0, u8 *, 0x12) ^ 1) & 0xFF, 1) << 0x30) >> 0x30;
                    if ((((s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30) - temp_s0_5) <= 0) {
                        var_v0 = 2;
                    } else {
                        var_v0 = 0;
                    }
                } else {
block_235:
                    var_v0 = 1;
                }
            }
            break;
        case 1:                                     /* switch 2 */
            if ((*(u8 *)D_00591DCD) != 0) {
                temp_s0_6 = (s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30;
                if ((temp_s0_6 - ((s64) (func_002BE490(((temp_s0 & 0xFF) ^ 1) & 0xFF, 1) << 0x30) >> 0x30)) != 0) {
                    temp_s0_7 = (s64) (func_002BE490((M2C_FIELD(*arg0, u8 *, 0x12) ^ 1) & 0xFF, 1) << 0x30) >> 0x30;
                    if ((((s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30) - temp_s0_7) <= 0) {
                        if (M2C_FIELD(*arg0, u8 *, 0) != (*(u8 *)D_00591E57)) {
                            if (func_00BBB8C0(2) != 0) {
                                var_v0 = 6;
                            } else {
                                var_v0 = 4;
                            }
                        } else {
                            var_v0 = 2;
                        }
                    } else if (M2C_FIELD(*arg0, u8 *, 0) != (*(u8 *)D_00591E57)) {
                        var_v0 = 3;
                    } else {
                        goto block_235;
                    }
                } else if (M2C_FIELD(*arg0, u8 *, 0) != (*(u8 *)D_00591E57)) {
                    if (func_00BBB8C0(2) != 0) {
                        var_v0 = 6;
                    } else {
                        var_v0 = 4;
                    }
                } else {
                    var_v0 = 2;
                }
            } else {
                temp_s0_8 = (s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30;
                if ((temp_s0_8 - ((s64) (func_002BE490(((temp_s0 & 0xFF) ^ 1) & 0xFF, 1) << 0x30) >> 0x30)) != 0) {
                    temp_s0_9 = (s64) (func_002BE490((M2C_FIELD(*arg0, u8 *, 0x12) ^ 1) & 0xFF, 1) << 0x30) >> 0x30;
                    if ((((s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30) - temp_s0_9) <= 0) {
                        if (M2C_FIELD(*arg0, u8 *, 0) != (*(u8 *)D_00591E57)) {
                            if (func_00BBB8C0(2) != 0) {
                                var_v0 = 5;
                            } else {
                                var_v0 = 4;
                            }
                        } else {
                            var_v0 = 2;
                        }
                    } else if (M2C_FIELD(*arg0, u8 *, 0) != (*(u8 *)D_00591E57)) {
                        var_v0 = 3;
                    } else {
                        var_v0 = 0;
                    }
                } else if (M2C_FIELD(*arg0, u8 *, 0) != (*(u8 *)D_00591E57)) {
                    var_v0 = 3;
                } else {
                    goto block_235;
                }
            }
            break;
        case 2:                                     /* switch 2 */
            if ((*(u8 *)D_00591DCD) != 0) {
                temp_s0_10 = (s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30;
                if ((temp_s0_10 - ((s64) (func_002BE490(((temp_s0 & 0xFF) ^ 1) & 0xFF, 1) << 0x30) >> 0x30)) == 0) {
                    if (func_00BBB8C0(2) != 0) {
                        var_v0 = 6;
                    } else {
                        goto block_235;
                    }
                } else {
                    temp_s0_11 = (s64) (func_002BE490((M2C_FIELD(*arg0, u8 *, 0x12) ^ 1) & 0xFF, 1) << 0x30) >> 0x30;
                    if ((((s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30) - temp_s0_11) <= 0) {
                        if (func_00BBB8C0(2) != 0) {
                            var_v0 = 6;
                        } else {
                            goto block_235;
                        }
                    } else {
                        goto block_235;
                    }
                }
            } else {
                temp_s0_12 = (s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30;
                if ((temp_s0_12 - ((s64) (func_002BE490(((temp_s0 & 0xFF) ^ 1) & 0xFF, 1) << 0x30) >> 0x30)) == 0) {
                    if (func_00BBB8C0(2) != 0) {
                        var_v0 = 5;
                    } else {
                        goto block_235;
                    }
                } else {
                    temp_s0_13 = (s64) (func_002BE490((M2C_FIELD(*arg0, u8 *, 0x12) ^ 1) & 0xFF, 1) << 0x30) >> 0x30;
                    if ((((s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30) - temp_s0_13) <= 0) {
                        if (func_00BBB8C0(2) != 0) {
                            var_v0 = 6;
                        } else {
                            goto block_235;
                        }
                    } else {
                        var_v0 = 0;
                    }
                }
            }
            break;
        case 3:                                     /* switch 2 */
            if ((*(u8 *)D_00591DCD) != 0) {
                temp_s0_14 = (s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30;
                if ((temp_s0_14 - ((s64) (func_002BE490(((temp_s0 & 0xFF) ^ 1) & 0xFF, 1) << 0x30) >> 0x30)) != 0) {
                    temp_s0_15 = (s64) (func_002BE490((M2C_FIELD(*arg0, u8 *, 0x12) ^ 1) & 0xFF, 1) << 0x30) >> 0x30;
                    if ((((s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30) - temp_s0_15) <= 0) {
                        var_v0 = 2;
                    } else {
                        goto block_235;
                    }
                } else {
                    var_v0 = 2;
                }
            } else {
                temp_s0_16 = (s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30;
                if ((temp_s0_16 - ((s64) (func_002BE490(((temp_s0 & 0xFF) ^ 1) & 0xFF, 1) << 0x30) >> 0x30)) != 0) {
                    temp_s0_17 = (s64) (func_002BE490((M2C_FIELD(*arg0, u8 *, 0x12) ^ 1) & 0xFF, 1) << 0x30) >> 0x30;
                    if ((((s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30) - temp_s0_17) <= 0) {
                        var_v0 = 2;
                    } else {
                        var_v0 = 0;
                    }
                } else {
                    goto block_235;
                }
            }
            break;
        }
        break;
    case 1:                                         /* switch 1 */
        switch (arg1) {                             /* switch 3; irregular */
        case 0:                                     /* switch 3 */
            if ((*(u8 *)D_00591DCD) != 0) {
                temp_s0_18 = (s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30;
                if ((temp_s0_18 - ((s64) (func_002BE490(((temp_s0 & 0xFF) ^ 1) & 0xFF, 1) << 0x30) >> 0x30)) != 0) {
                    temp_s0_19 = (s64) (func_002BE490((M2C_FIELD(*arg0, u8 *, 0x12) ^ 1) & 0xFF, 1) << 0x30) >> 0x30;
                    if ((((s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30) - temp_s0_19) <= 0) {
                        var_v0 = 2;
                    } else {
                        var_v0 = 0;
                    }
                } else {
                    var_v0 = 2;
                }
            } else {
                temp_s0_20 = (s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30;
                if ((temp_s0_20 - ((s64) (func_002BE490(((temp_s0 & 0xFF) ^ 1) & 0xFF, 1) << 0x30) >> 0x30)) != 0) {
                    temp_s0_21 = (s64) (func_002BE490((M2C_FIELD(*arg0, u8 *, 0x12) ^ 1) & 0xFF, 1) << 0x30) >> 0x30;
                    if ((((s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30) - temp_s0_21) > 0) {
                        var_v0 = 0;
                    } else {
                        goto block_235;
                    }
                } else {
                    var_v0 = 0;
                }
            }
            break;
        case 1:                                     /* switch 3 */
            if ((*(u8 *)D_00591DCD) != 0) {
                temp_s0_22 = (s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30;
                if ((temp_s0_22 - ((s64) (func_002BE490(((temp_s0 & 0xFF) ^ 1) & 0xFF, 1) << 0x30) >> 0x30)) != 0) {
                    temp_s0_23 = (s64) (func_002BE490((M2C_FIELD(*arg0, u8 *, 0x12) ^ 1) & 0xFF, 1) << 0x30) >> 0x30;
                    if ((((s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30) - temp_s0_23) <= 0) {
                        if (M2C_FIELD(*arg0, u8 *, 0) != (*(u8 *)D_00591E57)) {
                            if (func_00BBB8C0(2) != 0) {
                                var_v0 = 6;
                            } else {
                                var_v0 = 4;
                            }
                        } else {
                            var_v0 = 2;
                        }
                    } else if (M2C_FIELD(*arg0, u8 *, 0) != (*(u8 *)D_00591E57)) {
                        var_v0 = 3;
                    } else {
                        goto block_235;
                    }
                } else if (M2C_FIELD(*arg0, u8 *, 0) != (*(u8 *)D_00591E57)) {
                    if (func_00BBB8C0(2) != 0) {
                        var_v0 = 5;
                    } else {
                        var_v0 = 4;
                    }
                } else if (func_00B69A80() != 0) {
                    var_v0 = 2;
                } else {
                    goto block_235;
                }
            } else {
                temp_s0_24 = (s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30;
                if ((temp_s0_24 - ((s64) (func_002BE490(((temp_s0 & 0xFF) ^ 1) & 0xFF, 1) << 0x30) >> 0x30)) != 0) {
                    temp_s0_25 = (s64) (func_002BE490((M2C_FIELD(*arg0, u8 *, 0x12) ^ 1) & 0xFF, 1) << 0x30) >> 0x30;
                    if ((((s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30) - temp_s0_25) <= 0) {
                        if (M2C_FIELD(*arg0, u8 *, 0) != (*(u8 *)D_00591E57)) {
                            var_v0 = 3;
                        } else {
                            goto block_235;
                        }
                    } else if (M2C_FIELD(*arg0, u8 *, 0) != (*(u8 *)D_00591E57)) {
                        var_v0 = 3;
                    } else {
                        var_v0 = 0;
                    }
                } else if (M2C_FIELD(*arg0, u8 *, 0) != (*(u8 *)D_00591E57)) {
                    var_v0 = 3;
                } else {
                    var_v0 = 0;
                }
            }
            break;
        case 2:                                     /* switch 3 */
            if ((*(u8 *)D_00591DCD) != 0) {
                temp_s0_26 = (s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30;
                if ((temp_s0_26 - ((s64) (func_002BE490(((temp_s0 & 0xFF) ^ 1) & 0xFF, 1) << 0x30) >> 0x30)) == 0) {
                    if (func_00BBB8C0(2) != 0) {
                        var_v0 = 6;
                    } else {
                        goto block_235;
                    }
                } else {
                    temp_s0_27 = (s64) (func_002BE490((M2C_FIELD(*arg0, u8 *, 0x12) ^ 1) & 0xFF, 1) << 0x30) >> 0x30;
                    if ((((s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30) - temp_s0_27) <= 0) {
                        if (func_00BBB8C0(2) != 0) {
                            var_v0 = 6;
                        } else {
                            goto block_235;
                        }
                    } else {
                        var_v0 = 0;
                    }
                }
            } else {
                temp_s0_28 = (s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30;
                if ((temp_s0_28 - ((s64) (func_002BE490(((temp_s0 & 0xFF) ^ 1) & 0xFF, 1) << 0x30) >> 0x30)) == 0) {
                    if (func_00BBB8C0(2) != 0) {
                        var_v0 = 5;
                    } else {
                        var_v0 = 0;
                    }
                } else {
                    temp_s0_29 = (s64) (func_002BE490((M2C_FIELD(*arg0, u8 *, 0x12) ^ 1) & 0xFF, 1) << 0x30) >> 0x30;
                    if ((((s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30) - temp_s0_29) <= 0) {
                        if (func_00BBB8C0(2) != 0) {
                            var_v0 = 5;
                        } else {
                            goto block_235;
                        }
                    } else {
                        var_v0 = 0;
                    }
                }
            }
            break;
        case 3:                                     /* switch 3 */
            if ((*(u8 *)D_00591DCD) != 0) {
                temp_s0_30 = (s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30;
                if ((temp_s0_30 - ((s64) (func_002BE490(((temp_s0 & 0xFF) ^ 1) & 0xFF, 1) << 0x30) >> 0x30)) != 0) {
                    temp_s0_31 = (s64) (func_002BE490((M2C_FIELD(*arg0, u8 *, 0x12) ^ 1) & 0xFF, 1) << 0x30) >> 0x30;
                    if ((((s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30) - temp_s0_31) <= 0) {
                        var_v0 = 2;
                    } else {
                        var_v0 = 0;
                    }
                } else {
                    var_v0 = 2;
                }
            } else {
                temp_s0_32 = (s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30;
                if ((temp_s0_32 - ((s64) (func_002BE490(((temp_s0 & 0xFF) ^ 1) & 0xFF, 1) << 0x30) >> 0x30)) != 0) {
                    temp_s0_33 = (s64) (func_002BE490((M2C_FIELD(*arg0, u8 *, 0x12) ^ 1) & 0xFF, 1) << 0x30) >> 0x30;
                    if ((((s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30) - temp_s0_33) > 0) {
                        var_v0 = 0;
                    } else {
                        goto block_235;
                    }
                } else {
                    var_v0 = 0;
                }
            }
            break;
        }
        break;
    case 2:                                         /* switch 1 */
        switch (arg1) {                             /* switch 4; irregular */
        case 0:                                     /* switch 4 */
            if ((*(u8 *)D_00591DCD) != 0) {
                temp_s0_34 = (s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30;
                if ((temp_s0_34 - ((s64) (func_002BE490(((temp_s0 & 0xFF) ^ 1) & 0xFF, 1) << 0x30) >> 0x30)) != 0) {
                    temp_s0_35 = (s64) (func_002BE490((M2C_FIELD(*arg0, u8 *, 0x12) ^ 1) & 0xFF, 1) << 0x30) >> 0x30;
                    if ((((s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30) - temp_s0_35) <= 0) {
                        var_v0 = 2;
                    } else {
                        var_v0 = 0;
                    }
                } else {
                    goto block_235;
                }
            } else {
                temp_s0_36 = (s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30;
                if ((temp_s0_36 - ((s64) (func_002BE490(((temp_s0 & 0xFF) ^ 1) & 0xFF, 1) << 0x30) >> 0x30)) != 0) {
                    temp_s0_37 = (s64) (func_002BE490((M2C_FIELD(*arg0, u8 *, 0x12) ^ 1) & 0xFF, 1) << 0x30) >> 0x30;
                    if ((((s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30) - temp_s0_37) > 0) {
                        var_v0 = 0;
                    } else {
                        goto block_235;
                    }
                } else {
                    var_v0 = 0;
                }
            }
            break;
        case 1:                                     /* switch 4 */
            if ((*(u8 *)D_00591DCD) != 0) {
                temp_s0_38 = (s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30;
                if ((temp_s0_38 - ((s64) (func_002BE490(((temp_s0 & 0xFF) ^ 1) & 0xFF, 1) << 0x30) >> 0x30)) != 0) {
                    temp_s0_39 = (s64) (func_002BE490((M2C_FIELD(*arg0, u8 *, 0x12) ^ 1) & 0xFF, 1) << 0x30) >> 0x30;
                    if ((((s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30) - temp_s0_39) <= 0) {
                        if (M2C_FIELD(*arg0, u8 *, 0) != (*(u8 *)D_00591E57)) {
                            if (func_00BBB8C0(2) != 0) {
                                var_v0 = 5;
                            } else {
                                var_v0 = 4;
                            }
                        } else {
                            var_v0 = 2;
                        }
                    } else if (M2C_FIELD(*arg0, u8 *, 0) != (*(u8 *)D_00591E57)) {
                        var_v0 = 3;
                    } else {
                        var_v0 = 0;
                    }
                } else if (M2C_FIELD(*arg0, u8 *, 0) != (*(u8 *)D_00591E57)) {
                    var_v0 = 3;
                } else {
                    goto block_235;
                }
            } else {
                temp_s0_40 = (s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30;
                if ((temp_s0_40 - ((s64) (func_002BE490(((temp_s0 & 0xFF) ^ 1) & 0xFF, 1) << 0x30) >> 0x30)) != 0) {
                    temp_s0_41 = (s64) (func_002BE490((M2C_FIELD(*arg0, u8 *, 0x12) ^ 1) & 0xFF, 1) << 0x30) >> 0x30;
                    if ((((s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30) - temp_s0_41) <= 0) {
                        if (M2C_FIELD(*arg0, u8 *, 0) != (*(u8 *)D_00591E57)) {
                            var_v0 = 3;
                        } else {
                            goto block_235;
                        }
                    } else if (M2C_FIELD(*arg0, u8 *, 0) != (*(u8 *)D_00591E57)) {
                        var_v0 = 3;
                    } else {
                        var_v0 = 0;
                    }
                } else if (M2C_FIELD(*arg0, u8 *, 0) != (*(u8 *)D_00591E57)) {
                    var_v0 = 3;
                } else {
                    var_v0 = 0;
                }
            }
            break;
        case 2:                                     /* switch 4 */
            if ((*(u8 *)D_00591DCD) != 0) {
                temp_s0_42 = (s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30;
                if ((temp_s0_42 - ((s64) (func_002BE490(((temp_s0 & 0xFF) ^ 1) & 0xFF, 1) << 0x30) >> 0x30)) == 0) {
                    if (func_00BBB8C0(2) != 0) {
                        var_v0 = 5;
                    } else {
                        goto block_235;
                    }
                } else {
                    temp_s0_43 = (s64) (func_002BE490((M2C_FIELD(*arg0, u8 *, 0x12) ^ 1) & 0xFF, 1) << 0x30) >> 0x30;
                    if ((((s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30) - temp_s0_43) <= 0) {
                        if (func_00BBB8C0(2) != 0) {
                            var_v0 = 5;
                        } else {
                            goto block_235;
                        }
                    } else {
                        var_v0 = 0;
                    }
                }
            } else {
                temp_s0_44 = (s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30;
                if ((temp_s0_44 - ((s64) (func_002BE490(((temp_s0 & 0xFF) ^ 1) & 0xFF, 1) << 0x30) >> 0x30)) != 0) {
                    temp_s0_45 = (s64) (func_002BE490((M2C_FIELD(*arg0, u8 *, 0x12) ^ 1) & 0xFF, 1) << 0x30) >> 0x30;
                    if ((((s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30) - temp_s0_45) <= 0) {
                        if (func_00BBB8C0(2) != 0) {
                            var_v0 = 5;
                        } else {
                            var_v0 = 0;
                        }
                    } else {
                        var_v0 = 0;
                    }
                } else {
                    var_v0 = 0;
                }
            }
            break;
        case 3:                                     /* switch 4 */
            if ((*(u8 *)D_00591DCD) != 0) {
                temp_s0_46 = (s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30;
                if ((temp_s0_46 - ((s64) (func_002BE490(((temp_s0 & 0xFF) ^ 1) & 0xFF, 1) << 0x30) >> 0x30)) != 0) {
                    temp_s0_47 = (s64) (func_002BE490((M2C_FIELD(*arg0, u8 *, 0x12) ^ 1) & 0xFF, 1) << 0x30) >> 0x30;
                    if ((((s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30) - temp_s0_47) <= 0) {
                        var_v0 = 2;
                    } else {
                        var_v0 = 0;
                    }
                } else {
                    goto block_235;
                }
            } else {
                temp_s0_48 = (s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30;
                if ((temp_s0_48 - ((s64) (func_002BE490(((temp_s0 & 0xFF) ^ 1) & 0xFF, 1) << 0x30) >> 0x30)) != 0) {
                    temp_s0_49 = (s64) (func_002BE490((M2C_FIELD(*arg0, u8 *, 0x12) ^ 1) & 0xFF, 1) << 0x30) >> 0x30;
                    if ((((s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30) - temp_s0_49) > 0) {
                        var_v0 = 0;
                    } else {
                        goto block_235;
                    }
                } else {
                    var_v0 = 0;
                }
            }
            break;
        }
        break;
    case 3:                                         /* switch 1 */
        switch (arg1) {                             /* switch 5; irregular */
        case 2:                                     /* switch 5 */
            var_v0 = 0;
            break;
        case 0:                                     /* switch 5 */
            if ((*(u8 *)D_00591DCD) != 0) {
                temp_s0_50 = (s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30;
                if ((temp_s0_50 - ((s64) (func_002BE490(((temp_s0 & 0xFF) ^ 1) & 0xFF, 1) << 0x30) >> 0x30)) != 0) {
                    temp_s0_51 = (s64) (func_002BE490((M2C_FIELD(*arg0, u8 *, 0x12) ^ 1) & 0xFF, 1) << 0x30) >> 0x30;
                    if ((((s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30) - temp_s0_51) > 0) {
                        var_v0 = 0;
                    } else {
                        goto block_235;
                    }
                } else {
                    goto block_235;
                }
            } else {
                temp_s0_52 = (s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30;
                if ((temp_s0_52 - ((s64) (func_002BE490(((temp_s0 & 0xFF) ^ 1) & 0xFF, 1) << 0x30) >> 0x30)) != 0) {
                    func_002BE490((M2C_FIELD(*arg0, u8 *, 0x12) ^ 1) & 0xFF, 1);
                    func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1);
                    var_v0 = 0;
                } else {
                    var_v0 = 0;
                }
            }
            break;
        case 1:                                     /* switch 5 */
            if ((*(u8 *)D_00591DCD) != 0) {
                temp_s0_53 = (s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30;
                if ((temp_s0_53 - ((s64) (func_002BE490(((temp_s0 & 0xFF) ^ 1) & 0xFF, 1) << 0x30) >> 0x30)) != 0) {
                    temp_s0_54 = (s64) (func_002BE490((M2C_FIELD(*arg0, u8 *, 0x12) ^ 1) & 0xFF, 1) << 0x30) >> 0x30;
                    if ((((s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30) - temp_s0_54) <= 0) {
                        if (M2C_FIELD(*arg0, u8 *, 0) != (*(u8 *)D_00591E57)) {
                            var_v0 = 3;
                        } else {
                            goto block_235;
                        }
                    } else if (M2C_FIELD(*arg0, u8 *, 0) != (*(u8 *)D_00591E57)) {
                        var_v0 = 3;
                    } else {
                        var_v0 = 0;
                    }
                } else if (M2C_FIELD(*arg0, u8 *, 0) != (*(u8 *)D_00591E57)) {
                    var_v0 = 3;
                } else {
                    goto block_235;
                }
            } else {
                temp_s0_55 = (s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30;
                if ((temp_s0_55 - ((s64) (func_002BE490(((temp_s0 & 0xFF) ^ 1) & 0xFF, 1) << 0x30) >> 0x30)) != 0) {
                    temp_s0_56 = (s64) (func_002BE490((M2C_FIELD(*arg0, u8 *, 0x12) ^ 1) & 0xFF, 1) << 0x30) >> 0x30;
                    if ((((s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30) - temp_s0_56) <= 0) {
                        if (M2C_FIELD(*arg0, u8 *, 0) != (*(u8 *)D_00591E57)) {
                            var_v0 = 3;
                        } else {
                            var_v0 = 0;
                        }
                    } else if (M2C_FIELD(*arg0, u8 *, 0) != (*(u8 *)D_00591E57)) {
                        var_v0 = 3;
                    } else {
                        var_v0 = 0;
                    }
                } else if (M2C_FIELD(*arg0, u8 *, 0) != (*(u8 *)D_00591E57)) {
                    var_v0 = 3;
                } else {
                    var_v0 = 0;
                }
            }
            break;
        case 3:                                     /* switch 5 */
            if ((*(u8 *)D_00591DCD) != 0) {
                temp_s0_57 = (s64) (func_002BE490((s32) temp_s0, 1) << 0x30) >> 0x30;
                if ((temp_s0_57 - ((s64) (func_002BE490(((temp_s0 & 0xFF) ^ 1) & 0xFF, 1) << 0x30) >> 0x30)) != 0) {
                    temp_s0_58 = (s64) (func_002BE490((M2C_FIELD(*arg0, u8 *, 0x12) ^ 1) & 0xFF, 1) << 0x30) >> 0x30;
                    if ((((s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30) - temp_s0_58) > 0) {
                        var_v0 = 0;
                    } else {
                        goto block_235;
                    }
                } else {
                    goto block_235;
                }
            } else {
                temp_s0_59 = (s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30;
                if ((temp_s0_59 - ((s64) (func_002BE490(((temp_s0 & 0xFF) ^ 1) & 0xFF, 1) << 0x30) >> 0x30)) != 0) {
                    temp_s0_60 = (s64) (func_002BE490((M2C_FIELD(*arg0, u8 *, 0x12) ^ 1) & 0xFF, 1) << 0x30) >> 0x30;
                    if ((((s64) (func_002BE490((s32) M2C_FIELD(*arg0, u8 *, 0x12), 1) << 0x30) >> 0x30) - temp_s0_60) > 0) {
                        var_v0 = 0;
                    } else {
                        goto block_235;
                    }
                } else {
                    var_v0 = 0;
                }
            }
            break;
        }
        break;
    }
    return var_v0;
}
