/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_0014E4E0(void *arg0, void *arg1, s32 arg2, void *arg3, s32 arg4, s32 arg5) {
    s32 temp_lo;
    s32 var_v1;
    u8 temp_a7;
    u8 temp_a7_2;
    u8 temp_t0;
    void *var_a0;
    void *var_a1;

    var_a0 = arg0;
    var_a1 = arg1;
    var_v1 = 0;
    if (arg2 > 0) {
        do {
            temp_a7 = M2C_FIELD(var_a0, u8 *, 0);
            M2C_FIELD(var_a1, s8 *, 0) = (s8) (temp_a7 + ((s32) (arg4 * (M2C_FIELD(arg3, u8 *, 0) - temp_a7)) / arg5));
            temp_a7_2 = M2C_FIELD(var_a0, u8 *, 1);
            M2C_FIELD(var_a1, s8 *, 1) = (s8) (temp_a7_2 + ((s32) (arg4 * (M2C_FIELD(arg3, u8 *, 1) - temp_a7_2)) / arg5));
            temp_t0 = M2C_FIELD(var_a0, u8 *, 2);
            var_v1 += 1;
            temp_lo = (s32) (arg4 * (M2C_FIELD(arg3, u8 *, 2) - temp_t0)) / arg5;
            var_a0 += 4;
            M2C_FIELD(var_a1, s8 *, 2) = (s8) (temp_t0 + temp_lo);
            var_a1 += 4;
        } while (var_v1 < arg2);
    }
}
