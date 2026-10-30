/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_0016DDF0(void *arg0, s32 *arg1, s32 *arg2, s32 *arg3, s32 *arg4) {
    s32 temp_v0;
    s32 temp_v0_2;

    *arg1 = M2C_FIELD(arg0, s32 *, 0x5A0) + M2C_FIELD(arg0, s32 *, 0x880) + (M2C_FIELD(arg0, s32 *, 0x878) + M2C_FIELD(arg0, s32 *, 0x5D4));
    *arg2 = M2C_FIELD(arg0, s32 *, 0x5A4) + M2C_FIELD(arg0, s32 *, 0x888) + (M2C_FIELD(arg0, s32 *, 0x87C) + M2C_FIELD(arg0, s32 *, 0x5D4));
    temp_v0 = ((M2C_FIELD(arg0, s32 *, 0x5AC) - (M2C_FIELD(arg0, s32 *, 0x878) * 2)) - M2C_FIELD(arg0, s32 *, 0x880)) - M2C_FIELD(arg0, s32 *, 0x884);
    *arg3 = temp_v0;
    if (temp_v0 < 0) {
        *arg3 = 0;
    }
    temp_v0_2 = ((M2C_FIELD(arg0, s32 *, 0x5B0) - (M2C_FIELD(arg0, s32 *, 0x87C) * 2)) - M2C_FIELD(arg0, s32 *, 0x888)) - M2C_FIELD(arg0, s32 *, 0x88C);
    *arg4 = temp_v0_2;
    if (temp_v0_2 < 0) {
        *arg4 = 0;
    }
}
