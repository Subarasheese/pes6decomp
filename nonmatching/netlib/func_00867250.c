/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00867250(s32 *arg0, s32 *arg1, s32 arg2, s32 *arg3) {
    if ((arg0 != NULL) && (arg1 != NULL) && (arg2 != 0) && (arg3 != NULL)) {
        if (*arg0 == 0x3073) {
            *arg1 = 0;
            *arg3 = 1;
            return 0;
        }
        return -0x46;
    }
    return -0x18;
}
