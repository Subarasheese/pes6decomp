/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00172CD0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(arg0, s32 *, 0xC5C) = arg1;
    M2C_FIELD(arg0, s32 *, 0x98) = 2;
    M2C_FIELD(arg0, s32 *, 0xC60) = arg2;
    M2C_FIELD(arg0, s32 *, 0xC64) = arg3;
    M2C_FIELD(arg0, s32 *, 0xC68) = arg4;
}
