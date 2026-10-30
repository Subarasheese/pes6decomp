/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00B91590(s32, s8);
extern char D_00CE482C[];

void func_00BB14F0(M2C_UNK arg0, s8 arg1) {
    (*(s32 *)D_00CE482C) = 0;
    func_00B91590(0x1D, arg1);
}
