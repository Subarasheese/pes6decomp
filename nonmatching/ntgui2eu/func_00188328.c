/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00188328(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0xC74) = arg1;
    M2C_FIELD(arg0, s32 *, 0x98) = 2;
}
