/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s64 func_00946C30();                                /* extern */

s32 func_0093AEA0(void) {
    s64 temp_v1;

    temp_v1 = (s64) (func_00946C30() << 0x38) >> 0x38;
    switch (temp_v1) {                              /* irregular */
    case 0:
        return 0;
    case 3:
    case 2:
    case 1:
        /* fallthrough */
    default:
        return 1;
    }
}
