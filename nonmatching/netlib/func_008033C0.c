/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00817B70();                                /* extern */
M2C_UNK func_00817B80();                            /* extern */
s32 func_00818740();                                /* extern */
M2C_UNK func_00818750();                            /* extern */
s32 func_0082C5B0(M2C_UNK);                         /* extern */
s32 func_0082C7C0(M2C_UNK);                         /* extern */
s32 func_0082C8A0(M2C_UNK);                         /* extern */
extern char D_0088A930[];

s32 func_008033C0(s8 *arg0) {
    s32 temp_v0;

    if (arg0 == NULL) {
        return 0;
    }
    if (*arg0 != 1) {
        if (func_0082C8A0(0x51) != 1) {
            if (func_0082C8A0(0x54) != 1) {
                if (func_0082C8A0(0x52) != 1) {
                    if (func_0082C5B0(0x51) >= 0x1C21) {
                        if (((void *)D_0088A930) != NULL) {
                            M2C_FIELD(((void *)D_0088A930), s32 *, 0x3C) = 0x11;
                        }
                        if (func_00818740() == 1) {
                            func_00818750();
                        }
                        if (func_00817B70() == 1) {
                            func_00817B80();
                        }
                    }
                } else {
                    if (func_00818740() == 1) {
                        func_00818750();
                    }
                    if (func_00817B70() == 1) {
                        func_00817B80();
                    }
                    if (((void *)D_0088A930) != NULL) {
                        M2C_FIELD(((void *)D_0088A930), s32 *, 0x3C) = 0x11;
                    }
                }
            } else {
                if (func_00818740() == 1) {
                    func_00818750();
                }
                if (func_00817B70() == 1) {
                    func_00817B80();
                }
                if (((void *)D_0088A930) != NULL) {
                    M2C_FIELD(((void *)D_0088A930), s32 *, 0x3C) = 0x11;
                }
            }
        } else {
            if (func_00818740() == 1) {
                func_00818750();
            }
            if (func_00817B70() == 1) {
                func_00817B80();
            }
            temp_v0 = func_0082C7C0(0x51);
            switch (temp_v0) {                      /* irregular */
            case 0:
                if (((void *)D_0088A930) != NULL) {
                    M2C_FIELD(((void *)D_0088A930), s32 *, 0x3C) = 0xC;
                }
                break;
            case -21:
                if (((void *)D_0088A930) != NULL) {
                    M2C_FIELD(((void *)D_0088A930), s32 *, 0x3C) = 0xE;
                }
                break;
            default:
                if (0x88A930 != 0) {
                    M2C_FIELD((void *)0x88A930, s32 *, 0x3C) = 0x11;
                }
                break;
            }
        }
        goto block_52;
    }
    if (((void *)D_0088A930) != NULL) {
        M2C_FIELD(((void *)D_0088A930), s32 *, 0x3C) = 0x13;
    }
    if (func_00818740() == 1) {
        func_00818750();
    }
    if (func_00817B70() == 1) {
        func_00817B80();
        return 1;
    }
block_52:
    return 1;
}
