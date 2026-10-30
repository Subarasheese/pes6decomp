/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00178ED8(void *arg0) {
    s64 temp_a2;
    void *temp_a1;

    temp_a2 = (M2C_FIELD(arg0, s32 *, 0x5DC) & 1) << 6;
    temp_a1 = (M2C_FIELD(arg0, s32 *, 0x4EC) * 0x19C0) + arg0 + 0x920;
    M2C_FIELD(temp_a1, s64 *, 0x2F0) = (s64) ((M2C_FIELD(temp_a1, s64 *, 0x2F0) & ~0x40) | temp_a2);
    M2C_FIELD(temp_a1, s64 *, 0x130) = (s64) ((M2C_FIELD(temp_a1, s64 *, 0x130) & ~0x40) | temp_a2);
}
