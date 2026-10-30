/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00165778(s32, s32, s32);               /* extern */

void func_0017F198(void *arg0) {
    s32 temp_a1;

    temp_a1 = M2C_FIELD(arg0, s32 *, 0xA10);
    func_00165778(M2C_FIELD(arg0, s32 *, 0x984), temp_a1, temp_a1);
    func_00165778(M2C_FIELD(arg0, s32 *, 0x980), M2C_FIELD(arg0, s32 *, 0x5AC) - ((M2C_FIELD(arg0, s32 *, 0xA1C) * 2) + M2C_FIELD(arg0, s32 *, 0xA10)), M2C_FIELD(arg0, s32 *, 0x5B0));
}
