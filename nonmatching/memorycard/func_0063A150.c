/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0021FA50();                                /* extern */

s32 func_0063A150(s32 arg0) {
    s32 temp_v1;
    s32 var_v0;

    temp_v1 = arg0 & 0xFFFF;
    if (temp_v1 == 0xFFFF) {
        var_v0 = 0x6A;
    } else {
        var_v0 = 0x11E;
        if (temp_v1 == 0x11E) {

        } else {
            var_v0 = func_0021FA50();
        }
    }
    if (var_v0 == 0x1CA) {
        var_v0 = 0x6A;
    }
    return var_v0;
}
