/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00186FE0(void *arg0, void *arg1, void *arg2, f32 fparg0, f32 fparg1) {
    s16 temp_a0;
    s16 temp_a1;
    s16 temp_a3;
    s16 temp_a4;
    s16 temp_a5;
    s16 temp_a6;
    s32 var_v0;

    temp_a6 = M2C_FIELD(arg0, s16 *, 0);
    temp_a4 = M2C_FIELD(arg0, s16 *, 2);
    temp_a5 = M2C_FIELD(arg1, s16 *, 0);
    temp_a3 = M2C_FIELD(arg1, s16 *, 2);
    if (((f32) (temp_a5 - temp_a6) * (fparg1 - (f32) temp_a4)) < ((fparg0 - (f32) temp_a6) * (f32) (temp_a3 - temp_a4))) {
        return 0;
    }
    temp_a1 = M2C_FIELD(arg2, s16 *, 0);
    temp_a0 = M2C_FIELD(arg2, s16 *, 2);
    if (!(((f32) (temp_a1 - temp_a5) * (fparg1 - (f32) temp_a3)) < ((fparg0 - (f32) temp_a5) * (f32) (temp_a0 - temp_a3)))) {
        var_v0 = 1;
        if (!(((f32) (temp_a6 - temp_a1) * (fparg1 - (f32) temp_a0)) < ((fparg0 - (f32) temp_a1) * (f32) (temp_a4 - temp_a0)))) {
            var_v0 = 0;
        }
        return var_v0 ^ 1;
    }
    return 0;
}
