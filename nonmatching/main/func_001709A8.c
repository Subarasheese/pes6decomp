/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00387460[];

s8 *func_001709A8(void) {
    s32 var_a0;
    s8 *var_a1;
    s8 *var_v1;

    var_a1 = NULL;
    var_v1 = ((void *)D_00387460);
    var_a0 = 0xC;
    do {
        var_a0 -= 1;
        var_a1 = ((*var_v1 ^ 0) == 0) ? var_v1 : var_a1;
        var_v1 += 0x30;
    } while (var_a0 >= 0);
    return var_a1;
}
