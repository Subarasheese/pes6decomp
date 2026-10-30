/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001656D0(s32, s32, s32, s32);          /* extern */

void func_00170528(void *arg0) {
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_v0;
    u32 temp_a2;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x5D4);
    temp_a3 = M2C_FIELD(arg0, s32 *, 0x880);
    func_001656D0(M2C_FIELD(arg0, s32 *, 0x890), (M2C_FIELD(arg0, s32 *, 0x5A0) + temp_v0) - temp_a3, (M2C_FIELD(arg0, s32 *, 0x5A4) + temp_v0) - M2C_FIELD(arg0, s32 *, 0x888), temp_a3);
    temp_a3_2 = M2C_FIELD(arg0, s32 *, 0x5D4);
    temp_a2 = M2C_FIELD(arg0, s32 *, 0x930) * 3;
    func_001656D0(M2C_FIELD(arg0, s32 *, 0x894), M2C_FIELD(arg0, s32 *, 0x5A0) + temp_a3_2, (M2C_FIELD(arg0, s32 *, 0x5A4) + temp_a3_2) - ((s32) (temp_a2 + (temp_a2 >> 0x1F)) >> 1), temp_a3_2);
}
