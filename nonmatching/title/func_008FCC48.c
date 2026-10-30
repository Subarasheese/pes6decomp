/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008FC4A8(void *, s32, s32, s32);       /* extern */
M2C_UNK func_008FC768(void *, s32, s32, s32);       /* extern */

void func_008FCC48(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_v0;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_a2;

    if (arg2 != 0) {
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x160);
        if (M2C_FIELD(arg0, s32 *, 0x184) == 3) {
            if (temp_v0 != 3) {
                var_a1 = M2C_FIELD(arg0, s32 *, 0x1C8);
            } else {
                var_a1 = M2C_FIELD(arg0, s32 *, 0x1D4);
            }
            func_008FC4A8(arg0, var_a1, arg1 - 1, arg1);
        } else {
            if (temp_v0 != 3) {
                var_a1_2 = M2C_FIELD(arg0, s32 *, 0x1D8);
                var_a2 = M2C_FIELD(arg0, s32 *, 0x1E8);
            } else {
                var_a1_2 = M2C_FIELD(arg0, s32 *, 0x1E4);
                var_a2 = M2C_FIELD(arg0, s32 *, 0x1F4);
            }
            func_008FC768(arg0, var_a1_2, var_a2, arg1 - 1);
        }
    }
    if (M2C_FIELD(arg0, s32 *, 0x108) == 1) {
        M2C_FIELD(arg0, s32 *, 0x108) = 2;
    }
}
