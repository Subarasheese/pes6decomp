/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00BD3BA0(void *arg0, s32 arg1, s32 arg2) {
    s32 *temp_a0;
    s32 *temp_a1;
    s32 temp_a3;

    temp_a3 = 1 << arg1;
    if (arg2 != 0) {
        temp_a0 = M2C_FIELD(arg0, s32 **, 4);
        *temp_a0 |= temp_a3;
        return;
    }
    temp_a1 = M2C_FIELD(arg0, s32 **, 4);
    *temp_a1 &= ~temp_a3;
}
