/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00164300(s32 *arg0, s32 *arg1, s32 *arg2, s32 *arg3, void *arg4, void *arg5, s32 arg6, s32 arg7, s32 arg_sp0) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_a2;
    u8 temp_v0;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg4, u8 *, 0);
    temp_v0 = M2C_FIELD(arg5, u8 *, 0);
    if (arg_sp0 == arg7) {
        *arg0 = (s32) (temp_v1 + temp_v0) >> 1;
        *arg1 = (s32) (M2C_FIELD(arg4, u8 *, 1) + M2C_FIELD(arg5, u8 *, 1)) >> 1;
        *arg2 = (s32) (M2C_FIELD(arg4, u8 *, 2) + M2C_FIELD(arg5, u8 *, 2)) >> 1;
        *arg3 = (s32) (M2C_FIELD(arg4, u8 *, 3) + M2C_FIELD(arg5, u8 *, 3)) >> 1;
        return;
    }
    temp_a2 = arg_sp0 - arg6;
    temp_a1 = arg6 - arg7;
    temp_a0 = arg_sp0 - arg7;
    *arg0 = (s32) ((temp_v0 * temp_a1) + (temp_v1 * temp_a2)) / temp_a0;
    *arg1 = (s32) ((M2C_FIELD(arg5, u8 *, 1) * temp_a1) + (M2C_FIELD(arg4, u8 *, 1) * temp_a2)) / temp_a0;
    *arg2 = (s32) ((M2C_FIELD(arg5, u8 *, 2) * temp_a1) + (M2C_FIELD(arg4, u8 *, 2) * temp_a2)) / temp_a0;
    *arg3 = (s32) ((M2C_FIELD(arg5, u8 *, 3) * temp_a1) + (M2C_FIELD(arg4, u8 *, 3) * temp_a2)) / temp_a0;
}
