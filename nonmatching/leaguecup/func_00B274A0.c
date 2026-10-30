/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B274A0(s32 arg0) {
    s32 var_v0;

    var_v0 = arg0 & 0xFF;
    if (var_v0 >= 6) {
        if (var_v0 >= 0xC) {
            if (var_v0 >= 0xF) {
                var_v0 -= 0xF;
            } else {
                var_v0 -= 0xC;
            }
        } else {
            var_v0 -= 6;
        }
    }
    return var_v0 & 0xFF;
}
