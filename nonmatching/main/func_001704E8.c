/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001C48E8(s32, M2C_UNK, s64, s32);      /* extern */

void func_001704E8(void *arg0) {
    s32 temp_a0;
    s32 temp_a3;
    s64 temp_v0_2;
    u64 temp_v0;
    u64 temp_v1;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x24);
    temp_v1 = M2C_FIELD(arg0, u64 *, 8);
    temp_a3 = temp_a0 << 0xB;
    temp_v0 = (M2C_FIELD(arg0, s32 *, 0x1C) + temp_a0) << 0xB;
    temp_v0_2 = (s64) ((temp_v0 - temp_v1) << 0x20) >> 0x20;
    if (temp_v1 < temp_v0) {
        func_001C48E8((M2C_FIELD(arg0, s32 *, 0x20) + temp_a3) - temp_v0_2, 0, temp_v0_2, temp_a3);
    }
}
