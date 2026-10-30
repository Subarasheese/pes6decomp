/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00B34000(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_f0;
    s32 var_a2;
    s32 var_v0;
    void *temp_a0;

    temp_a0 = M2C_FIELD(arg0, void **, 4);
    temp_f0 = (s32) M2C_FIELD(temp_a0, f32 *, 0x38);
    var_v0 = 0;
    if ((arg1 < temp_f0) && (arg2 >= temp_f0)) {
        var_a2 = arg2 - arg1;
        if (var_a2 == 0) {
            var_a2 = 1;
        }
        var_v0 = (s32) ((M2C_FIELD(temp_a0, f32 *, 0x28) * (182.04445f * (f32) arg3 * (f32) ((M2C_FIELD(temp_a0, u8 *, 0x2D) != 0) ? -1 : 1))) / (f32) var_a2);
    }
    return var_v0;
}
