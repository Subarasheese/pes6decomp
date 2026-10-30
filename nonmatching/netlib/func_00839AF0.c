/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00839A30();                                /* extern */
s32 func_00846D80();                                /* extern */

s32 func_00839AF0(void) {
    if (func_00846D80() >= 3) {
        return 4;
    }
    return func_00839A30();
}
