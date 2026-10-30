/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00210DF0();                                /* extern */
M2C_UNK func_00994C60(s32, s32);                    /* extern */
M2C_UNK func_00B1D980();                            /* extern */

void func_00998810(void) {
    s32 var_s0;
    s32 var_s1;

    var_s1 = 0;
    do {
        var_s0 = 0;
loop_2:
        func_00994C60(var_s1, var_s0);
        var_s0 += 1;
        if (var_s0 < 0x25) {
            goto loop_2;
        }
        var_s1 += 1;
    } while (var_s1 < 0x48);
    if (func_00210DF0() == 2) {
        func_00B1D980();
    }
}
