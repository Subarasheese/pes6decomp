/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
s32 func_00817B70();                                /* extern */
M2C_UNK func_00817C00();                            /* extern */
s32 func_00818740();                                /* extern */
M2C_UNK func_008187D0();                            /* extern */
M2C_UNK func_00819460(M2C_UNK, s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s64, s64, s64, s64); /* extern */
s32 func_0081EC20(M2C_UNK);                         /* extern */
s32 func_0082C5B0(M2C_UNK);                         /* extern */
s32 func_0082C7C0(M2C_UNK);                         /* extern */
s32 func_0082C8A0(M2C_UNK);                         /* extern */
extern char D_00A435D0[];

s32 func_00939C50(s8 *arg0) {
    M2C_UNK *var_v1;
    s32 temp_v0;
    s32 var_v0;

    if (arg0 == NULL) {
        return 0;
    }
    if (*arg0 != 1) {
        func_00819460(0, func_001F08B0(0x02000005), 0, 0, -1, 0, 1, 1, 0x40800000, 0x41000000, 0x40800000, 0x4484D000, 3, 1, 3, 0);
        if (func_0082C8A0(0x68) != 1) {
            if (func_0082C8A0(0x69) != 1) {
                if ((func_0081EC20(0x1000) != 0) && (((void *)D_00A435D0) != NULL)) {
                    M2C_FIELD(((void *)D_00A435D0), s32 *, 0x3C) = 7;
                }
                if (func_0082C5B0(0x68) >= 0x1C21) {
                    if (((void *)D_00A435D0) != NULL) {
                        M2C_FIELD(((void *)D_00A435D0), s32 *, 0x3C) = 0xB;
                    }
                    if (func_00818740() == 1) {
                        func_008187D0();
                    }
                    if (func_00817B70() == 1) {
                        func_00817C00();
                    }
                }
                goto block_62;
            }
            if (func_00818740() == 1) {
                func_008187D0();
            }
            if (func_00817B70() == 1) {
                func_00817C00();
            }
            if (((void *)D_00A435D0) != NULL) {
                M2C_FIELD(((void *)D_00A435D0), s32 *, 0x3C) = 0xB;
                return 1;
            }
            goto block_62;
        }
        if (func_00818740() == 1) {
            func_008187D0();
        }
        if (func_00817B70() == 1) {
            func_00817C00();
        }
        temp_v0 = func_0082C7C0(0x68);
        switch (temp_v0) {                          /* irregular */
        case 0:
            var_v1 = ((void *)D_00A435D0);
            if (((void *)D_00A435D0) != NULL) {
                var_v0 = 9;
block_41:
                M2C_FIELD(var_v1, s32 *, 0x3C) = var_v0;
block_42:
                return 1;
            }
            goto block_62;
        case -703:
            var_v1 = ((void *)D_00A435D0);
            if (((void *)D_00A435D0) != NULL) {
                var_v0 = 0xB;
                goto block_41;
            }
            goto block_42;
        case -716:
            var_v1 = ((void *)D_00A435D0);
            if (((void *)D_00A435D0) != NULL) {
                var_v0 = 0xE;
                goto block_41;
            }
            goto block_42;
        case -512:
        case -507:
        case -525:
            var_v1 = ((void *)D_00A435D0);
            if (((void *)D_00A435D0) != NULL) {
                var_v0 = 0xB;
                goto block_41;
            }
            goto block_42;
        case -523:
            var_v1 = ((void *)D_00A435D0);
            if (((void *)D_00A435D0) != NULL) {
                var_v0 = 0xC;
                goto block_41;
            }
            goto block_42;
        case -522:
            var_v1 = ((void *)D_00A435D0);
            if (((void *)D_00A435D0) != NULL) {
                var_v0 = 0xB;
                goto block_41;
            }
            goto block_42;
        default:
            var_v1 = (M2C_UNK *)0xA435D0;
            if (0xA435D0 != 0) {
                var_v0 = 0xB;
                goto block_41;
            }
            goto block_42;
        }
    } else {
        if (((void *)D_00A435D0) != NULL) {
            M2C_FIELD(((void *)D_00A435D0), s32 *, 0x3C) = 0xF;
        }
        if (func_00818740() == 1) {
            func_008187D0();
        }
        if (func_00817B70() == 1) {
            func_00817C00();
            return 1;
        }
block_62:
        return 1;
    }
}
