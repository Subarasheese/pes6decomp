/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001B4C50(void *);
extern void *D_00CCD4B0;

s32 func_00C89010(void) {
    s32 var_s1;
    s32 var_v0;
    void **var_s0;
    void *temp_a0;

    var_v0 = 0;
    var_s1 = 0;
    var_s0 = &D_00CCD4B0;
    do {
        temp_a0 = *var_s0;
        if (temp_a0 != NULL) {
            var_v0 = func_001B4C50(temp_a0);
        }
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 == 0);
    return var_v0;
}
