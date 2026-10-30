/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002C2A90(void *arg0, void *arg1, void *arg2) {
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f4;
    s32 var_v0;

    var_v0 = 0;
    if ((arg0 != NULL) && (arg1 != NULL) && (arg2 != NULL) && ((temp_f1 = M2C_FIELD(arg0, f32 *, 0), temp_f3 = M2C_FIELD(arg1, f32 *, 0), !(temp_f3 < temp_f1)) || !(M2C_FIELD(arg2, f32 *, 0) < temp_f1)) && ((temp_f2 = M2C_FIELD(arg1, f32 *, 4), temp_f4 = M2C_FIELD(arg0, f32 *, 4), !(temp_f2 < temp_f4)) || !(M2C_FIELD(arg2, f32 *, 4) < temp_f4)) && ((temp_f1_2 = temp_f1 + M2C_FIELD(arg0, f32 *, 8), (temp_f3 <= temp_f1_2)) || (M2C_FIELD(arg2, f32 *, 0) <= temp_f1_2)) && ((temp_f1_3 = temp_f4 + M2C_FIELD(arg0, f32 *, 0xC), (temp_f2 <= temp_f1_3)) || (M2C_FIELD(arg2, f32 *, 4) <= temp_f1_3))) {
        var_v0 = 1;
    }
    return var_v0;
}
