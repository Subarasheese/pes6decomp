/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00170870(void *arg0, s32 *arg1, s32 *arg2, s32 *arg3, s32 *arg4, s32 *arg5, s32 *arg6, s32 *arg7, s32 *arg_sp0) {
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_t0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;

    temp_t0 = M2C_FIELD(arg0, s32 *, 0x990);
    if (M2C_FIELD(arg0, s32 *, 0x8A0) != 0) {
        temp_v1 = M2C_FIELD(arg0, s32 *, 0x948);
        if (temp_t0 != 0) {
            *arg1 = temp_v1;
            *arg5 = M2C_FIELD(arg0, s32 *, 0x958);
        } else {
            *arg5 = temp_v1;
            *arg1 = temp_v1;
        }
        temp_v1_2 = M2C_FIELD(arg0, s32 *, 0x948);
        temp_a1 = M2C_FIELD(arg0, s32 *, 0x950);
        if (M2C_FIELD(arg0, s32 *, 0x994) != 0) {
            *arg3 = temp_v1_2 + temp_a1;
            *arg7 = M2C_FIELD(arg0, s32 *, 0x958) + M2C_FIELD(arg0, s32 *, 0x960);
        } else {
            temp_v0 = temp_v1_2 + temp_a1;
            *arg7 = temp_v0;
            *arg3 = temp_v0;
        }
        temp_v1_3 = M2C_FIELD(arg0, s32 *, 0x94C);
        if (M2C_FIELD(arg0, s32 *, 0x998) != 0) {
            *arg2 = temp_v1_3;
            *arg6 = M2C_FIELD(arg0, s32 *, 0x95C);
        } else {
            *arg6 = temp_v1_3;
            *arg2 = temp_v1_3;
        }
        temp_v1_4 = M2C_FIELD(arg0, s32 *, 0x94C);
        temp_a1_2 = M2C_FIELD(arg0, s32 *, 0x954);
        if (M2C_FIELD(arg0, s32 *, 0x99C) != 0) {
            *arg4 = temp_v1_4 + temp_a1_2;
            var_v1 = M2C_FIELD(arg0, s32 *, 0x964);
            var_v0 = M2C_FIELD(arg0, s32 *, 0x95C);
            /* Duplicate return node #12. Try simplifying control flow for better match */
            *arg_sp0 = var_v0 + var_v1;
            return;
        }
        var_v0_2 = temp_v1_4 + temp_a1_2;
        /* Duplicate return node #34. Try simplifying control flow for better match */
        *arg_sp0 = var_v0_2;
        *arg4 = var_v0_2;
        return;
    }
    if (temp_t0 == 0) {
        temp_v0_2 = M2C_FIELD(arg0, s32 *, 0x948);
        *arg5 = temp_v0_2;
        *arg1 = temp_v0_2;
    } else {
        *arg1 = M2C_FIELD(arg0, s32 *, 0x958);
        *arg5 = M2C_FIELD(arg0, s32 *, 0x948);
    }
    if (M2C_FIELD(arg0, s32 *, 0x994) == 0) {
        temp_v0_3 = M2C_FIELD(arg0, s32 *, 0x948) + M2C_FIELD(arg0, s32 *, 0x950);
        *arg7 = temp_v0_3;
        *arg3 = temp_v0_3;
    } else {
        *arg3 = M2C_FIELD(arg0, s32 *, 0x958) + M2C_FIELD(arg0, s32 *, 0x960);
        *arg7 = M2C_FIELD(arg0, s32 *, 0x948) + M2C_FIELD(arg0, s32 *, 0x950);
    }
    if (M2C_FIELD(arg0, s32 *, 0x998) == 0) {
        temp_v0_4 = M2C_FIELD(arg0, s32 *, 0x94C);
        *arg6 = temp_v0_4;
        *arg2 = temp_v0_4;
    } else {
        *arg2 = M2C_FIELD(arg0, s32 *, 0x95C);
        *arg6 = M2C_FIELD(arg0, s32 *, 0x94C);
    }
    if (M2C_FIELD(arg0, s32 *, 0x99C) == 0) {
        var_v0_2 = M2C_FIELD(arg0, s32 *, 0x94C) + M2C_FIELD(arg0, s32 *, 0x954);
        *arg_sp0 = var_v0_2;
        *arg4 = var_v0_2;
        return;
    }
    *arg4 = M2C_FIELD(arg0, s32 *, 0x95C) + M2C_FIELD(arg0, s32 *, 0x964);
    var_v1 = M2C_FIELD(arg0, s32 *, 0x954);
    var_v0 = M2C_FIELD(arg0, s32 *, 0x94C);
    *arg_sp0 = var_v0 + var_v1;
}
