/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00B00970(void *arg0, s32 arg1) {
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (arg1 < temp_v1) {
        M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (temp_v1 - arg1);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
}
