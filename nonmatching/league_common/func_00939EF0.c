/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0093ACB0(s32);                             /* extern */
s32 func_00B16E60();                                /* extern */

s32 func_00939EF0(s32 arg0) {
    if ((func_00B16E60() & 0xFF) != 2) {
        return func_0093ACB0(arg0);
    }
    return 0;
}
