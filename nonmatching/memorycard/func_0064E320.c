/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0064E320(s32 *arg0) {
    s32 *var_a0;
    s32 var_a3;
    s32 var_a4;
    u32 var_a1;
    u8 *var_a2;

    var_a0 = arg0;
    var_a4 = 0;
loop_1:
    var_a3 = 0;
    var_a2 = var_a0 + 4;
    var_a1 = 0;
    do {
        var_a1 += 1;
        var_a3 += *var_a2;
        var_a2 += 1;
    } while (var_a1 < 0x98U);
    if (*var_a0 == var_a3) {
        var_a4 += 1;
        var_a0 += 0x9C;
        if (var_a4 >= 0x14) {
            return 1;
        }
        goto loop_1;
    }
    return 0;
}
