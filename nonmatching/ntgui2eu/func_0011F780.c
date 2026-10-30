/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00134F28(s32);                             /* extern */
s32 func_00134F88(s32, s32);                        /* extern */

void func_0011F780(void *arg0) {
    s32 temp_a0;
    s32 temp_v1;
    s32 var_v0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0);
    temp_v1 = M2C_FIELD(arg0, s32 *, 4) + M2C_FIELD(arg0, s32 *, 0x10);
    M2C_FIELD(arg0, s32 *, 4) = temp_v1;
    if (temp_a0 != 0) {
        var_v0 = func_00134F88(temp_a0, temp_v1 * 0x1C);
    } else {
        var_v0 = func_00134F28(temp_v1 * 0x1C);
    }
    M2C_FIELD(arg0, s32 *, 0) = var_v0;
}
