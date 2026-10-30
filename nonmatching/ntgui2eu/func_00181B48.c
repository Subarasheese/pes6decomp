/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00181B48(void *arg0) {
    s64 temp_v1;
    void *temp_a1;

    temp_v1 = (M2C_FIELD(arg0, s32 *, 0x5DC) & 1) << 6;
    temp_a1 = (M2C_FIELD(arg0, s32 *, 0x4EC) * 0x8C0) + arg0 + 0x920;
    M2C_FIELD(temp_a1, s64 *, 0x230) = (s64) ((M2C_FIELD(temp_a1, s64 *, 0x230) & ~0x40) | temp_v1);
    M2C_FIELD(temp_a1, s64 *, 0x710) = (s64) ((((M2C_FIELD(temp_a1, s64 *, 0x710) & ~0x40) | temp_v1) & ~0x40) | temp_v1);
    M2C_FIELD(temp_a1, s64 *, 0x3D0) = (s64) ((M2C_FIELD(temp_a1, s64 *, 0x3D0) & ~0x40) | temp_v1);
}
