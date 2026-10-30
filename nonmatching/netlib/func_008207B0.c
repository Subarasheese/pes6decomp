/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008204A0();                                /* extern */
M2C_UNK func_008206B0(s32, s32, s32);               /* extern */

void func_008207B0(M2C_UNK arg0, s32 arg1, s32 arg2) {
    func_008206B0(func_008204A0(), arg1, arg2);
}
