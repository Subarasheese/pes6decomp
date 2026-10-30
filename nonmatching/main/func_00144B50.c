/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00101190(M2C_UNK, M2C_UNK);            /* extern */
s32 func_00105070(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
extern char D_00503034[];
extern char D_00503044[];
extern M2C_UNK func_00145020;

void func_00144B50(void) {
    func_00101190(0, 0);
    (*(s32 *)D_00503044) = 0;
    (*(s32 *)D_00503034) = func_00105070(1, &func_00145020, 0);
    *(s32 *)0x1000E010 = ((*(s32 *)0x1000E010 & 0x20000) ^ 0x20000) | 2;
    *(s32 *)0x10003020 |= 4;
}
