/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s64 func_00835D10();                                /* extern */

s32 func_0093CB50(void) {
    s64 temp_v1;

    temp_v1 = (s64) (func_00835D10() << 0x38) >> 0x38;
    switch (temp_v1) {                              /* irregular */
    case 3:
        return 1;
    case 2:
        return 1;
    case 4:
    case 1:
    case 0:
        /* fallthrough */
    default:
        return 0;
    }
}
