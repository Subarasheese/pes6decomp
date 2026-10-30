/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0090FEC0(s32 arg0) {
    s32 var_a0;

    var_a0 = arg0;
    if (var_a0 & 0x80) {
        var_a0 = (var_a0 & ~0x80) - 0xE;
    }
    if (var_a0 >= 0x2D) {
        if (var_a0 >= 0x5A) {
            if (var_a0 >= 0x69) {
                return 3;
            }
            return 2;
        }
        return 1;
    }
    return 0;
}
