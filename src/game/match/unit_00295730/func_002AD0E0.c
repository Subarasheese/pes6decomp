/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_002AD0E0(u8 *arg0, s32 arg1, u8 arg2) {
    void *temp_a1;

    temp_a1 = (void *)((arg1 & 0xFF) + (s32)arg0);
    if (M2C_FIELD(temp_a1, u8 *, 1) != (arg2 & 0xFF)) {
        M2C_FIELD(temp_a1, u8 *, 1) = arg2;
        *arg0 &= 0xFE;
    }
}
