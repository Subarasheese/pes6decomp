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
extern char D_0088AB70[];

s32 func_00805170(s8 *arg0) {
    s32 temp_v0;

    if (arg0 == NULL) {
        return 0;
    }
    if (*arg0 != 1) {
        if (func_0082C8A0(0x76) != 1) {
            if (func_0082C8A0(0x7A) != 1) {
                if (func_0082C8A0(0x78) != 1) {
                    if (func_0082C5B0(0x76) >= 0x1C21) {
                        if (((void *)D_0088AB70) != NULL) {
                            M2C_FIELD(((void *)D_0088AB70), s32 *, 0x3C) = 0xC;
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
                    if (((void *)D_0088AB70) != NULL) {
                        M2C_FIELD(((void *)D_0088AB70), s32 *, 0x3C) = 0xC;
                    }
                }
            } else {
                if (func_00818740() == 1) {
                    func_00818750();
                }
                if (func_00817B70() == 1) {
                    func_00817B80();
                }
                if (((void *)D_0088AB70) != NULL) {
                    M2C_FIELD(((void *)D_0088AB70), s32 *, 0x3C) = 0xC;
                }
            }
        } else {
            if (func_00818740() == 1) {
                func_00818750();
            }
            if (func_00817B70() == 1) {
                func_00817B80();
            }
            temp_v0 = func_0082C7C0(0x76);
            switch (temp_v0) {                      /* irregular */
            case 0:
                if (((void *)D_0088AB70) != NULL) {
                    M2C_FIELD(((void *)D_0088AB70), s32 *, 0x3C) = 8;
                }
                break;
            case -21:
                if (((void *)D_0088AB70) != NULL) {
                    M2C_FIELD(((void *)D_0088AB70), s32 *, 0x3C) = 0xA;
                }
                break;
            default:
                if (0x88AB70 != 0) {
                    M2C_FIELD((void *)0x88AB70, s32 *, 0x3C) = 0xC;
                }
                break;
            }
        }
        goto block_52;
    }
    if (((void *)D_0088AB70) != NULL) {
        M2C_FIELD(((void *)D_0088AB70), s32 *, 0x3C) = 0xE;
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
