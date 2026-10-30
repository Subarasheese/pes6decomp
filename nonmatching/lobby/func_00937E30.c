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
extern char D_00A43380[];

s32 func_00937E30(void *arg0) {
    s32 temp_v0;

    if (arg0 == NULL) {
        return 0;
    }
    if (M2C_FIELD(arg0, s8 *, 0) != 1) {
        func_00819460(0, func_001F08B0(0x02000005), 0, 0, -1, 0, 1, 1, 0x40800000, 0x41000000, 0x40800000, 0x4484D000, 3, 1, 3, 0);
        if (func_0082C8A0(0x75) != 1) {
            if ((func_0081EC20(0x1000) != 0) && (((void *)D_00A43380) != NULL)) {
                M2C_FIELD(((void *)D_00A43380), s32 *, 0x3C) = 7;
            }
            if (func_0082C5B0(0x75) >= 0x1C21) {
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
        } else {
            if (func_00818740() == 1) {
                func_008187D0();
            }
            if (func_00817B70() == 1) {
                func_00817C00();
            }
            temp_v0 = func_0082C7C0(0x75);
            switch (temp_v0) {                      /* irregular */
            case 0:
                if (((void *)D_00A43380) != NULL) {
                    M2C_FIELD(((void *)D_00A43380), s32 *, 0x3C) = 6;
                }
                break;
            case -716:
                if (((void *)D_00A43380) != NULL) {
                    M2C_FIELD(((void *)D_00A43380), s32 *, 0x3C) = 0xE;
                }
                break;
            case -512:
            case -507:
            case -525:
                if (((void *)D_00A43380) != NULL) {
                    M2C_FIELD(((void *)D_00A43380), s32 *, 0x3C) = 0xB;
                }
                break;
            case -523:
                if (((void *)D_00A43380) != NULL) {
                    M2C_FIELD(((void *)D_00A43380), s32 *, 0x3C) = 0xC;
                }
                break;
            case -522:
                if (((void *)D_00A43380) != NULL) {
                    M2C_FIELD(((void *)D_00A43380), s32 *, 0x3C) = 0xB;
                }
                break;
            default:
                if (0xA43380 != 0) {
                    M2C_FIELD((void *)0xA43380, s32 *, 0x3C) = 0xB;
                }
                break;
            }
        }
        goto block_48;
    }
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
block_48:
    return 1;
}
