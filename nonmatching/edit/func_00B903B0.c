/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001B9B30(s32, s32, s32, s32);              /* extern */

s32 func_00B903B0(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    if (arg0 == NULL) {
        return 0;
    }
    if (*arg0 == 0) {
        *arg0 = func_001B9B30(arg1, arg2, arg3, arg4);
        return 1;
    }
    return 0;
}
