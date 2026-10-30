/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0093D4B0();                                /* extern */

s32 func_009B1150(void) {
    s32 temp_v0;

    temp_v0 = func_0093D4B0();
    switch (temp_v0) {                              /* irregular */
    case 1:
        return 6;
    case 3:
    case 2:
    case 0:
        return 3;
    default:
        return 3;
    }
}
