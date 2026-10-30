/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00840560(s32);                             /* extern */
s32 func_00840C80();                                /* extern */

s32 func_00965D50(void) {
    s32 temp_v0;

    temp_v0 = func_00840560(func_00840C80()) & 0xFF;
    if ((temp_v0 >= 0) && (temp_v0 < 4)) {
        return 1;
    }
    return 0;
}
