/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0083B0D0(s32);                             /* extern */
s32 func_00846D80();                                /* extern */

s32 func_0083B340(s32 arg0) {
    if (func_00846D80() >= 3) {
        return 4;
    }
    return func_0083B0D0(arg0);
}
