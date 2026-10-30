/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
s32 func_00817B70();                                /* extern */
M2C_UNK func_00817C00();                            /* extern */
s32 func_00818740();                                /* extern */
M2C_UNK func_008187D0();                            /* extern */
M2C_UNK func_00819460(M2C_UNK, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, f32, s64, s64, s64, s64); /* extern */
s32 func_0082C5B0(M2C_UNK);                         /* extern */
s32 func_0082C7C0(M2C_UNK);                         /* extern */
s32 func_0082C8A0(M2C_UNK);                         /* extern */
extern f32 D_003E7384;
extern char D_008A3390[];

s32 func_00812E20(s8 *arg0) {
    M2C_UNK *var_v1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v0;
    s32 var_v0_2;

    if (arg0 == NULL) {
        return 0;
    }
    if (*arg0 != 1) {
        func_00819460(0, func_001F08B0(0x02000005), 0, 0, -1, 0, 1, 1, 0x40800000, 0x41000000, 0x40800000, D_003E7384, 3, 1, 3, 0);
        if (func_0082C8A0(0x50) != 1) {
            if (func_0082C8A0(0x53) != 1) {
                if (func_0082C8A0(0x52) != 1) {
                    if (func_0082C5B0(0x50) >= 0x1C21) {
                        if (((void *)D_008A3390) != NULL) {
                            M2C_FIELD(((void *)D_008A3390), s32 *, 0x3C) = 0xD;
                        }
                        if (func_00818740() == 1) {
                            func_008187D0();
                        }
                        if (func_00817B70() == 1) {
                            func_00817C00();
                        }
                    }
                    goto block_77;
                }
                if (func_00818740() == 1) {
                    func_008187D0();
                }
                if (func_00817B70() == 1) {
                    func_00817C00();
                }
                if (((void *)D_008A3390) != NULL) {
                    M2C_FIELD(((void *)D_008A3390), s32 *, 0x3C) = 0xD;
                    return 1;
                }
                goto block_77;
            }
            if (func_00818740() == 1) {
                func_008187D0();
            }
            if (func_00817B70() == 1) {
                func_00817C00();
            }
            temp_v0 = func_0082C7C0(0x53);
            switch (temp_v0) {                      /* switch 2; irregular */
            case 0:                                 /* switch 2 */
                if (((void *)D_008A3390) != NULL) {
                    var_v0 = 0x10;
block_59:
                    M2C_FIELD(((void *)D_008A3390), s32 *, 0x3C) = var_v0;
block_60:
                    return 1;
                }
                goto block_77;
            case -530:                              /* switch 2 */
                if (((void *)D_008A3390) != NULL) {
                    var_v0 = 0x11;
                    goto block_59;
                }
                goto block_60;
            default:                                /* switch 2 */
            case -600:                              /* switch 2 */
            case -506:                              /* switch 2 */
            case -507:                              /* switch 2 */
                if (((void *)D_008A3390) != NULL) {
                    var_v0 = 0x11;
                    goto block_59;
                }
                goto block_60;
            }
        } else {
            if (func_00818740() == 1) {
                func_008187D0();
            }
            if (func_00817B70() == 1) {
                func_00817C00();
            }
            temp_v0_2 = func_0082C7C0(0x50);
            switch (temp_v0_2) {                    /* switch 1; irregular */
            case 0:                                 /* switch 1 */
                var_v1 = ((void *)D_008A3390);
                if (((void *)D_008A3390) != NULL) {
                    var_v0_2 = 0xB;
block_38:
                    M2C_FIELD(var_v1, s32 *, 0x3C) = var_v0_2;
block_39:
                    return 1;
                }
                goto block_77;
            case -602:                              /* switch 1 */
                var_v1 = ((void *)D_008A3390);
                if (((void *)D_008A3390) != NULL) {
                    var_v0_2 = 0xF;
                    goto block_38;
                }
                goto block_39;
            case -512:                              /* switch 1 */
            case -507:                              /* switch 1 */
            case -525:                              /* switch 1 */
                var_v1 = ((void *)D_008A3390);
                if (((void *)D_008A3390) != NULL) {
                    var_v0_2 = 0xD;
                    goto block_38;
                }
                goto block_39;
            case -523:                              /* switch 1 */
                var_v1 = ((void *)D_008A3390);
                if (((void *)D_008A3390) != NULL) {
                    var_v0_2 = 0xE;
                    goto block_38;
                }
                goto block_39;
            case -522:                              /* switch 1 */
                var_v1 = ((void *)D_008A3390);
                if (((void *)D_008A3390) != NULL) {
                    var_v0_2 = 0xD;
                    goto block_38;
                }
                goto block_39;
            default:                                /* switch 1 */
                var_v1 = (M2C_UNK *)0x8A3390;
                if (0x8A3390 != 0) {
                    var_v0_2 = 0xD;
                    goto block_38;
                }
                goto block_39;
            }
        }
    } else {
        if (((void *)D_008A3390) != NULL) {
            M2C_FIELD(((void *)D_008A3390), s32 *, 0x3C) = 0x11;
        }
        if (func_00818740() == 1) {
            func_008187D0();
        }
        if (func_00817B70() == 1) {
            func_00817C00();
            return 1;
        }
block_77:
        return 1;
    }
}
