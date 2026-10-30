/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00131F60(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 *arg4, s32 *arg5, s32 *arg6, s32 *arg7) {
    s32 temp_t0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a0;
    s32 var_a1;

    var_a0 = arg0;
    var_a1 = arg1;
    *arg4 = 0;
    *arg5 = 0;
    *arg6 = 0;
    *arg7 = 0;
    if (arg2 == var_a0) {
        goto block_1;
    }
    if (arg2 < var_a0) {
loop_4:
        temp_t0 = *arg4;
        var_a0 = var_a0 >> 1;
        temp_v1 = temp_t0 - 1;
        *arg4 = temp_v1;
        if (arg2 != var_a0) {
            if (var_a0 >= arg2) {
                if (temp_v1 >= -1) {
                    goto loop_4;
                }
            } else {
                *arg4 = temp_t0;
            }
        } else {
block_1:
            *arg6 = 1;
        }
    }
    if (arg3 == var_a1) {
        /* Duplicate return node #8. Try simplifying control flow for better match */
        *arg7 = 1;
        return;
    }
    if (arg3 < var_a1) {
loop_12:
        var_a1 = var_a1 >> 1;
        temp_v1_2 = *arg5 - 1;
        *arg5 = temp_v1_2;
        if (arg3 != var_a1) {
            if (var_a1 >= arg3) {
                if (temp_v1_2 >= -1) {
                    goto loop_12;
                }
            } else {
                *arg5 = *arg5;
            }
        } else {
            *arg7 = 1;
        }
    }
}
