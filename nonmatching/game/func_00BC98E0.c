/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBD390[];

s32 func_00BC98E0(void) {
    s32 *var_a0;
    s32 var_a1;
    s32 var_v0;

    var_v0 = 1;
    var_a1 = 0;
    var_a0 = ((void *)D_00CBD390);
    do {
        if (*var_a0 != 0) {
            var_v0 = 0;
        }
        var_a1 += 1;
        var_a0 += 4;
    } while (var_a1 < 6);
    return var_v0;
}
