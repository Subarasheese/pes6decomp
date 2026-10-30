/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00135018(s32);                         /* extern */
s32 func_001896B8(s32);                             /* extern */
s32 func_001B016C(s32, s32);                        /* extern */

void func_0016D470(void *arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_a0_2;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x924);
    if (temp_a0 == 0) {
        if (arg1 != 0) {
            goto block_7;
        }
    } else if ((arg1 == 0) || (func_001B016C(temp_a0, arg1) != 0)) {
        temp_a0_2 = M2C_FIELD(arg0, s32 *, 0x924);
        if (temp_a0_2 != 0) {
            func_00135018(temp_a0_2);
        }
block_7:
        if (arg1 == 0) {
            M2C_FIELD(arg0, s32 *, 0x924) = 0;
        } else {
            M2C_FIELD(arg0, s32 *, 0x924) = func_001896B8(arg1);
        }
        M2C_FIELD(arg0, s32 *, 0x98) = 2;
    }
}
