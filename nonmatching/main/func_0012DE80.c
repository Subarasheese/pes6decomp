/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0012EE30(s32);                             /* extern */

void func_0012DE80(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a0;
    s32 temp_s0;
    s32 var_s1;
    void *var_s5;

    var_s5 = arg0;
    var_s1 = 0;
    if (arg1 > 0) {
        do {
            temp_a0 = M2C_FIELD(var_s5, s32 *, 8);
            temp_s0 = M2C_FIELD(var_s5, s32 *, 4);
            if (temp_a0 >= 0) {
                if (arg3 != func_0012EE30(temp_a0)) {
                    M2C_FIELD(var_s5, s32 *, 0) = -1;
                    M2C_FIELD(var_s5, s32 *, 4) = temp_s0;
                    M2C_FIELD(var_s5, s32 *, 8) = -1;
                }
            }
            var_s1 += 1;
            var_s5 += arg2;
        } while (var_s1 < arg1);
    }
}
