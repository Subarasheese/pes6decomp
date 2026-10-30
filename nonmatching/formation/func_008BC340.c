/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_008BC340(s32 arg0, s32 arg1) {
    s32 var_a0;
    s8 *var_a1;
    s8 *var_a2;

    var_a2 = arg1 + 0xA4;
    var_a1 = arg0 + 0x8CC;
    var_a0 = 0x35;
    do {
        var_a0 -= 1;
        *var_a1 = *var_a2;
        var_a2 += 1;
        var_a1 += 1;
    } while (var_a0 > 0);
}
