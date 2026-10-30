/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008138B0(s32, s32);                        /* extern */
M2C_UNK func_00814A00(s32, s32, s32);               /* extern */

void func_00813FC0(s32 arg0, s32 arg1, s32 arg2) {
    func_00814A00(arg0, arg1, func_008138B0(arg1, arg0));
}
