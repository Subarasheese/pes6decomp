/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_001669E0(void *arg0) {
    s64 temp_a1;
    void *temp_a0;

    temp_a1 = (M2C_FIELD(arg0, s32 *, 0x5DC) & 1) << 6;
    temp_a0 = arg0 + ((M2C_FIELD(arg0, s32 *, 0x4EC) << 9) + 0xD0) + 0x10;
    M2C_FIELD(temp_a0, s64 *, 0x50) = (s64) ((M2C_FIELD(temp_a0, s64 *, 0x50) & ~0x40) | temp_a1);
    M2C_FIELD(temp_a0, s64 *, 0x150) = (s64) ((M2C_FIELD(temp_a0, s64 *, 0x150) & ~0x40) | temp_a1);
}
