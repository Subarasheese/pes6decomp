/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_003655D0(s32);
s32 func_00B907F0(s32 *arg0, s32 arg1) {
    if (arg0 == NULL) {
        return 0;
    }
    if (*arg0 == 0) {
        *arg0 = func_003655D0(arg1);
        return 1;
    }
    return 0;
}
