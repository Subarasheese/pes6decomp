/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0012EB30(s32, s16);
extern s16 func_0012EBE0(s32);
void func_0012DDA0(void *arg0, s8 arg1, s32 arg2, s32 arg3, s8 *arg4) {
    s32 var_a0;
    s32 var_s1;
    s8 temp_s0;
    s8 temp_s0_2;
    void *var_s5;

    var_s5 = arg0;
    temp_s0 = *arg4;
    temp_s0_2 = (temp_s0 >= arg1) ? arg1 : temp_s0;
    var_s1 = 0;
    if (temp_s0_2 > 0) {
        do {
            var_a0 = M2C_FIELD(var_s5, s32 *, 8);
            if (M2C_FIELD((arg4 + var_s1), s8 *, 2) != 0) {
                if (var_a0 < 0) {
                    var_a0 = func_0012EBE0(arg3);
                    M2C_FIELD(var_s5, s32 *, 8) = var_a0;
                }
                func_0012EB30(var_a0, 1);
                M2C_FIELD(var_s5, s32 *, 0) = 1;
            } else {
                func_0012EB30(var_a0, 0);
                M2C_FIELD(var_s5, s32 *, 0) = 0;
            }
            var_s1 += 1;
            var_s5 += arg2;
        } while (var_s1 < temp_s0_2);
    }
}
