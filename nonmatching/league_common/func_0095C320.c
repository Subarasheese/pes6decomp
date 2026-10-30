/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002260F0(s32);
M2C_UNK func_0095BDD0(s32, s32, s32);               /* extern */

void func_0095C320(s32 arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = func_002260F0(arg0);
    if (temp_v0 != 0) {
        func_0095BDD0(arg0, arg1, temp_v0 + 0x4C);
    }
}
