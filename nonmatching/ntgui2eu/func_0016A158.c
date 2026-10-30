/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0016A0E8(s32);                         /* extern */

void func_0016A158(s32 *arg0, s32 arg1) {
    s32 *var_s0;
    s32 temp_a0;
    s32 var_s1;

    var_s1 = arg1 - 1;
    var_s0 = arg0;
    if (arg1 != 0) {
        do {
            temp_a0 = *var_s0;
            var_s1 -= 1;
            if (temp_a0 != 0) {
                func_0016A0E8(temp_a0);
                *var_s0 = 0;
            }
            var_s0 += 4;
        } while (var_s1 != -1);
    }
}
