/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00936B90();                                /* extern */
s32 func_00960A30(s32);                             /* extern */

s32 func_00960F50(void) {
    s32 temp_v0;
    s32 var_s0;
    s32 var_s1;
    s32 var_v0;

    var_s0 = 0;
    temp_v0 = func_00936B90();
    if (temp_v0 != 0) {
        var_v0 = temp_v0 + 0x3F6C0;
    } else {
        var_v0 = 0;
    }
    if (var_v0 != 0) {
        var_s1 = 0;
        do {
            if (func_00960A30(var_s1) == 1) {
                var_s0 += 1;
            }
            var_s1 += 1;
        } while (var_s1 < 0xA);
        return var_s0;
    }
    return 0;
}
