/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00819800(s32);                             /* extern */
s32 func_009472F0();                                /* extern */

s32 func_0093AE50(void) {
    return func_00819800(func_009472F0()) == 0;
}
