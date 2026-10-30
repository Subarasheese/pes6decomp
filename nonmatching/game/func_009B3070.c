/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B3070(s32 arg0, s32 arg1) {
    s32 var_v0;

    var_v0 = (((arg1 & 0xFFFF) - (arg0 & 0xFFFF)) + 0x10000) & 0xFFFF;
    if (var_v0 >= 0x8001) {
        var_v0 = (0x10000 - var_v0) & 0xFFFF;
    }
    return var_v0;
}
