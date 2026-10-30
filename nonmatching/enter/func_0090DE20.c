/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0090B7A0(M2C_UNK);                         /* extern */
s32 func_0090B830(M2C_UNK);                         /* extern */
s32 func_0090BD80(M2C_UNK);                         /* extern */
s32 func_0090C060(M2C_UNK);                         /* extern */
extern char D_0092F010[];
extern char D_0092F014[];
extern char D_0092F018[];
extern char D_0092F01C[];
extern char D_0092F020[];
extern char D_0092F024[];
extern char D_0092F028[];
extern char D_0092F02C[];
extern char D_0092F030[];
extern char D_0092F034[];
extern char D_0092F038[];
extern char D_0092F03C[];

s32 func_0090DE20(s32 arg0) {
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;

    if (arg0 & 0xFC) {
        return 0;
    }
    switch (arg0) {                                 /* irregular */
    case 0x10000:
        (*(s32 *)D_0092F024) = func_0090B7A0(1);
        if ((((*(s32 *)D_0092F020) + (*(s32 *)D_0092F01C)) == 0) && (func_0090B7A0(0) != 0)) {
            return 0;
        }
        if (((*(s32 *)D_0092F024) != 0) && ((*(s32 *)D_0092F024) != (*(s32 *)D_0092F020)) && ((*(s32 *)D_0092F024) != (*(s32 *)D_0092F01C))) {
            return 0;
        }
        return 2;
    case 0x8000:
        (*(s32 *)D_0092F018) = func_0090B830(1);
        if ((((*(s32 *)D_0092F014) + (*(s32 *)D_0092F010)) == 0) && (func_0090B830(0) != 0)) {
            var_v0 = 0;
        } else if (((*(s32 *)D_0092F018) != 0) && ((*(s32 *)D_0092F018) != (*(s32 *)D_0092F014)) && ((*(s32 *)D_0092F018) != (*(s32 *)D_0092F010))) {
            var_v0 = 0;
        } else {
            var_v0 = 2;
        }
        return var_v0;
    case 0x4000:
        (*(s32 *)D_0092F03C) = func_0090BD80(1);
        if (((*(s32 *)D_0092F038) + (*(s32 *)D_0092F034)) == 0) {
            if (func_0090BD80(0) != 0) {
                var_v0_2 = 0;
            } else if (func_0090BD80(-1) != 0) {
                var_v0_2 = 0;
            } else {
                goto block_44;
            }
        } else {
block_44:
            if (((*(s32 *)D_0092F03C) != 0) && ((*(s32 *)D_0092F03C) != (*(s32 *)D_0092F038)) && ((*(s32 *)D_0092F03C) != (*(s32 *)D_0092F034))) {
                var_v0_2 = 0;
            } else {
                var_v0_2 = 2;
            }
        }
        return var_v0_2;
    case 0x2000:
        (*(s32 *)D_0092F030) = func_0090C060(1);
        if ((((*(s32 *)D_0092F02C) + (*(s32 *)D_0092F028)) == 0) && (func_0090C060(0) != 0)) {
            var_v0_3 = 0;
        } else if (((*(s32 *)D_0092F030) != 0) && ((*(s32 *)D_0092F030) != (*(s32 *)D_0092F02C)) && ((*(s32 *)D_0092F030) != (*(s32 *)D_0092F028))) {
            var_v0_3 = 0;
        } else {
            var_v0_3 = 2;
        }
        return var_v0_3;
    case 0x400:
        return 0;
    case 0x1:
        return 0;
    case 0x1000:
        return 0;
    case 0x2:
        return 0;
    case 0x200:
    case 0x100:
        return 0;
    default:
        return 0;
    }
}
