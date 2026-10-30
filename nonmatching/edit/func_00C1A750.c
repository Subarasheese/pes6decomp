/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00C1A750(void *arg0, s32 arg1) {
    s32 temp_a2;
    s32 temp_v1;

    temp_v1 = M2C_FIELD(arg0, s32 *, 0x2EC);
    temp_a2 = M2C_FIELD(arg0, s32 *, 0x2E8);
    if (temp_a2 >= temp_v1) {
        if (((temp_v1 + arg1) - 1) < temp_a2) {
            M2C_FIELD(arg0, s32 *, 0x2EC) = (s32) (temp_a2 - (arg1 - 1));
        }
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x2EC) = temp_a2;
}
