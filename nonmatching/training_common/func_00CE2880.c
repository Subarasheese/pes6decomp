/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00CDCCB0();                                /* extern */

s32 func_00CE2880(void) {
    s32 temp_v0;

    temp_v0 = func_00CDCCB0();
    switch (temp_v0) {                              /* irregular */
    case 2:
        return 0x19;
    case 1:
        return 0x18;
    case 3:
    case 0:
        /* fallthrough */
    default:
        return 0x17;
    }
}
