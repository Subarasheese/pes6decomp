/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00177658(void *arg0) {
    s32 temp_v0;
    s32 temp_v0_2;
    s64 temp_a3;
    s64 temp_a3_2;
    s64 temp_a4;
    s64 temp_a4_2;
    s64 temp_a5;
    s64 temp_a5_2;
    s64 temp_a6;
    s64 temp_a6_2;
    s64 temp_v0_3;
    s64 temp_v0_4;
    void *temp_a2;
    void *temp_t0;

    temp_t0 = arg0 + 0x910;
    temp_a2 = (M2C_FIELD(arg0, s32 *, 0x4EC) * 0x170) + temp_t0 + 0x320;
    temp_a6 = M2C_FIELD(temp_a2, s64 *, 0xA0);
    temp_a5 = M2C_FIELD(temp_a2, s64 *, 0x70);
    temp_a4 = M2C_FIELD(temp_a2, s64 *, 0x40);
    temp_a3 = M2C_FIELD(temp_a2, s64 *, 0x10);
    if (M2C_FIELD(arg0, s32 *, 0xE88) != 0) {
        M2C_FIELD(temp_a2, s64 *, 0xA0) = (s64) (temp_a6 & ~0x3FFF);
        M2C_FIELD(temp_a2, s64 *, 0x70) = (s64) (temp_a5 & ~0x3FFF);
        temp_v0 = ((M2C_FIELD(temp_t0, s32 *, 0x568) * 0x10) - 8) & 0x3FFF;
        M2C_FIELD(temp_a2, s64 *, 0x40) = (s64) ((temp_a4 & ~0x3FFF) | temp_v0);
        M2C_FIELD(temp_a2, s64 *, 0x10) = (s64) ((temp_a3 & ~0x3FFF) | temp_v0);
    } else {
        M2C_FIELD(temp_a2, s64 *, 0x40) = (s64) (temp_a4 & ~0x3FFF);
        M2C_FIELD(temp_a2, s64 *, 0x10) = (s64) (temp_a3 & ~0x3FFF);
        temp_v0_2 = (M2C_FIELD(temp_t0, s32 *, 0x568) * 0x10) & 0x3FF0;
        M2C_FIELD(temp_a2, s64 *, 0xA0) = (s64) ((temp_a6 & ~0x3FFF) | temp_v0_2);
        M2C_FIELD(temp_a2, s64 *, 0x70) = (s64) ((temp_a5 & ~0x3FFF) | temp_v0_2);
    }
    temp_a6_2 = M2C_FIELD(temp_a2, s64 *, 0xA0);
    temp_a5_2 = M2C_FIELD(temp_a2, s64 *, 0x70);
    temp_a4_2 = M2C_FIELD(temp_a2, s64 *, 0x40);
    temp_a3_2 = M2C_FIELD(temp_a2, s64 *, 0x10);
    if (M2C_FIELD(arg0, s32 *, 0xE8C) != 0) {
        M2C_FIELD(temp_a2, s64 *, 0xA0) = (s64) (temp_a6_2 & 0xC000FFFF);
        M2C_FIELD(temp_a2, s64 *, 0x40) = (s64) (temp_a4_2 & 0xC000FFFF);
        temp_v0_3 = (((M2C_FIELD(temp_t0, s32 *, 0x56C) * 0x10) - 8) & 0x3FFF) << 0x10;
        M2C_FIELD(temp_a2, s64 *, 0x10) = (s64) ((temp_a3_2 & 0xC000FFFF) | temp_v0_3);
        M2C_FIELD(temp_a2, s64 *, 0x70) = (s64) ((temp_a5_2 & 0xC000FFFF) | temp_v0_3);
        return;
    }
    M2C_FIELD(temp_a2, s64 *, 0x70) = (s64) (temp_a5_2 & 0xC000FFFF);
    M2C_FIELD(temp_a2, s64 *, 0x10) = (s64) (temp_a3_2 & 0xC000FFFF);
    temp_v0_4 = ((M2C_FIELD(temp_t0, s32 *, 0x56C) * 0x10) & 0x3FF0) << 0x10;
    M2C_FIELD(temp_a2, s64 *, 0x40) = (s64) ((temp_a4_2 & 0xC000FFFF) | temp_v0_4);
    M2C_FIELD(temp_a2, s64 *, 0xA0) = (s64) ((temp_a6_2 & 0xC000FFFF) | temp_v0_4);
}
