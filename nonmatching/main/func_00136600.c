/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00136600(void *arg0, void **arg1, s32 *arg2, s32 *arg3, s32 *arg4) {
    s32 temp_a5;
    s32 temp_a6;
    s32 temp_a7;

    if (M2C_FIELD(arg0, s32 *, 0) == 0) {
        *arg1 = M2C_FIELD(arg0, s32 *, 0x2C) + arg0 + 4;
        *arg2 = 0x28 - M2C_FIELD(arg0, s32 *, 0x2C);
        *arg3 = M2C_FIELD(arg0, s32 *, 0x30);
        *arg4 = M2C_FIELD(arg0, s32 *, 0x3C);
        return;
    }
    temp_a7 = M2C_FIELD(arg0, s32 *, 0x3C);
    temp_a5 = M2C_FIELD(arg0, s32 *, 0x34);
    temp_a6 = temp_a7 - M2C_FIELD(arg0, s32 *, 0x38);
    if ((temp_a7 - temp_a5) < temp_a6) {
        *arg1 = M2C_FIELD(arg0, s32 *, 0x30) + temp_a5;
        *arg2 = M2C_FIELD(arg0, s32 *, 0x3C) - M2C_FIELD(arg0, s32 *, 0x34);
        *arg3 = M2C_FIELD(arg0, s32 *, 0x30);
        *arg4 = temp_a6 - (M2C_FIELD(arg0, s32 *, 0x3C) - M2C_FIELD(arg0, s32 *, 0x34));
    } else {
        *arg1 = M2C_FIELD(arg0, s32 *, 0x30) + temp_a5;
        *arg2 = temp_a6;
        *arg3 = 0;
        *arg4 = 0;
    }
}
