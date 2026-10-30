/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
s32 func_00817B70();                                /* extern */
M2C_UNK func_00817C00();                            /* extern */
s32 func_00818740();                                /* extern */
M2C_UNK func_008187D0();                            /* extern */
M2C_UNK func_00819460(M2C_UNK, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s64, s64, s64, s64); /* extern */
s32 func_0082C7C0(M2C_UNK);                         /* extern */
s32 func_0082C8A0(M2C_UNK);                         /* extern */
s32 func_00942BE0();                                /* extern */
extern char D_00A43380[];

s32 func_009377C0(s32 arg0) {
    M2C_UNK *var_v1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_v0;
    s32 var_v0_2;

    if (arg0 == 0) {
        return 0;
    }
    func_00819460(0, func_001F08B0(0x02000005), 0, 0, -1, 0, 1, 1, 0x40800000, 0x41000000, 0x40800000, 0x4484D000, 3, 1, 3, 0);
    if (func_0082C8A0(0x77) != 1) {
        if (func_0082C8A0(0x78) == 1) {
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
            goto block_58;
        }
        temp_v0 = func_00942BE0();
        switch (temp_v0) {                          /* switch 2; irregular */
        case 0:                                     /* switch 2 */
            break;
        case 4:                                     /* switch 2 */
            if (((void *)D_00A43380) != NULL) {
                var_v0 = 8;
block_57:
                M2C_FIELD(((void *)D_00A43380), s32 *, 0x3C) = var_v0;
            }
            break;
        case 1:                                     /* switch 2 */
            if (func_00818740() == 1) {
                func_008187D0();
            }
            if (func_00817B70() == 1) {
                func_00817C00();
            }
            if (((void *)D_00A43380) != NULL) {
                var_v0 = 0xF;
                goto block_57;
            }
            break;
        default:                                    /* switch 2 */
        case 2:                                     /* switch 2 */
            if (func_00818740() == 1) {
                func_008187D0();
            }
            if (func_00817B70() == 1) {
                func_00817C00();
            }
            if (((void *)D_00A43380) != NULL) {
                var_v0 = 0xF;
                goto block_57;
            }
            break;
        }
        goto block_58;
    }
    if (func_00818740() == 1) {
        func_008187D0();
    }
    if (func_00817B70() == 1) {
        func_00817C00();
    }
    temp_v0_2 = func_0082C7C0(0x77);
    switch (temp_v0_2) {                            /* switch 1; irregular */
    case 0:                                         /* switch 1 */
        var_v1 = ((void *)D_00A43380);
        if (((void *)D_00A43380) != NULL) {
            var_v0_2 = 9;
block_29:
            M2C_FIELD(var_v1, s32 *, 0x3C) = var_v0_2;
block_30:
            return 1;
        }
block_58:
        return 1;
    case -716:                                      /* switch 1 */
        var_v1 = ((void *)D_00A43380);
        if (((void *)D_00A43380) != NULL) {
            var_v0_2 = 0xE;
            goto block_29;
        }
        goto block_30;
    case -512:                                      /* switch 1 */
    case -507:                                      /* switch 1 */
    case -525:                                      /* switch 1 */
        var_v1 = ((void *)D_00A43380);
        if (((void *)D_00A43380) != NULL) {
            var_v0_2 = 0xB;
            goto block_29;
        }
        goto block_30;
    case -523:                                      /* switch 1 */
        var_v1 = ((void *)D_00A43380);
        if (((void *)D_00A43380) != NULL) {
            var_v0_2 = 0xC;
            goto block_29;
        }
        goto block_30;
    case -522:                                      /* switch 1 */
        var_v1 = ((void *)D_00A43380);
        if (((void *)D_00A43380) != NULL) {
            var_v0_2 = 0xB;
            goto block_29;
        }
        goto block_30;
    default:                                        /* switch 1 */
        var_v1 = (M2C_UNK *)0xA43380;
        if (0xA43380 != 0) {
            var_v0_2 = 0xB;
            goto block_29;
        }
        goto block_30;
    }
}
