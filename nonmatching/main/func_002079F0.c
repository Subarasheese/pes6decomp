/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00207AC0(u16, M2C_UNK, f32);               /* extern */

s32 func_002079F0(void *arg0) {
    f32 temp_f1;
    f32 temp_f2;
    s32 temp_v0;
    s32 var_v0;

    temp_v0 = func_00207AC0(M2C_FIELD(arg0, u16 *, 0x30), 0, M2C_FIELD(arg0, f32 *, 0x28));
    if (M2C_FIELD(arg0, u16 *, 0x30) == 0) {
        var_v0 = 0;
    } else if ((M2C_FIELD(arg0, u8 *, 0x4C) != 0) && (M2C_FIELD(arg0, u8 *, 0x4D) == 0)) {
        var_v0 = 0;
    } else if ((M2C_FIELD(arg0, u8 *, 0x51) != 0) && (M2C_FIELD(arg0, u8 *, 0x4D) == 0)) {
        var_v0 = 0;
    } else {
        temp_f2 = M2C_FIELD(arg0, f32 *, 0x28) / 2.0f;
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x38) - (f32) temp_v0;
        if ((temp_f1 < temp_f2) && !(temp_f1 < -temp_f2)) {
            var_v0 = 1;
        } else {
            var_v0 = 0;
        }
    }
    return var_v0 != 0;
}
