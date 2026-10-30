/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00936B90();                                /* extern */

s32 func_00961230(void) {
    s32 temp_v0;

    temp_v0 = func_00936B90();
    if (temp_v0 != 0) {
        return temp_v0 + 0x3F6C0;
    }
    return 0;
}
