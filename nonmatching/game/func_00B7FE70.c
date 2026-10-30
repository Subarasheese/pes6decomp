/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00152130(s32, s8);
extern void func_00B27430(u32);
s32 func_009A0580();                                /* extern */
M2C_UNK func_00BF6240(M2C_UNK);                     /* extern */
extern char D_00C9A710[];

void func_00B7FE70(void) {
    if ((func_00152130(1, 0x10) != 0) && (func_009A0580() != 0)) {
        func_00B27430(0U);
        func_00BF6240(1);
        (*(s32 *)D_00C9A710) = 0;
    }
}
