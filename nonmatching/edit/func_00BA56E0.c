/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002EDDB0(s32);
extern s32 func_002EDE90(s32);
s32 func_00BA56E0(s32 arg0, s32 arg1) {
    s32 var_a0;
    s32 var_s0;

    var_a0 = arg0;
    if (arg1 == 0) {
        if (var_a0 < 0) {
            return 0x1CA;
        }
        if (var_a0 >= 0x32) {
            return 0x1CA;
        }
        goto block_13;
    }
    if (arg1 == 1) {
        if (var_a0 < 0) {
            return 0x1CA;
        }
        if (var_a0 >= 0x64) {
            return 0x1CA;
        }
        var_a0 += 0x32;
        goto block_13;
    }
block_13:
    var_s0 = func_002EDDB0(var_a0);
    if (func_002EDE90(var_s0) != 0) {

    } else {
        var_s0 = 0x1CA;
    }
    return var_s0;
}
