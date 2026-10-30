/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


f32 func_009ABC80(s32 arg0, s32 arg1) {
    f32 var_f0;
    f32 var_f1;

    if (arg0 < 0) {
        var_f1 = 2.0f * (f32) (((u32) arg0 >> 1) | (arg0 & 1));
    } else {
        var_f1 = (f32) arg0;
    }
    if (arg1 < 0) {
        var_f0 = 2.0f * (f32) (((u32) arg1 >> 1) | (arg1 & 1));
    } else {
        var_f0 = (f32) arg1;
    }
    return var_f1 / var_f0;
}
