/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0065EB70[];

void func_00655330(void) {
    M2C_UNK *var_a0;
    s32 var_a1;

    var_a1 = 0;
    var_a0 = ((void *)D_0065EB70);
    do {
        if (M2C_FIELD(var_a0, s32 *, 0xA0) != 0) {

        }
        var_a1 += 1;
        var_a0 += 0xC;
    } while (var_a1 < 0xA);
}
