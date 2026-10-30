/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0012FD60(void *arg0, void *arg1) {
    s32 sp4;
    s32 sp8;
    s32 spC;

    spC = M2C_FIELD(arg1, u16 *, 0) | (M2C_FIELD(arg1, u16 *, 2) << 0x10);
    M2C_FIELD(arg0, s32 *, 0x10) = spC;
    sp8 = M2C_FIELD(arg1, u16 *, 4) | (M2C_FIELD(arg1, u16 *, 6) << 0x10);
    M2C_FIELD(arg0, s32 *, 0x14) = sp8;
    sp4 = M2C_FIELD(arg1, u16 *, 8) | (M2C_FIELD(arg1, u16 *, 0xA) << 0x10);
    M2C_FIELD(arg0, s32 *, 0x18) = sp4;
    return arg1 + 0xC;
}
