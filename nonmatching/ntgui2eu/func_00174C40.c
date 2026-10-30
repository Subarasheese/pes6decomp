/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0018CB28(void);
M2C_UNK func_0018C748(void *, s32, M2C_UNK);        /* extern */
extern M2C_UNK (*D_005C1450)();

void func_00174C40(void *arg0) {
    s32 temp_a1;
    s64 temp_a0;
    void *temp_v1;
    void *temp_v1_2;
    void *temp_v1_3;
    void *temp_v1_4;

    D_005C1450();
    temp_a1 = (((-0x4000 << 0x10) | 0xFFFF) << 0x10) | 0xFFFF;
    temp_a0 = (!(func_0018CB28() & 1) ? 0 : 0x1800) << 0x20;
    temp_v1 = ((M2C_FIELD(arg0, s32 *, 0x4EC) ^ 1) * 0x210) + arg0;
    M2C_FIELD(temp_v1, s64 *, 0x930) = (s64) ((M2C_FIELD(temp_v1, s64 *, 0x930) & temp_a1) | temp_a0);
    temp_v1_2 = ((M2C_FIELD(arg0, s32 *, 0x4EC) ^ 1) * 0x210) + arg0;
    M2C_FIELD(temp_v1_2, s64 *, 0x9B0) = (s64) ((M2C_FIELD(temp_v1_2, s64 *, 0x9B0) & temp_a1) | temp_a0);
    temp_v1_3 = ((M2C_FIELD(arg0, s32 *, 0x4EC) ^ 1) * 0x210) + arg0;
    M2C_FIELD(temp_v1_3, s64 *, 0xA30) = (s64) ((M2C_FIELD(temp_v1_3, s64 *, 0xA30) & temp_a1) | temp_a0);
    temp_v1_4 = ((M2C_FIELD(arg0, s32 *, 0x4EC) ^ 1) * 0x210) + arg0;
    M2C_FIELD(temp_v1_4, s64 *, 0xAB0) = (s64) ((M2C_FIELD(temp_v1_4, s64 *, 0xAB0) & temp_a1) | temp_a0);
    func_0018C748(arg0 + (((M2C_FIELD(arg0, s32 *, 0x4EC) ^ 1) * 0x210) + 0x910), temp_a1, 0x210);
}
