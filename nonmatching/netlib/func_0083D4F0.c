/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D0BAF0();                                /* extern */

s32 func_0083D4F0(void) {
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = func_00D0BAF0();
    if (temp_v0 != 0) {
        var_v0 = temp_v0 + 0xF8A4;
    } else {
        var_v0 = 0;
    }
    if (var_v0 != 0) {
        return var_v0 + 0x874;
    }
    return 0;
}
