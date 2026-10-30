/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001D6C80(s32, s32);
M2C_UNK func_001B6E40(s32, s32);                    /* extern */

void *func_0099B420(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_s0;

    temp_s0 = M2C_FIELD(arg0, s32 *, 0xC);
    func_001B6E40(temp_s0, func_001D6C80(arg1, arg2));
    return arg0;
}
