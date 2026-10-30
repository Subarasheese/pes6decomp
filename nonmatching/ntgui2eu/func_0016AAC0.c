/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_0016AAC0(M2C_UNK arg0, void *arg1, s64 arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(arg1, s32 *, 0x18) = arg4;
    M2C_FIELD(arg1, s16 *, 0) = 0x12;
    M2C_FIELD(arg1, s64 *, 8) = arg2;
    M2C_FIELD(arg1, s32 *, 0x14) = arg3;
}
