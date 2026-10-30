/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001656D0(s32, s32, s32);               /* extern */
M2C_UNK func_0017F880(s32, s32, s32);               /* extern */

void func_00172620(void *arg0) {
    s32 temp_a1;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_v0;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x8D4);
    temp_a1 = M2C_FIELD(arg0, s32 *, 0xCF4);
    temp_v0 = temp_v1 + M2C_FIELD(arg0, s32 *, 0x5D4);
    temp_s1 = M2C_FIELD(arg0, s32 *, 0x5A0) + M2C_FIELD(arg0, s32 *, 0xB84) + temp_v0 + M2C_FIELD(arg0, s32 *, 0xCF0);
    temp_s2 = M2C_FIELD(arg0, s32 *, 0x5A4) + temp_a1 + temp_v0;
    temp_s3 = M2C_FIELD(arg0, s32 *, 0x5B0) - ((temp_v1 + temp_a1) * 2);
    func_001656D0(M2C_FIELD(arg0, s32 *, 0x914), temp_s1, temp_s2);
    func_0017F880(M2C_FIELD(arg0, s32 *, 0x914), temp_s1, temp_s2 + temp_s3);
}
