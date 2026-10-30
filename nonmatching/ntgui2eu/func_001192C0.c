/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_006024F0;

void func_001192C0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_a0;

    temp_a0 = arg0 * 0x10;
    M2C_FIELD((temp_a0 + D_006024F0), s32 *, 0x80) = arg1;
    M2C_FIELD((temp_a0 + D_006024F0), s32 *, 0x84) = arg2;
    M2C_FIELD((temp_a0 + D_006024F0), s32 *, 0x88) = arg3;
    M2C_FIELD((temp_a0 + D_006024F0), s32 *, 0x8C) = arg4;
}
