/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
s32 func_00817B70();                                /* extern */
M2C_UNK func_00817C00();                            /* extern */
s32 func_00818740();                                /* extern */
M2C_UNK func_008187D0();                            /* extern */
M2C_UNK func_00819460(M2C_UNK, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s64, s64, s64, s64); /* extern */
s32 func_0082C5B0(M2C_UNK);                         /* extern */
s32 func_0082C7C0(M2C_UNK);                         /* extern */
s32 func_0082C8A0(M2C_UNK);                         /* extern */
extern char D_00A43380[];

s32 func_009373A0(void *arg0) {
    M2C_UNK *var_v1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v0;

    if (arg0 == NULL) {
        return 0;
    }
    if (M2C_FIELD(arg0, s8 *, 0) != 1) {
        func_00819460(0, func_001F08B0(0x02000005), 0, 0, -1, 0, 1, 1, 0x40800000, 0x41000000, 0x40800000, 0x4484D000, 3, 1, 3, 0);
        if (func_0082C8A0(0x77) != 1) {
            if (func_0082C8A0(0x79) != 1) {
                if (func_0082C8A0(0x78) != 1) {
                    if (func_0082C5B0(0x77) >= 0x1C21) {
                        if (((void *)D_00A43380) != NULL) {
                            M2C_FIELD(((void *)D_00A43380), s32 *, 0x3C) = 0xB;
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
                if (((void *)D_00A43380) != NULL) {
                    M2C_FIELD(((void *)D_00A43380), s32 *, 0x3C) = 0xB;
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
            temp_v0 = func_0082C7C0(0x79);
            switch (temp_v0) {                      /* switch 2; irregular */
            case 0:                                 /* switch 2 */
                if (((void *)D_00A43380) != NULL) {
block_59:
                    M2C_FIELD(((void *)D_00A43380), s32 *, 0x3C) = 0xE;
block_60:
                    return 1;
                }
                goto block_77;
            case -530:                              /* switch 2 */
                if (((void *)D_00A43380) != NULL) {
                    goto block_59;
                }
                goto block_60;
            default:                                /* switch 2 */
            case -600:                              /* switch 2 */
            case -506:                              /* switch 2 */
            case -507:                              /* switch 2 */
                if (((void *)D_00A43380) != NULL) {
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
            temp_v0_2 = func_0082C7C0(0x77);
            switch (temp_v0_2) {                    /* switch 1; irregular */
            case 0:                                 /* switch 1 */
                var_v1 = ((void *)D_00A43380);
                if (((void *)D_00A43380) != NULL) {
                    var_v0 = 9;
block_38:
                    M2C_FIELD(var_v1, s32 *, 0x3C) = var_v0;
block_39:
                    return 1;
                }
                goto block_77;
            case -716:                              /* switch 1 */
                var_v1 = ((void *)D_00A43380);
                if (((void *)D_00A43380) != NULL) {
                    var_v0 = 0xE;
                    goto block_38;
                }
                goto block_39;
            case -512:                              /* switch 1 */
            case -507:                              /* switch 1 */
            case -525:                              /* switch 1 */
                var_v1 = ((void *)D_00A43380);
                if (((void *)D_00A43380) != NULL) {
                    var_v0 = 0xB;
                    goto block_38;
                }
                goto block_39;
            case -523:                              /* switch 1 */
                var_v1 = ((void *)D_00A43380);
                if (((void *)D_00A43380) != NULL) {
                    var_v0 = 0xC;
                    goto block_38;
                }
                goto block_39;
            case -522:                              /* switch 1 */
                var_v1 = ((void *)D_00A43380);
                if (((void *)D_00A43380) != NULL) {
                    var_v0 = 0xB;
                    goto block_38;
                }
                goto block_39;
            default:                                /* switch 1 */
                var_v1 = (M2C_UNK *)0xA43380;
                if (0xA43380 != 0) {
                    var_v0 = 0xB;
                    goto block_38;
                }
                goto block_39;
            }
        }
    } else {
        M2C_FIELD(arg0, s8 *, 0x40) = 1;
        if (((void *)D_00A43380) != NULL) {
            M2C_FIELD(((void *)D_00A43380), s32 *, 0x3C) = 0xF;
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
