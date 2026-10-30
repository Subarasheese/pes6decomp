/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00135018(s32);                         /* extern */
M2C_UNK func_0016A158(s32, M2C_UNK);                /* extern */

void func_0016D0B0(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;

    func_0016A158(arg0 + 0x980, 1);
    temp_a0 = M2C_FIELD(arg0, s32 *, 0x924);
    if (temp_a0 != 0) {
        func_00135018(temp_a0);
    }
    temp_a0_2 = M2C_FIELD(arg0, s32 *, 0x928);
    if (temp_a0_2 != 0) {
        func_00135018(temp_a0_2);
    }
}
