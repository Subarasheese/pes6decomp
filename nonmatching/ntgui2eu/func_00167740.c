/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00167740(void *arg0) {
    s32 temp_a3;
    s32 temp_a4;
    s32 temp_v0;

    temp_a3 = M2C_FIELD(arg0, s32 *, 0x5A0);
    temp_a4 = M2C_FIELD(arg0, s32 *, 0x5A4);
    temp_v0 = M2C_FIELD(arg0, s32 *, 0x5D4) * 2;
    M2C_FIELD(arg0, s32 *, 0xB8) = temp_a3;
    M2C_FIELD(arg0, s32 *, 0xC0) = (s32) (temp_a3 + temp_v0 + M2C_FIELD(arg0, s32 *, 0x5AC));
    M2C_FIELD(arg0, s32 *, 0xC4) = (s32) (temp_a4 + temp_v0 + M2C_FIELD(arg0, s32 *, 0x5B0));
    M2C_FIELD(arg0, s32 *, 0xBC) = temp_a4;
}
