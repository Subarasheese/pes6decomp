/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00931480(s32 arg0) {
    s32 var_v1;

    var_v1 = arg0 >> 4;
    if (arg0 < 0) {
        var_v1 = (s32) (arg0 + 0xF) >> 4;
    }
    return ((var_v1 % 10) * 0xA) + ((s32) (arg0 & 0xF) % 10);
}
