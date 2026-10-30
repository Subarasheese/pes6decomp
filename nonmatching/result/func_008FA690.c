/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00C132C0();                                /* extern */

s32 func_008FA690(void) {
    s32 temp_v1;

    temp_v1 = func_00C132C0() & 0xFF;
    if ((temp_v1 != 5) && (temp_v1 != 3) && (temp_v1 != 1)) {
        return 0;
    }
    return 1;
}
