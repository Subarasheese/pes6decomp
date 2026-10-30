/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_0015FEB0(void);
s32 func_0015F1D0(s32 arg0) {
    s32 var_a0;

    var_a0 = arg0;
    if (var_a0 == -1) {
        var_a0 = ((func_0015FEB0() ^ 1) != 0) ? 1 : 2;
    }
    return var_a0;
}
