/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00221A60(s32);
M2C_UNK func_00B940E0(s32, s32, s32);               /* extern */

void func_00B94070(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 var_s1;

    temp_s0 = func_00221A60(arg0) & 0xFF;
    var_s1 = 0;
    if (temp_s0 > 0) {
        do {
            func_00B940E0(arg0, var_s1, arg1);
            var_s1 += 1;
        } while (var_s1 < temp_s0);
    }
}
