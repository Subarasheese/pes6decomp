/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00167F40(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x980) = arg1;
    M2C_FIELD(arg0, s32 *, 0x990) = 1;
}
