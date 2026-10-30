/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B33A0(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_f0;
    s32 temp_f1;

    temp_f1 = (s32) (M2C_FIELD(arg0, f32 *, 0xE0) - (f32) arg1);
    temp_f0 = (s32) (M2C_FIELD(arg0, f32 *, 0xE8) - (f32) arg2);
    return (temp_f1 * temp_f1) + (temp_f0 * temp_f0);
}
