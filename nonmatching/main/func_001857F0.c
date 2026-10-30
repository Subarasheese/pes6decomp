/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001857F0(void *arg0, void *arg1, void *arg2) {
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 var_f1;
    f32 var_f2;
    f32 var_f3;

    temp_f1 = M2C_FIELD(arg0, f32 *, 0);
    temp_f0 = M2C_FIELD(arg2, f32 *, 0);
    if (temp_f0 <= temp_f1) {
        var_f2 = temp_f1 - temp_f0;
    } else {
        var_f2 = temp_f0 - temp_f1;
    }
    temp_f1_2 = M2C_FIELD(arg0, f32 *, 4);
    temp_f0_2 = M2C_FIELD(arg2, f32 *, 4);
    if (temp_f0_2 <= temp_f1_2) {
        var_f3 = temp_f1_2 - temp_f0_2;
    } else {
        var_f3 = temp_f0_2 - temp_f1_2;
    }
    temp_f1_3 = M2C_FIELD(arg0, f32 *, 8);
    temp_f0_3 = M2C_FIELD(arg2, f32 *, 8);
    if (temp_f0_3 <= temp_f1_3) {
        var_f1 = temp_f1_3 - temp_f0_3;
    } else {
        var_f1 = temp_f0_3 - temp_f1_3;
    }
    if ((var_f2 <= M2C_FIELD(arg1, f32 *, 0)) && (var_f3 <= M2C_FIELD(arg1, f32 *, 4)) && (var_f1 <= M2C_FIELD(arg1, f32 *, 8))) {
        return 1;
    }
    return 0;
}
