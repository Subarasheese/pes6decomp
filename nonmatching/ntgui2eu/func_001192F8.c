/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_006024F0;

void func_001192F8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(D_006024F0, s32 *, 0xC0) = arg0;
    M2C_FIELD(D_006024F0, s32 *, 0xC4) = arg1;
    M2C_FIELD(D_006024F0, s32 *, 0xC8) = arg2;
    M2C_FIELD(D_006024F0, s32 *, 0xCC) = arg3;
}
