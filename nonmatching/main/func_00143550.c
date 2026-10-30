/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_004FDF08[];

void *func_00143550(void *arg0) {
    M2C_FIELD(arg0, s64 *, 0) = 0x10000002;
    M2C_FIELD(arg0, s32 *, 8) = 0x11000000;
    M2C_FIELD(arg0, s32 *, 0xC) = 0x50000002;
    M2C_FIELD(arg0, s64 *, 0x10) = (s64) (0x8001 | (0x10000000 << 0x20));
    M2C_FIELD(arg0, s64 *, 0x18) = 0xE;
    M2C_FIELD(arg0, s64 *, 0x28) = 0x3D;
    M2C_FIELD(arg0, s64 *, 0x20) = (s64) (*(u32 *)D_004FDF08);
    return arg0 + 0x30;
}
