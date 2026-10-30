/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_0064E380(s32 *arg0) {
    u32 var_a3;
    u8 *var_a4;
    u8 temp_a2;

    *arg0 = 0;
    var_a4 = arg0 + 4;
    var_a3 = 0;
    do {
        temp_a2 = *var_a4;
        var_a3 += 1;
        var_a4 += 1;
        *arg0 += temp_a2;
    } while (var_a3 < 0x98U);
}
