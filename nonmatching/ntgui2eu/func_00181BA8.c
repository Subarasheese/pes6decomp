/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00181BA8(void *arg0) {
    s64 temp_v0;
    void *temp_a0;
    void *temp_a0_2;

    temp_a0 = arg0 + 0x910;
    temp_v0 = (M2C_FIELD(temp_a0, s32 *, 0x55D4) & 1) << 6;
    temp_a0_2 = temp_a0 + (M2C_FIELD(arg0, s32 *, 0x4EC) * 0x740);
    M2C_FIELD(temp_a0_2, s64 *, 0x3D20) = (s64) ((M2C_FIELD(temp_a0_2, s64 *, 0x3D20) & ~0x40) | temp_v0);
    M2C_FIELD(temp_a0_2, s64 *, 0x11A0) = (s64) ((M2C_FIELD(temp_a0_2, s64 *, 0x11A0) & ~0x40) | temp_v0);
    M2C_FIELD(temp_a0_2, s64 *, 0x41E0) = (s64) ((M2C_FIELD(temp_a0_2, s64 *, 0x41E0) & ~0x40) | temp_v0);
    M2C_FIELD(temp_a0_2, s64 *, 0x3F80) = (s64) ((M2C_FIELD(temp_a0_2, s64 *, 0x3F80) & ~0x40) | temp_v0);
    M2C_FIELD(temp_a0_2, s64 *, 0x3360) = (s64) ((M2C_FIELD(temp_a0_2, s64 *, 0x3360) & ~0x40) | temp_v0);
    M2C_FIELD(temp_a0_2, s64 *, 0x3100) = (s64) ((M2C_FIELD(temp_a0_2, s64 *, 0x3100) & ~0x40) | temp_v0);
    M2C_FIELD(temp_a0_2, s64 *, 0x2EA0) = (s64) ((M2C_FIELD(temp_a0_2, s64 *, 0x2EA0) & ~0x40) | temp_v0);
    M2C_FIELD(temp_a0_2, s64 *, 0x24E0) = (s64) ((M2C_FIELD(temp_a0_2, s64 *, 0x24E0) & ~0x40) | temp_v0);
    M2C_FIELD(temp_a0_2, s64 *, 0x2280) = (s64) ((M2C_FIELD(temp_a0_2, s64 *, 0x2280) & ~0x40) | temp_v0);
    M2C_FIELD(temp_a0_2, s64 *, 0x2020) = (s64) ((M2C_FIELD(temp_a0_2, s64 *, 0x2020) & ~0x40) | temp_v0);
    M2C_FIELD(temp_a0_2, s64 *, 0x1660) = (s64) ((M2C_FIELD(temp_a0_2, s64 *, 0x1660) & ~0x40) | temp_v0);
    M2C_FIELD(temp_a0_2, s64 *, 0x1400) = (s64) ((M2C_FIELD(temp_a0_2, s64 *, 0x1400) & ~0x40) | temp_v0);
}
