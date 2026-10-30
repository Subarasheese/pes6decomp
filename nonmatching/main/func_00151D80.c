/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00376A98[];

s32 func_00151D80(s32 arg0, s32 arg1) {
    f32 temp_f1;
    f32 var_f2;
    f32 var_f3;
    s32 *temp_a0;
    s32 temp_a2;
    s32 temp_v0;
    s32 temp_v1;
    s32 var_v0;
    s32 var_v1;
    u32 temp_v1_2;

    temp_a2 = arg1 & 0xFFFF;
    if (temp_a2 != 0) {
        temp_a0 = ((void *)D_00376A98) + (arg0 * 4);
        temp_v1 = *temp_a0;
        temp_v1_2 = temp_v1 ^ (temp_v1 << 0x11);
        *temp_a0 = temp_v1_2 ^ (temp_v1_2 >> 0xF);
        if (arg1 >= 0) {
            var_f3 = (f32) arg1;
        } else {
            var_f3 = 2.0f * (f32) (((u32) arg1 >> 1) | (arg1 & 1));
        }
        temp_v0 = *temp_a0;
        if (temp_v0 >= 0) {
            var_f2 = (f32) temp_v0;
        } else {
            var_f2 = 2.0f * (f32) (((u32) temp_v0 >> 1) | (temp_v0 & 1));
        }
        temp_f1 = var_f3 * (2.3283064e-10f * var_f2);
        if (!(temp_f1 >= 2.1474836e9f)) {
            var_v1 = (s32) temp_f1;
        } else {
            var_v1 = (s32) (temp_f1 - 2.1474836e9f) | 0x80000000;
        }
        var_v0 = var_v1 & 0xFFFF & 0xFFFF;
        if (var_v0 >= temp_a2) {
            return (temp_a2 - 1) & 0xFFFF;
        }
        /* Duplicate return node #13. Try simplifying control flow for better match */
        return var_v0;
    }
    var_v0 = 0;
    return var_v0;
}
