/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009344C0();                                /* extern */

s32 func_0093E9B0(void) {
    s32 temp_v0;

    temp_v0 = func_009344C0();
    switch (temp_v0) {                              /* irregular */
    case 2:
        return 1;
    case 3:
        return 1;
    case 1:
        return 1;
    case 4:
        return 1;
    default:
        return 0;
    }
}
