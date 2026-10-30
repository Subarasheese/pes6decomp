/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00134FE8(s32);                             /* extern */
M2C_UNK func_00135018(s32);                         /* extern */
M2C_UNK func_00171928(void *, s32);                 /* extern */

void func_00173020(void *arg0) {
    s32 temp_a0;
    s32 temp_v0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0xC9C);
    if (temp_a0 != 0) {
        func_00135018(temp_a0);
    }
    temp_v0 = func_00134FE8(((u32) (M2C_FIELD(arg0, s32 *, 0xCA0) + 0x13) >> 4) * 0x10);
    M2C_FIELD(arg0, s32 *, 0xC9C) = temp_v0;
    func_00171928(arg0, temp_v0);
}
