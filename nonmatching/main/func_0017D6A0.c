/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001454C0(s32);
M2C_UNK func_001509A0(s32, s32, s32, s32, s32);     /* extern */

void func_0017D6A0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_s0;

    temp_s0 = func_001454C0(arg0);
    func_001509A0(temp_s0, arg1, func_001454C0(arg2), arg3, arg4);
}
