/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
M2C_UNK func_00D0C6E0(s32, s32);                    /* extern */

void func_00D0C770(s32 arg0, s32 arg1) {
    func_00D0C6E0(arg0, func_001F08B0(arg1));
}
