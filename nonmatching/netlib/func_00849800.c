/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00849800(s32 arg0, s64 arg1) {
    s64 temp_v1;

    temp_v1 = (s64) (arg1 << 0x38) >> 0x38;
    switch (temp_v1) {                              /* irregular */
    case 2:
    default:
        return (arg0 != 0) ? 1 : 0;
    case 3:
    case 1:
        return (arg0 != 0) ? 0 : 1;
    }
}
