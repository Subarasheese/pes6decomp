/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s16 *func_008472D0();                               /* extern */
M2C_UNK func_00852750(M2C_UNK);                     /* extern */
M2C_UNK func_00853B50(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s16, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern char D_008B14C0[];
extern char D_008B14C4[];
extern char D_008B14CD[];

s32 func_0084A790(s32 arg0) {
    s32 var_v0;

    if ((((u64) ((s64) (*(u8 *)D_008B14CD) << 0x3A) >> 0x3F) == 0) && (((u64) ((s64) (*(u8 *)D_008B14CD) << 0x3B) >> 0x3F) == 0)) {
        var_v0 = 0;
    } else {
        var_v0 = 1;
    }
    if (var_v0 != 0) {
        return -1;
    }
    if ((*(u8 *)D_008B14C4) != 0) {
        (*(u8 *)D_008B14C4) = 0;
        (*(s32 *)D_008B14C0) = 0;
    }
    func_00852750(0);
    switch (arg0) {                                 /* irregular */
    case 1:
        func_00853B50(1, 0xC9, 0, 0, *func_008472D0(), 9, 0, 0);
        func_00853B50(1, 0xCC, 0, 0, *func_008472D0(), -5, 0, 0);
        func_00853B50(1, 0xCB, 1, 0, *func_008472D0(), -5, 0, 0);
        break;
    case 2:
        func_00853B50(1, 0xCA, 0, 0, *func_008472D0(), 9, 0, 0);
        func_00853B50(1, 0xCC, 0, 0, *func_008472D0(), -5, 0, 0);
        func_00853B50(1, 0xCB, 1, 0, *func_008472D0(), -5, 0, 0);
        break;
    case 3:
        func_00853B50(1, 0xC9, 1, 0, *func_008472D0(), -7, 0, 0);
        func_00853B50(1, 0x16, 0xB, 0, *func_008472D0(), -5, 0, 0);
        break;
    }
    return 0;
}
