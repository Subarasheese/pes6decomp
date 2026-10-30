/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00164258(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 *arg4, s32 *arg5, s32 *arg6, s32 *arg7) {
    s32 temp_t0;
    s32 temp_t0_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_a1;
    s32 var_a2;
    s32 var_a3;

    var_a0 = arg0;
    var_a1 = arg1;
    var_a2 = arg2;
    var_a3 = arg3;
    temp_v0 = var_a0;
    if (var_a2 < var_a0) {
        var_a0 = var_a2;
        var_a2 = temp_v0;
    }
    temp_v0_2 = var_a1;
    if (var_a3 < var_a1) {
        var_a1 = var_a3;
        var_a3 = temp_v0_2;
    }
    temp_v1 = *arg6;
    temp_t0 = *arg4;
    if (temp_v1 < temp_t0) {
        *arg4 = temp_v1;
        *arg6 = temp_t0;
    }
    temp_v1_2 = *arg7;
    temp_t0_2 = *arg5;
    if (temp_v1_2 < temp_t0_2) {
        *arg5 = temp_v1_2;
        *arg7 = temp_t0_2;
    }
    if (*arg4 < var_a0) {
        *arg4 = var_a0;
    }
    if (*arg5 < var_a1) {
        *arg5 = var_a1;
    }
    if (var_a2 < *arg6) {
        *arg6 = var_a2;
    }
    if (var_a3 < *arg7) {
        *arg7 = var_a3;
    }
}
