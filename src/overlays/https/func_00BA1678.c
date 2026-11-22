/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

void func_00BA1678(void *arg0, s32 arg1) {
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 0x16);
    if (!(temp_v1 & 4)) {
        M2C_FIELD(arg0, u8 *, 0x16) = (u8)(temp_v1 | 4);
        M2C_FIELD(arg0, s64 *, 0) = (s64)(M2C_FIELD(arg0, s64 *, 0) + 1);
    }
    M2C_FIELD(arg0, s8 *, 0x17) = (s8)arg1;
}
