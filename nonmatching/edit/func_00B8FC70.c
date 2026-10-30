/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001D6E70(s32, s32, s32);
s32 func_00B8FC70(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;

    if (arg0 == NULL) {
        return 0;
    }
    if (*arg0 == 0) {
        temp_v0 = func_001D6E70(arg1, arg2, arg3);
        *arg0 = temp_v0;
        return temp_v0 != 0;
    }
    return 0;
}
