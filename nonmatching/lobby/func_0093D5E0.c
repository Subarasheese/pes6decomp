/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s64 func_00834330();                                /* extern */

s64 func_0093D5E0(void) {
    s64 temp_v1;

    temp_v1 = (s64) (func_00834330() << 0x38) >> 0x38;
    if (temp_v1 < 0) {
        return 0;
    }
    if (temp_v1 < 3) {
        return (s64) ((temp_v1 + 1) << 0x38) >> 0x38;
    }
    return 0;
}
