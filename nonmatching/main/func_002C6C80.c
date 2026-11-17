/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

s32 func_002C6C80(void *arg0, s32 *arg1) {
    u8 b21 = M2C_FIELD(arg0, u8 *, 0x21);
    u8 b16 = M2C_FIELD(arg0, u8 *, 0x16);
    u8 b17 = M2C_FIELD(arg0, u8 *, 0x17);
    *arg1 += 0x14;
    return ((b16 >> 7) + (b17 >> 7)) * 5 + ((b21 >> 5) & 1) * 10;
}
