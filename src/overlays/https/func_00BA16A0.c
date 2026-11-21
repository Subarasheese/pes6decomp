/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

void func_00BA16A0(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 8) = arg1;
    M2C_FIELD(arg0, u64 *, 0) = (u64)(((u64)(arg2) << 0x20) >> 0x20);
    M2C_FIELD(arg0, u8 *, 0x16) = (u8)(M2C_FIELD(arg0, u8 *, 0x16) | 8);
}
