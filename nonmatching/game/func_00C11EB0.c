/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00C11EB0(void *arg0, s32 arg1, s32 arg2) {
    f32 temp_f1;
    f32 temp_f3;
    f32 temp_f5;
    f32 temp_f8;

    if (arg0 != NULL) {
        temp_f8 = (f32) arg1;
        temp_f5 = (f32) arg2;
        temp_f1 = (3366.25f * temp_f8) - 13465.0f;
        M2C_FIELD(arg0, f32 *, 0) = temp_f1;
        temp_f3 = (2909.6667f * temp_f5) - 8729.0f;
        M2C_FIELD(arg0, f32 *, 4) = temp_f3;
        M2C_FIELD(arg0, f32 *, 8) = (f32) (2.0f * (((3366.25f * (0.5f + temp_f8)) - 13465.0f) - temp_f1));
        M2C_FIELD(arg0, f32 *, 0xC) = (f32) (2.0f * (((2909.6667f * (0.5f + temp_f5)) - 8729.0f) - temp_f3));
    }
}
