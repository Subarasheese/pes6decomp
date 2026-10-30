/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_0016A128(s32 *arg0, s32 arg1) {
    s32 *var_a0;
    s32 var_v1;

    var_a0 = arg0;
    var_v1 = arg1 - 1;
    if (arg1 != 0) {
        do {
            *var_a0 = 0;
            var_v1 -= 1;
            var_a0 += 4;
        } while (var_v1 != -1);
    }
}
