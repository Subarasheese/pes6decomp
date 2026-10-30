/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001656D0(s32, s32, s32);               /* extern */

void func_00189380(void *arg0) {
    s32 temp_a1;
    s32 temp_s1;

    temp_a1 = M2C_FIELD(arg0, s32 *, 0x5D4);
    temp_s1 = M2C_FIELD(arg0, s32 *, 0x5A0) + temp_a1 + M2C_FIELD(arg0, s32 *, 0xA1C);
    func_001656D0(M2C_FIELD(arg0, s32 *, 0x984), temp_s1, M2C_FIELD(arg0, s32 *, 0x5A4) + temp_a1 + ((s32) (M2C_FIELD(arg0, s32 *, 0x5B0) - M2C_FIELD(arg0, s32 *, 0xA10)) >> 1));
    func_001656D0(M2C_FIELD(arg0, s32 *, 0x980), temp_s1 + (M2C_FIELD(arg0, s32 *, 0xA10) + M2C_FIELD(arg0, s32 *, 0xA1C)), M2C_FIELD(arg0, s32 *, 0x5A4) + M2C_FIELD(arg0, s32 *, 0x5D4));
}
