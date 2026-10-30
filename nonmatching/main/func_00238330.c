/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00229010(s32);                             /* extern */

s32 func_00238330(s32 arg0) {
    s32 temp_v1;
    s32 var_s1;
    s32 var_s2;

    var_s2 = 0;
    var_s1 = 0xFF;
loop_1:
    if ((arg0 & 0xFF) == (func_00229010(var_s2) & 0xFF)) {
        var_s1 = var_s2 & 0xFF;
    }
    temp_v1 = var_s1 & 0xFF;
    if (temp_v1 == 0xFF) {
        var_s2 = (var_s2 + 1) & 0xFF;
        if (var_s2 >= 0x48) {

        } else {
            goto loop_1;
        }
    }
    if (temp_v1 < 0x40) {
        return ((u32) (var_s1 & 0xFF) >> 4) & 0xFF;
    }
    return 4;
}
