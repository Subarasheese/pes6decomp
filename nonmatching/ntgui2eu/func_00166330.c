/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00166330(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x618) = arg1;
    M2C_FIELD(arg0, s32 *, 0x98) = 2;
}
