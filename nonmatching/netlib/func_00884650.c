/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0017F900(void);
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_001D5F80(M2C_UNK);                     /* extern */
extern char D_008B24E0[];
extern char D_008B2514[];
extern char D_008B2518[];

s32 func_00884650(s32 arg0) {
    switch ((*(u8 *)D_008B2518)) {                           /* irregular */
    case 0:
        func_001C48E8(((void *)D_008B24E0), 0, 0x3C);
        if (arg0 != 0) {
            func_001D5F80(0x1024C);
        }
        (*(s32 *)D_008B2514) = arg0;
        (*(u8 *)D_008B2518) += 1;
block_10:
    default:
        return 0;
    case 1:
        if ((*(s32 *)D_008B2514) == 0) {
            (*(u8 *)D_008B2518) = 6;
            return 1;
        }
        if (func_0017F900() != 0) {
            (*(u8 *)D_008B2518) = 2;
            return 1;
        }
        goto block_10;
    }
}
