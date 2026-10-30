/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00246630(s32);                             /* extern */
s32 func_002466D0(s32);                             /* extern */
s32 func_00BC4C80(s32, s32);                        /* extern */

s32 func_00BF3AD0(s32 arg0) {
    s32 temp_v1;
    s32 var_s1;

    temp_v1 = arg0 & 0xFFFF;
    if ((temp_v1 >= 0x1155) && (temp_v1 < 0x11F5)) {
        return func_002466D0((temp_v1 - 0x1155) & 0xFFFF);
    }
    var_s1 = 0x39;
loop_4:
    if ((func_00BC4C80(arg0, var_s1) & 0xFF) == 0xFF) {
        var_s1 = (var_s1 + 1) & 0xFFFF;
        if (var_s1 >= 0x40) {
            return 1;
        }
        goto loop_4;
    }
    return func_00246630(var_s1);
}
