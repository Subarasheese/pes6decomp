/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00246630(s32);                             /* extern */
s32 func_002466D0(s32);                             /* extern */
s32 func_00BC4C80(s32, s32);                        /* extern */
s32 func_00BC5740(s32);                             /* extern */

s32 func_00BF3A10(s32 arg0) {
    s32 temp_s0;
    s32 var_s2;
    s32 var_v0;

    temp_s0 = arg0 & 0xFFFF;
    if ((temp_s0 >= 0x1155) && (temp_s0 < 0x11F5)) {
        var_v0 = func_002466D0((temp_s0 - 0x1155) & 0xFFFF);
    } else {
        var_s2 = 0x39;
loop_4:
        if ((func_00BC4C80(temp_s0, var_s2) & 0xFF) == 0xFF) {
            var_s2 = (var_s2 + 1) & 0xFFFF;
            if (var_s2 >= 0x40) {
                var_v0 = 1;
            } else {
                goto loop_4;
            }
        } else {
            var_v0 = func_00246630(var_s2);
        }
    }
    if (var_v0 == 0) {
        return 0;
    }
    return func_00BC5740(arg0) == 0;
}
