/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00167EE8(void *arg0, void *arg1) {
    M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 0x5A0) + M2C_FIELD(arg0, s32 *, 0x5D4) + M2C_FIELD(arg0, s32 *, 0x998));
    M2C_FIELD(arg1, s32 *, 0) = 4;
    M2C_FIELD(arg1, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 0x5A4) + M2C_FIELD(arg0, s32 *, 0x5D4) + M2C_FIELD(arg0, s32 *, 0x99C));
}
