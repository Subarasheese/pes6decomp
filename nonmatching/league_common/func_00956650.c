/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0096F7A0();                                /* extern */
s32 func_0096F810(s32);                             /* extern */

s32 func_00956650(s32 arg0) {
    if ((func_0096F7A0() == 1) && ((func_0096F810(arg0) & 0xFF) == 0xFF)) {
        return 0;
    }
    return 1;
}
