/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001D61A0(M2C_UNK, s32);                    /* extern */
s32 func_001D7290(s32, s32, s32, s32);              /* extern */

s32 func_001D6E70(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 var_v0;

    if (arg0 != 0) {
        temp_v0 = func_001D61A0(1, arg1);
        if (temp_v0 != 0) {
            var_v0 = func_001D7290(arg0, temp_v0, arg1, arg2);
        } else {
            var_v0 = 0;
        }
        return var_v0;
    }
    return 0;
}
