/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CE6750[];

void func_00BF3C10(void) {
    s16 *var_a0;
    u32 var_a1;

    var_a1 = 0;
    var_a0 = ((void *)D_00CE6750);
    do {
        var_a1 += 1;
        *var_a0 = 0;
        var_a0 += 2;
    } while (var_a1 < 0x1368U);
}
