/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_001AD208(u32 *arg0, void *arg1) {
    s32 temp_v0;
    u32 temp_v1;

    temp_v1 = *arg0;
    temp_v0 = (temp_v1 >> 0x17) & 0xFF;
    M2C_FIELD(arg1, u32 *, 4) = (u32) (temp_v1 >> 0x1F);
    if (temp_v0 == 0) {
        M2C_FIELD(arg1, s32 *, 0) = 2;
        return;
    }
    M2C_FIELD(arg1, s32 *, 8) = (s32) (temp_v0 - 0x7F);
    M2C_FIELD(arg1, s32 *, 0) = 3;
    M2C_FIELD(arg1, s32 *, 0xC) = (s32) (((temp_v1 & 0x7FFFFF) << 7) | 0x40000000);
}
