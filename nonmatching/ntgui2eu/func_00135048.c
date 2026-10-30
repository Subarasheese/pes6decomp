/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_011D6F28[];

s32 func_00135048(s32 *arg0) {
    s32 *var_a0;
    s32 *var_a1;
    s32 temp_v0;
    s32 var_v1;

    var_a0 = arg0;
    var_v1 = 0x14D;
    var_a1 = ((void *)D_011D6F28);
    do {
        temp_v0 = *var_a0;
        var_v1 -= 1;
        var_a0 += 4;
        *var_a1 = temp_v0;
        var_a1 += 4;
    } while (var_v1 >= 0);
    return 0;
}
