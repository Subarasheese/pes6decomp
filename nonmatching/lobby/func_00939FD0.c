/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00817B70();                                /* extern */
M2C_UNK func_00817C00();                            /* extern */
s32 func_00818740();                                /* extern */
M2C_UNK func_008187D0();                            /* extern */
s32 func_0081EC20(M2C_UNK);                         /* extern */
s32 func_0082C5B0(M2C_UNK);                         /* extern */
s32 func_0082C7C0(M2C_UNK);                         /* extern */
s32 func_0082C8A0(M2C_UNK);                         /* extern */
extern char D_00A435D0[];

s32 func_00939FD0(s8 *arg0) {
    s32 temp_v0;

    if (arg0 == NULL) {
        return 0;
    }
    if (*arg0 != 1) {
        if (func_0082C8A0(0x66) != 1) {
            if ((func_0081EC20(0x1000) != 0) && (((void *)D_00A435D0) != NULL)) {
                M2C_FIELD(((void *)D_00A435D0), s32 *, 0x3C) = 7;
            }
            if (func_0082C5B0(0x66) >= 0x1C21) {
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
        } else {
            if (func_00818740() == 1) {
                func_008187D0();
            }
            if (func_00817B70() == 1) {
                func_00817C00();
            }
            temp_v0 = func_0082C7C0(0x66);
            switch (temp_v0) {                      /* irregular */
            case 0:
                if (((void *)D_00A435D0) != NULL) {
                    M2C_FIELD(((void *)D_00A435D0), s32 *, 0x3C) = 6;
                }
                break;
            case -716:
                if (((void *)D_00A435D0) != NULL) {
                    M2C_FIELD(((void *)D_00A435D0), s32 *, 0x3C) = 0xE;
                }
                break;
            case -512:
            case -507:
            case -525:
                if (((void *)D_00A435D0) != NULL) {
                    M2C_FIELD(((void *)D_00A435D0), s32 *, 0x3C) = 0xB;
                }
                break;
            case -523:
                if (((void *)D_00A435D0) != NULL) {
                    M2C_FIELD(((void *)D_00A435D0), s32 *, 0x3C) = 0xC;
                }
                break;
            case -522:
                if (((void *)D_00A435D0) != NULL) {
                    M2C_FIELD(((void *)D_00A435D0), s32 *, 0x3C) = 0xB;
                }
                break;
            default:
                if (0xA435D0 != 0) {
                    M2C_FIELD((void *)0xA435D0, s32 *, 0x3C) = 0xB;
                }
                break;
            }
        }
        goto block_48;
    }
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
block_48:
    return 1;
}
