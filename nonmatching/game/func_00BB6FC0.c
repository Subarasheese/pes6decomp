/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00BB6FC0(void *arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;

    temp_f1 = M2C_FIELD(arg0, f32 *, 0);
    var_f0 = 13465.0f;
    if (temp_f1 <= 13465.0f) {
        var_f0 = -13465.0f;
        if (temp_f1 < -13465.0f) {
            goto block_2;
        }
    } else {
block_2:
        M2C_FIELD(arg0, f32 *, 0) = var_f0;
    }
    temp_f1_2 = M2C_FIELD(arg0, f32 *, 8);
    var_f0_2 = 8729.0f;
    if (temp_f1_2 <= 8729.0f) {
        var_f0_2 = -8729.0f;
        if (temp_f1_2 < -8729.0f) {
            goto block_5;
        }
    } else {
block_5:
        M2C_FIELD(arg0, f32 *, 8) = var_f0_2;
    }
    temp_f1_3 = M2C_FIELD(arg0, f32 *, 4);
    var_f0_3 = -500.0f;
    if (temp_f1_3 <= -500.0f) {
        var_f0_3 = -1000.0f;
        if (temp_f1_3 < -1000.0f) {
            goto block_8;
        }
        return;
    }
block_8:
    M2C_FIELD(arg0, f32 *, 4) = var_f0_3;
}
