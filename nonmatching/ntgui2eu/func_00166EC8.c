/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00166EC8(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x4DC) = arg1;
    M2C_FIELD(arg0, s32 *, 0x98) = 2;
    M2C_FIELD(arg0, s32 *, 0x4E0) = arg2;
}
