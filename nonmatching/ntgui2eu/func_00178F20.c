/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00178F20(void *arg0) {
    s64 temp_a1;
    void *temp_a0;
    void *temp_a0_2;

    temp_a0 = arg0 + 0x910;
    temp_a1 = (M2C_FIELD(temp_a0, s32 *, 0x33C0) & 1) << 6;
    temp_a0_2 = temp_a0 + (M2C_FIELD(arg0, s32 *, 0x4EC) * 0x19C0) + 0x10;
    M2C_FIELD(temp_a0_2, s64 *, 0x5D0) = (s64) ((M2C_FIELD(temp_a0_2, s64 *, 0x5D0) & ~0x40) | temp_a1);
    M2C_FIELD(temp_a0_2, s64 *, 0x4B0) = (s64) ((M2C_FIELD(temp_a0_2, s64 *, 0x4B0) & ~0x40) | temp_a1);
}
