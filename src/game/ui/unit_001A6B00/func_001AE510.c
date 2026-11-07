/* compiler: mwcc-3.0.1b210 */
#pragma no_branch_likely on
#include "pes6/m2c.h"

void func_001ADA80(void *);
void func_001ADDE0(void *, s32);

void func_001AE510(void *arg0) {
    u8 temp_a1;

    temp_a1 = M2C_FIELD(arg0, u8 *, 1);
    if ((temp_a1 == 2) && (M2C_FIELD(arg0, s32 *, 0x10) != 0) && (M2C_FIELD(arg0, s32 *, 0x14) != 0)) {
        func_001ADDE0(arg0, temp_a1);
        func_001ADA80(arg0);
    }
}
