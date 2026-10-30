/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00183DD0(void *arg0, void *arg1, f32 fparg0, f32 fparg1) {
    f32 temp_f1;
    f32 temp_f1_2;

    M2C_FIELD(arg0, f32 *, 0) = (f32) (M2C_FIELD(arg0, f32 *, 0) + M2C_FIELD(arg1, f32 *, 0));
    M2C_FIELD(arg0, f32 *, 4) = (f32) (M2C_FIELD(arg0, f32 *, 4) + M2C_FIELD(arg1, f32 *, 4));
    M2C_FIELD(arg0, f32 *, 8) = (f32) (M2C_FIELD(arg0, f32 *, 8) + M2C_FIELD(arg1, f32 *, 8));
    if (M2C_FIELD(arg0, f32 *, 4) <= fparg1) {
        M2C_FIELD(arg0, f32 *, 4) = fparg1;
        temp_f1 = M2C_FIELD(arg1, f32 *, 4);
        if (!(temp_f1 >= 0.02f) && !(temp_f1 <= -0.02f)) {
            M2C_FIELD(arg1, f32 *, 8) = 0.0f;
            M2C_FIELD(arg1, f32 *, 4) = 0.0f;
            M2C_FIELD(arg1, f32 *, 0) = 0.0f;
            return 1;
        }
        M2C_FIELD(arg1, f32 *, 0) = (f32) (M2C_FIELD(arg1, f32 *, 0) * 0.25f);
        M2C_FIELD(arg1, f32 *, 8) = (f32) (M2C_FIELD(arg1, f32 *, 8) * 0.25f);
        M2C_FIELD(arg1, f32 *, 4) = (f32) (M2C_FIELD(arg1, f32 *, 4) * -0.16f);
        return -1;
    }
    temp_f1_2 = M2C_FIELD(arg1, f32 *, 4);
    if (!(temp_f1_2 <= -2.4f)) {
        M2C_FIELD(arg1, f32 *, 4) = (f32) (temp_f1_2 - 0.02f);
    }
    M2C_FIELD(arg1, f32 *, 0) = (f32) (M2C_FIELD(arg1, f32 *, 0) * fparg0);
    M2C_FIELD(arg1, f32 *, 4) = (f32) (M2C_FIELD(arg1, f32 *, 4) * fparg0);
    M2C_FIELD(arg1, f32 *, 8) = (f32) (M2C_FIELD(arg1, f32 *, 8) * fparg0);
    return 0;
}
