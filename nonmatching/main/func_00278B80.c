/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s16 D_003E7560;
extern s16 D_003E7564;
extern s8 D_003E7568;

void func_00278B80(s16 arg0, s16 arg1, f32 fparg0) {
    f32 temp_f1;
    f32 var_f12;
    s32 var_a0;

    var_f12 = fparg0;
    D_003E7560 = arg0;
    D_003E7564 = arg1;
    if (var_f12 < 0.0f) {
        var_f12 *= -1.0f;
    }
    if (!(var_f12 <= 1.0f)) {
        var_f12 = 1.0f;
    }
    temp_f1 = 127.0f * var_f12;
    if (temp_f1 >= 2.1474836e9f) {
        var_a0 = (s32) (temp_f1 - 2.1474836e9f) | 0x80000000;
    } else {
        var_a0 = (s32) temp_f1;
    }
    D_003E7568 = var_a0 & 0xFF;
}
