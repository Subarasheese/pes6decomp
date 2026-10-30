/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001493F0(M2C_UNK, s32);                    /* extern */

s32 func_00147E60(s32 arg0) {
    s32 var_s0;

    var_s0 = 0;
    if (func_001493F0(0, arg0) != 0) {
        var_s0 = 1 & 0xFF;
    }
    if (func_001493F0(1, arg0) != 0) {
        var_s0 = (var_s0 | 2) & 0xFF;
    }
    return var_s0 & 0xFF;
}
