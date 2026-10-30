/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00224BC0(s32, s32);                        /* extern */

s32 func_00B03CE0(s32 arg0) {
    s32 var_s1;
    s32 var_s2;

    if ((arg0 & 0xFF) < 0x50) {
        var_s2 = 0;
        var_s1 = 0;
        do {
            if (func_00224BC0(arg0, var_s2 & 0xFF) & 0xFFFF) {
                var_s1 = (var_s1 + 1) & 0xFF;
            }
            var_s2 += 1;
        } while (var_s2 < 0x20);
        return var_s1;
    }
    return 0;
}
