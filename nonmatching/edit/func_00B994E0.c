/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001B6460(M2C_UNK);                     /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_00B90BA0();                                /* extern */
s32 func_00B90CB0();                                /* extern */
M2C_UNK func_00B90D50();                            /* extern */
M2C_UNK func_00B90DD0();                            /* extern */
M2C_UNK func_00B90E70(M2C_UNK);                     /* extern */
M2C_UNK func_00B90FB0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00B91000(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00B91100();                            /* extern */
M2C_UNK func_00B91150();                            /* extern */
M2C_UNK func_00B911B0();                            /* extern */
s32 func_00BCF3C0(M2C_UNK);                         /* extern */
extern s32 D_003E7D78;
extern s32 D_003EAF54;
extern char D_00CE3F10[];
extern char D_00CE3F12[];

void func_00B994E0(void) {
    switch (D_003EAF54) {                           /* irregular */
    case 2:
        if (func_00BCF3C0(0x1000) == 0) {
            if (func_00BCF3C0(0x4000) == 0) {
                if (func_00BCF3C0(4) == 0) {
                    if ((func_00BCF3C0(0x20) != 0) && (D_003E7D78 == 0)) {
                        D_003E7D78 = 1;
                        func_00B90E70(1);
                        func_0026E840(0x8400F802);
                        return;
                    }
                } else {
                    if (D_003E7D78 == 1) {
                        D_003E7D78 = 0;
                        func_00B90E70(0);
                        func_0026E840(0x8400F802);
                        return;
                    }
                    return;
                }
            } else {
                func_0026E840(0x84008401);
                func_00B91100();
                D_003E7D78 = 1;
                D_003EAF54 += 1;
                return;
            }
        } else {
            func_0026E840(0x84028400);
            func_00B91100();
            D_003EAF54 += 1;
            return;
        }
        break;
    default:
        func_001B6460(0);
        func_00B911B0();
        func_00B90D50();
        func_00B91000(0xF30064, 0);
        func_00B90FB0(0x6C0006, 0);
        func_00B90FB0(0x6C0007, 1);
        func_00B90DD0();
        func_00B91150();
        D_003E7D78 = 1;
        func_00B90E70(1);
        D_003EAF54 += 1;
        return;
    case 1:
        if (func_00B90CB0() == 1) {
            func_00B90E70(1);
            D_003EAF54 += 1;
            return;
        }
        break;
    case 3:
        if (func_00B90BA0() == 1) {
            if (D_003E7D78 != 0) {
                (*(s8 *)D_00CE3F10) = 0x20;
                (*(s8 *)D_00CE3F12) = 0;
            } else {
                (*(s8 *)D_00CE3F10) = 0x41;
            }
            D_003EAF54 = 0;
        }
        break;
    }
}
