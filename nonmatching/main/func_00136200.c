/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001360F0(s32, s32, s32);               /* extern */

s32 func_00136200(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    s32 temp_s6;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s0;
    s32 var_s2;

    temp_v0 = arg1 + arg3;
    var_s2 = arg5;
    var_s0 = arg7;
    temp_v1 = var_s2 + var_s0;
    if (temp_v0 < temp_v1) {
        temp_v1_2 = temp_v1 - temp_v0;
        if (temp_v1_2 < var_s0) {
            var_s0 -= temp_v1_2;
        } else {
            var_s2 -= temp_v1_2 - var_s0;
            var_s0 = 0;
        }
    }
    if (var_s2 >= arg1) {
        func_001360F0(arg0, arg4, arg1);
        func_001360F0(arg2, arg4 + arg1, var_s2 - arg1);
        func_001360F0((arg2 + var_s2) - arg1, arg6, var_s0);
    } else {
        temp_s6 = arg1 - var_s2;
        if (var_s0 < temp_s6) {
            func_001360F0(arg0, arg4, var_s2);
            func_001360F0(arg0 + var_s2, arg6, var_s0);
        } else {
            func_001360F0(arg0, arg4, var_s2);
            func_001360F0(arg0 + var_s2, arg6, temp_s6);
            func_001360F0(arg2, (arg6 + arg1) - var_s2, var_s0 - temp_s6);
        }
    }
    return var_s2 + var_s0;
}
