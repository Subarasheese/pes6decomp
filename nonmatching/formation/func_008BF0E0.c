/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s64 func_008B9660();                                /* extern */

s32 func_008BF0E0(void) {
    s64 temp_v1;

    temp_v1 = (s64) (func_008B9660() << 0x30) >> 0x30;
    if ((temp_v1 != 2) && (temp_v1 != 1)) {
        return 1;
    }
    return 0;
}
