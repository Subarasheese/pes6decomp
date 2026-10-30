/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002082F0(s32);
s32 func_00208280(s32);                             /* extern */
extern s32 D_003E74CC;

s32 func_00207AC0(s32 arg0, s32 arg1, s32 arg2) {
    f32 temp_f1;
    s32 temp_a0;
    s32 temp_hi;
    s32 var_s0;
    s32 var_v0;
    s32 var_v0_2;

    if (arg2 != 0) {
        var_s0 = 0;
        var_v0_2 = M2C_FIELD(((arg0 * 4) + D_003E74CC), s32 *, 0x2FD8);
    } else {
        var_s0 = func_002082F0(arg0);
        var_v0_2 = func_00208280(arg0);
    }
    temp_f1 = (f32) var_s0 + ((f32) (var_v0_2 * arg1) / 10000.0f);
    temp_hi = (s32) (10000.0f * temp_f1) % 10000;
    if ((temp_hi != 0) && (temp_hi < 0x270F)) {
        var_v0 = (s32) (1.0f + temp_f1);
    } else {
        var_v0 = (s32) temp_f1;
    }
    temp_a0 = M2C_FIELD(((arg0 * 4) + D_003E74CC), s32 *, 0x2FD8);
    if (var_v0 >= temp_a0) {
        return temp_a0;
    }
    return var_v0;
}
