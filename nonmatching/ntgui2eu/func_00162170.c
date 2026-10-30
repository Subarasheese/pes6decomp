/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00165778(s32, s32, s32);               /* extern */

void func_00162170(void *arg0) {
    s32 temp_s0;
    s32 temp_s1;

    if (M2C_FIELD(arg0, s32 *, 0x854) != 0) {
        temp_s0 = M2C_FIELD(arg0, s32 *, 0x5AC) - 0x60;
        temp_s1 = M2C_FIELD(arg0, s32 *, 0x5B0) - 0x60;
        func_00165778(M2C_FIELD(arg0, s32 *, 0x8A0), temp_s0, temp_s1);
        func_00165778(M2C_FIELD(arg0, s32 *, 0x8A4), temp_s0, temp_s1);
    }
}
