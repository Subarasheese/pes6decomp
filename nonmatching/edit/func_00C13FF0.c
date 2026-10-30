/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u8 *func_002F7F80();                                /* extern */

s32 func_00C13FF0(s32 arg0) {
    u8 *temp_v0;

    if ((arg0 < 0) || (arg0 >= 0x59)) {
        return 0;
    }
    temp_v0 = func_002F7F80();
    if (temp_v0 != NULL) {
        return *temp_v0 != 0;
    }
    return 0;
}
