/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B1D1E0(s32, s32);                    /* extern */

void func_00B1D5B0(void) {
    s32 var_s0;
    s32 var_s1;

    var_s1 = 0;
    do {
        var_s0 = 0;
loop_2:
        func_00B1D1E0(var_s1 & 0xFF, var_s0 & 0xFF);
        var_s0 += 1;
        if (var_s0 < 0x20) {
            goto loop_2;
        }
        var_s1 += 1;
    } while (var_s1 < 0x48);
}
