/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00181CA0(void *arg0) {
    s64 temp_v0;
    void *temp_a0;
    void *temp_a0_2;

    temp_a0 = arg0 + 0x910;
    temp_v0 = (M2C_FIELD(temp_a0, s32 *, 0x55D4) & 1) << 6;
    temp_a0_2 = temp_a0 + (M2C_FIELD(arg0, s32 *, 0x4EC) * 0x140);
    M2C_FIELD(temp_a0_2, s64 *, 0x4BA0) = (s64) ((M2C_FIELD(temp_a0_2, s64 *, 0x4BA0) & ~0x40) | temp_v0);
    M2C_FIELD(temp_a0_2, s64 *, 0x5320) = (s64) ((M2C_FIELD(temp_a0_2, s64 *, 0x5320) & ~0x40) | temp_v0);
    M2C_FIELD(temp_a0_2, s64 *, 0x50A0) = (s64) ((M2C_FIELD(temp_a0_2, s64 *, 0x50A0) & ~0x40) | temp_v0);
    M2C_FIELD(temp_a0_2, s64 *, 0x4E20) = (s64) ((M2C_FIELD(temp_a0_2, s64 *, 0x4E20) & ~0x40) | temp_v0);
}
