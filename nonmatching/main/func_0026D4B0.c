/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00153FE0(s32, s32);                        /* extern */
s32 func_0017F850(M2C_UNK);                         /* extern */
M2C_UNK func_0017F950(M2C_UNK, M2C_UNK *, s32, M2C_UNK, M2C_UNK); /* extern */
extern char D_0058D810[];
extern M2C_UNK func_0026D420;

void func_0026D4B0(s32 arg0) {
    if ((*(s32 *)D_0058D810) == 0) {
        (*(s32 *)D_0058D810) = func_00153FE0(arg0, func_0017F850(0x1003A));
    }
    func_0017F950(0x1003A, &func_0026D420, (*(s32 *)D_0058D810), 4, 1);
}
