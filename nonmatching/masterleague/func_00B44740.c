/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00B445F0(s32, s32);
s32 func_00B44740(s32 arg0) {
    s32 var_s0;

    var_s0 = 0;
loop_1:
    if ((func_00B445F0(arg0, var_s0) & 0xFFFF) != 0xFFFF) {
        var_s0 = (var_s0 + 1) & 0xFF;
        if (var_s0 < 0x14) {
            goto loop_1;
        }
    }
    return var_s0;
}
