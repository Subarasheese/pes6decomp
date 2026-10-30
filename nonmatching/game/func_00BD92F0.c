/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BD92F0(void **arg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    s32 var_v1;
    void *temp_v1;

    temp_v1 = *arg0;
    temp_f1 = M2C_FIELD(temp_v1, f32 *, 0xE0);
    if (temp_f1 <= 13369.0f) {
        if (!(temp_f1 < -13369.0f)) {
            return 0;
        }
        temp_f1_2 = M2C_FIELD(temp_v1, f32 *, 0xE8);
        if (!(temp_f1_2 <= 951.0f)) {
            return 0;
        }
        var_v1 = 1;
        if (!(temp_f1_2 < -951.0f)) {
            var_v1 = 0;
        }
        goto block_17;
    }
    temp_f1_3 = M2C_FIELD(temp_v1, f32 *, 0xE8);
    if (!(temp_f1_3 <= 951.0f)) {
        return 0;
    }
    var_v1 = 1;
    if (!(temp_f1_3 < -951.0f)) {
        var_v1 = 0;
    }
block_17:
    return var_v1 ^ 1;
}
