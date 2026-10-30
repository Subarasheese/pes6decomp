/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00297D90(void *arg0, s32 arg1) {
    f32 temp_f1;
    f32 temp_f2;

    temp_f2 = M2C_FIELD(arg0, f32 *, 0x18) / 2.0f;
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x34) - (f32) arg1;
    if ((temp_f1 <= temp_f2) && !(temp_f1 <= -temp_f2)) {
        return 1;
    }
    return 0;
}
