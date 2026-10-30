/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00140FE0(s32, s32);                    /* extern */
M2C_UNK func_00153FA0(s32);                         /* extern */

void func_0017BE40(void *arg0, s32 arg1) {
    s32 temp_a1;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, s32 *, 0x14) + (arg1 * 8);
    temp_a1 = M2C_FIELD(temp_s0, s32 *, 4);
    if (temp_a1 != 0) {
        func_00140FE0(M2C_FIELD(temp_s0, s32 *, 0), temp_a1);
        func_00153FA0(M2C_FIELD(temp_s0, s32 *, 4));
        M2C_FIELD(temp_s0, s32 *, 4) = 0;
    }
}
