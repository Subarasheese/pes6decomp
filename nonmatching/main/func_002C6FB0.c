/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

s32 func_002C6FB0(void *arg0, s32 *arg1) {
    s32 a = M2C_FIELD(arg0, u8 *, 0x19) & 0x7F;
    s32 b = M2C_FIELD(arg0, u8 *, 4) & 0x7F;
    s32 c = (M2C_FIELD(arg0, u8 *, 2) & 0x7F) + 2;
    *arg1 += 0xFA;
    return ((b + 1) / 2) + c + a;
}
