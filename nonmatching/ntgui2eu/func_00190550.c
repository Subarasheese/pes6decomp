/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00190490(u32, s32);
s32 func_00190550(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_v1;
    u32 temp_v0;
    u32 temp_v1_2;

    temp_v1 = arg1 + 3;
    temp_v0 = func_00190490(0x40U, ((s32) ((temp_v1 > -1) ? temp_v1 : (arg1 + 6)) >> 2) << 6);
    M2C_FIELD(arg0, u32 *, 0) = temp_v0;
    if (temp_v0 == 0) {
        return 1;
    }
    temp_v1_2 = arg2 | temp_v0;
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    M2C_FIELD(arg0, u32 *, 0) = temp_v1_2;
    M2C_FIELD(temp_v1_2, s32 *, 0) = 0x70000000;
    M2C_FIELD(arg0, u32 *, 4) = temp_v1_2;
    M2C_FIELD(temp_v1_2, s32 *, 0xC) = 0;
    M2C_FIELD(temp_v1_2, s32 *, 8) = 0;
    M2C_FIELD(temp_v1_2, s32 *, 4) = 0;
    return 0;
}
