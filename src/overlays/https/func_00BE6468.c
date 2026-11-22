/* compiler: ee-gcc-2.96-G0 */
#include "pes6/m2c.h"

void func_00BE6468(void *arg0, void *arg1, s32 *arg2) {
    void *temp_a0;

    temp_a0 = arg0 + 0x14;
    M2C_FIELD(arg1, s32 *, 4) = (s32)M2C_FIELD(temp_a0, s32 *, 0xC);
    M2C_FIELD(arg1, s32 *, 0) = (s32)M2C_FIELD(temp_a0, s32 *, 8);
    *arg2 = M2C_FIELD(arg0, s32 *, 0x14);
}
