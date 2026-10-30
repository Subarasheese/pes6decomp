/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00162AE8(s32, s32);                    /* extern */

void func_00162C80(s32 arg0, s32 *arg1, u32 arg2) {
    s32 *var_s0;
    s32 temp_a1;
    u32 var_s1;

    var_s1 = 0;
    if (arg2 != 0) {
        var_s0 = arg1;
        do {
            temp_a1 = *var_s0;
            var_s1 += 1;
            var_s0 += 4;
            func_00162AE8(arg0, temp_a1);
        } while (var_s1 < arg2);
    }
}
