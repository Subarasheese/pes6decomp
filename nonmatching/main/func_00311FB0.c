/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BEC520();                                /* extern */

s32 func_00311FB0(s8 *arg0) {
    s8 temp_v1;

    temp_v1 = func_00BEC520() & 0xFF;
    if ((temp_v1 == 0) || (temp_v1 >= 0x17)) {
        *arg0 = -1;
        return 0;
    }
    *arg0 = temp_v1;
    return 1;
}
