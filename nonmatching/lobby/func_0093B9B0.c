/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0093B9E0();                                /* extern */
s32 func_0094BBA0();                                /* extern */

s32 func_0093B9B0(void) {
    if (func_0093B9E0() != 1) {
        return 0;
    }
    return func_0094BBA0();
}
