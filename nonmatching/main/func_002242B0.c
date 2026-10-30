/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00210DF0();                                /* extern */
s32 func_00230410();                                /* extern */
s32 func_0096F610(s32);                             /* extern */

s32 func_002242B0(s32 arg0) {
    if (func_00230410() == 1) {
        return 0;
    }
    if (func_00210DF0() != 1) {
        return 1;
    }
    return func_0096F610(arg0) == 1;
}
