/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_001838E0(void *arg0, s32 *arg1, s32 *arg2, s32 *arg3, s32 *arg4, s32 *arg5, s32 *arg6, s32 *arg7, s32 *arg_sp0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_t1;
    s32 temp_t1_2;
    s32 temp_v1;
    s32 temp_v1_2;
    void *temp_t0;

    temp_t0 = arg0 + 0x910;
    *arg1 = M2C_FIELD(temp_t0, s32 *, 0x55A0);
    *arg2 = M2C_FIELD(temp_t0, s32 *, 0x55A4);
    *arg3 = M2C_FIELD(temp_t0, s32 *, 0x55A8);
    *arg4 = M2C_FIELD(temp_t0, s32 *, 0x55AC);
    temp_t1 = M2C_FIELD(temp_t0, s32 *, 0x55A0);
    temp_a0 = M2C_FIELD(arg0, s32 *, 0x5AC);
    temp_v1 = (temp_t1 + M2C_FIELD(temp_t0, s32 *, 0x55A4)) * 2;
    if (temp_a0 < temp_v1) {
        *arg1 = (s32) (temp_t1 * temp_a0) / temp_v1;
        temp_a0_2 = M2C_FIELD(temp_t0, s32 *, 0x55A4);
        *arg2 = (s32) (temp_a0_2 * M2C_FIELD(arg0, s32 *, 0x5AC)) / (s32) ((M2C_FIELD(temp_t0, s32 *, 0x55A0) + temp_a0_2) * 2);
    }
    temp_t1_2 = M2C_FIELD(temp_t0, s32 *, 0x55A8);
    temp_a0_3 = M2C_FIELD(arg0, s32 *, 0x5B0);
    temp_v1_2 = (temp_t1_2 + M2C_FIELD(temp_t0, s32 *, 0x55AC)) * 2;
    if (temp_a0_3 < temp_v1_2) {
        *arg3 = (s32) (temp_t1_2 * temp_a0_3) / temp_v1_2;
        temp_a0_4 = M2C_FIELD(temp_t0, s32 *, 0x55AC);
        *arg4 = (s32) (temp_a0_4 * M2C_FIELD(arg0, s32 *, 0x5B0)) / (s32) ((M2C_FIELD(temp_t0, s32 *, 0x55A8) + temp_a0_4) * 2);
    }
    *arg5 = (*arg1 - *arg2) + ((s32) M2C_FIELD(arg0, s32 *, 0x5AC) >> 1);
    *arg6 = (*arg3 - *arg4) + ((s32) M2C_FIELD(arg0, s32 *, 0x5B0) >> 1);
    *arg7 = (s32) (M2C_FIELD(arg0, s32 *, 0x5AC) - ((*arg1 + *arg2) * 2)) >> 1;
    *arg_sp0 = (s32) (M2C_FIELD(arg0, s32 *, 0x5B0) - ((*arg3 + *arg4) * 2)) >> 1;
}
