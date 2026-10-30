/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0016A1B0(s32, void *, s32 *);          /* extern */

void func_00165EC8(void *arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    s32 sp8;
    s32 temp_a0;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x568);
    if (temp_a0 != 0) {
        sp8 = 0;
        func_0016A1B0(temp_a0, arg0, &sp8);
    }
}
