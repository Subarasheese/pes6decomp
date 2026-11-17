/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_009B3480(void *, s16, f32, f32);

s32 func_009B9B30(void *arg0, s32 arg1) {
    f32 var_f13;
    s16 temp_a1;

    temp_a1 = M2C_FIELD(arg0, s16 *, 0x14);
    if ((arg1 & 0xFFFF) < 0x8000) {
        var_f13 = -923.0f;
    } else {
        var_f13 = 955.0f;
    }
    return func_009B3480(arg0, temp_a1, -13401.0f * (f32) temp_a1, var_f13) & 0xFFFF;
}
