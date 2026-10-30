/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00175120(void *arg0) {
    s32 temp_a1;
    s32 temp_v1;
    s32 var_a6;
    s32 var_a7;
    s64 temp_v0;
    s64 temp_v1_2;
    void *temp_a0;
    void *temp_t1;

    var_a6 = 0;
    temp_t1 = arg0 + 0x910;
    temp_v1 = M2C_FIELD(temp_t1, s32 *, 0x428);
    var_a7 = 0;
    do {
        temp_a1 = var_a6 << 7;
        var_a6 += 1;
        temp_a0 = (M2C_FIELD(arg0, s32 *, 0x4EC) * 0x210) + temp_t1 + temp_a1;
        temp_v1_2 = (M2C_FIELD(temp_a0, s64 *, 0x40) & ((((-0x800 << 0x10) | 0xFFFF) << 0x10) | 0xFFFF)) | ((((s32) M2C_FIELD(arg0, s32 *, 0x5A0) >> 4) & 0x7FF) << 0x20);
        M2C_FIELD(temp_a0, s64 *, 0x40) = temp_v1_2;
        temp_v0 = ((((s32) M2C_FIELD(arg0, s32 *, 0x5A4) >> 4) & 0xFFFF) + var_a7) & 0x7FF;
        var_a7 += (s32) ((temp_v1 > -1) ? temp_v1 : (temp_v1 + 3)) >> 2;
        M2C_FIELD(temp_a0, s64 *, 0x40) = (s64) ((temp_v1_2 & ((((0xF800FFFF << 0x10) | 0xFFFF) << 0x10) | 0xFFFF)) | (temp_v0 << 0x30));
    } while (var_a6 < 4);
}
