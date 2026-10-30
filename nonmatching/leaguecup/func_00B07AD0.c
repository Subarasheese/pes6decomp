/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B07AD0(s32 arg0) {
    s32 var_v0;

    var_v0 = arg0 & 0xFF;
    if (var_v0 >= 6) {
        if (var_v0 >= 8) {
            if (var_v0 >= 0xA) {
                if (var_v0 >= 0xE) {
                    var_v0 -= 0xE;
                } else {
                    var_v0 -= 0xB;
                }
                goto block_16;
            }
            return 1;
        }
        return 1;
    }
block_16:
    return var_v0 & 0xFF;
}
