/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001B8710(s32 arg0) {
    s32 var_a0;
    s32 var_a1;
    s32 var_v0;

    var_a0 = arg0;
    var_a1 = 0;
    if (!(var_a0 & 0xFFFF0000)) {
        var_a1 = 0x10;
        var_a0 <<= 0x10;
    }
    if (!(var_a0 & 0xFF000000)) {
        var_a1 += 8;
        var_a0 <<= 8;
    }
    if (!(var_a0 & 0xF0000000)) {
        var_a1 += 4;
        var_a0 *= 0x10;
    }
    if (!(var_a0 & 0xC0000000)) {
        var_a1 += 2;
        var_a0 *= 4;
    }
    var_v0 = var_a1;
    if (var_a0 >= 0) {
        var_v0 = 0x20;
        if (var_a0 & 0x40000000) {
            var_v0 = var_a1 + 1;
        }
    }
    return var_v0;
}
