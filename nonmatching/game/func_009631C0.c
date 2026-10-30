/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


f32 func_001CD9E0(f32);                             /* extern */
extern char D_00591BEC[];

s32 func_009631C0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_f0;
    s32 temp_lo;
    s32 var_v0;
    s32 var_v0_2;

    var_v0_2 = arg1 >> 1;
    temp_f0 = (s32) ((f32) (arg2 << 8) / (*(f32 *)D_00591BEC));
    if (arg1 < 0) {
        var_v0_2 = (s32) (arg1 + 1) >> 1;
    }
    temp_lo = var_v0_2 / temp_f0;
    var_v0 = (s32) func_001CD9E0((((f32) arg0 * (*(f32 *)D_00591BEC)) / (f32) temp_f0) - (f32) (temp_lo * temp_lo)) - temp_lo;
    if (var_v0 < 0) {
        var_v0 = 0;
    }
    return var_v0;
}
