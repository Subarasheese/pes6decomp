/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00BC9B20(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, u8 *, 0x61) = (u8) ((M2C_FIELD(arg0, u8 *, 0x61) & ~0xF0) | ((arg1 & 0xF) * 0x10));
    M2C_FIELD(arg0, u8 *, 0x63) = (u8) ((M2C_FIELD(arg0, u8 *, 0x63) & ~0x60) | ((arg2 & 3) << 5));
}
