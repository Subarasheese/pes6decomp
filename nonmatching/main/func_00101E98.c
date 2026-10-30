/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u32 func_00101E98(u32 arg0) {
    u32 var_a0;

    var_a0 = arg0;
    if ((var_a0 >> 0x1C) == 7) {
        var_a0 = (var_a0 & 0x0FFFFFFF) | 0x80000000;
    }
    return var_a0;
}
