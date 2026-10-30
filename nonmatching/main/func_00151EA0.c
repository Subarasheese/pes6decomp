/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00376A98[];

s32 func_00151EA0(s32 arg0) {
    f32 temp_f1;
    f32 var_f0;
    f32 var_f2;
    s32 temp_a2;
    s32 var_v1;
    s32 var_v1_2;
    u32 temp_a1;

    temp_a2 = arg0 & 0xFFFF;
    if (temp_a2 == 0) {
        return 0;
    }
    temp_a1 = (*(s32 *)D_00376A98) ^ ((*(s32 *)D_00376A98) << 0x11);
    (*(s32 *)D_00376A98) = temp_a1 ^ (temp_a1 >> 0xF);
    if (arg0 >= 0) {
        var_f2 = (f32) arg0;
    } else {
        var_f2 = 2.0f * (f32) (((u32) arg0 >> 1) | (arg0 & 1));
    }
    if ((*(s32 *)D_00376A98) < 0) {
        var_f0 = 2.0f * (f32) (((u32) (*(s32 *)D_00376A98) >> 1) | ((*(s32 *)D_00376A98) & 1));
    } else {
        var_f0 = (f32) (*(s32 *)D_00376A98);
    }
    temp_f1 = var_f2 * (2.3283064e-10f * var_f0);
    if (temp_f1 >= 2.1474836e9f) {
        var_v1_2 = (s32) (temp_f1 - 2.1474836e9f) | 0x80000000;
    } else {
        var_v1_2 = (s32) temp_f1;
    }
    var_v1 = var_v1_2 & 0xFFFF & 0xFFFF;
    if (var_v1 >= temp_a2) {
        var_v1 = (temp_a2 - 1) & 0xFFFF;
    }
    return var_v1 & 0xFFFF;
}
