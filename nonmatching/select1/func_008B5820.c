/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_0023B380(M2C_UNK);                         /* extern */
M2C_UNK func_0023B3B0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0023FC70(M2C_UNK);                     /* extern */
M2C_UNK func_008B4110();                            /* extern */
s32 func_008B4760();                                /* extern */
s8 func_008B4C80();                                 /* extern */
s32 func_008B52D0();                                /* extern */
M2C_UNK func_008B5380();                            /* extern */
extern s32 D_003EA400;
extern s8 D_003EA41C;
extern char D_00510FD0[];
extern char D_0053C300[];
extern char D_0053C310[];

s32 func_008B5820(void) {
    switch (D_003EA400) {                           /* irregular */
    case 0:
        func_008B5380();
        D_003EA400 += 1;
block_28:
    default:
        return 0;
    case 1:
        if (func_008B52D0() == 1) {
            D_003EA400 += 1;
        }
        if ((*(s32 *)D_0053C310) == 1) {
            func_008B4110();
        }
        if (func_0023B380(0) == 0) {
            func_0023B3B0(0, 1);
        }
        if (func_0023B380(1) != 0) {
            M2C_FIELD(((void *)D_0053C300), s32 *, 0x10) = 0;
        } else {
            func_0023B3B0(1, 0);
            M2C_FIELD(((void *)D_0053C300), s32 *, 0x10) = 0;
        }
        goto block_28;
    case 2:
        D_003EA41C = func_008B4C80();
        if ((*(s32 *)D_0053C310) == 1) {
            func_008B4110();
        }
        if (func_0023B380(0) == 0) {
            func_0023B3B0(0, 1);
        }
        if (func_0023B380(1) == 0) {
            func_0023B3B0(1, 0);
        }
        M2C_FIELD(((void *)D_0053C300), s32 *, 0x10) = 0;
        if ((u32) (D_003EA41C - 1) < 2U) {
            D_003EA400 += 1;
        }
        goto block_28;
    case 3:
        if (func_008B4760() == 1) {
            D_003EA400 = 0;
            if ((*(s32 *)D_00510FD0) == 4) {
                func_0023FC70(1);
                goto block_28;
            }
            return 1;
        }
        goto block_28;
    }
}
