/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00165CE0(s32, void *);                 /* extern */
M2C_UNK func_001677E8();                            /* extern */

void func_00166FC0(void *arg0, s32 arg1) {
    s32 temp_a0;

    M2C_FIELD(arg0, s32 *, 0x5D4) = arg1;
    func_001677E8();
    temp_a0 = M2C_FIELD(arg0, s32 *, 0x50);
    if (temp_a0 != 0) {
        func_00165CE0(temp_a0, arg0);
    }
}
