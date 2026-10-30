/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B611F0(void **arg0, s32 arg1, s32 arg2) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    f32 temp_f5;
    s32 var_a1;
    void *temp_v1;

    var_a1 = arg1;
    temp_v1 = *arg0;
    temp_f1 = (f32) arg2;
    temp_f5 = M2C_FIELD(temp_v1, f32 *, 0xE0);
    temp_f3 = 13465.0f - temp_f1;
    if (!(temp_f5 < temp_f3)) {
        if ((var_a1 < 0x4001) || (var_a1 >= 0xC000)) {
            var_a1 = 0x8000;
        }
    } else if ((temp_f5 <= (-13465.0f + temp_f1)) && (var_a1 >= 0x4000) && (var_a1 < 0xC001)) {
        var_a1 = 0;
    }
    temp_f1_2 = (f32) arg2;
    temp_f4 = M2C_FIELD(temp_v1, f32 *, 0xE8);
    temp_f2 = 8729.0f - temp_f1_2;
    if (!(temp_f4 < temp_f2)) {
        if ((var_a1 >= 0x8000) && (var_a1 < 0x10001)) {
            var_a1 = 0x4000;
        }
    } else if ((temp_f4 <= (-8729.0f + temp_f1_2)) && (var_a1 >= 0) && (var_a1 < 0x8001)) {
        var_a1 = 0xC000;
    }
    if (temp_f5 < temp_f3) {
        goto block_15;
    }
    if (!(temp_f4 < temp_f2)) {
        if ((var_a1 < 0x4001) || (var_a1 >= 0x8000)) {
            var_a1 = 0x4000;
        }
    } else {
block_15:
        if (temp_f5 < temp_f3) {
            goto block_16;
        }
        if (temp_f4 <= (-8729.0f + (f32) arg2)) {
            if ((var_a1 < 0x8001) || (var_a1 >= 0xC000)) {
                goto block_20;
            }
        } else {
block_16:
            temp_f0 = -13465.0f + (f32) arg2;
            if (!(temp_f5 <= temp_f0)) {
                goto block_17;
            }
            if (!(temp_f4 < temp_f2)) {
                if (var_a1 >= 0x4000) {
                    var_a1 = 0x4000;
                }
            } else {
block_17:
                if ((temp_f5 <= temp_f0) && (temp_f4 <= (-8729.0f + (f32) arg2)) && (var_a1 < 0xC001)) {
block_20:
                    var_a1 = 0xC000;
                }
            }
        }
    }
    return var_a1;
}
