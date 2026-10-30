/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void *func_0018A100(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 4) = (s32) ((M2C_FIELD(arg0, s32 *, 4) & 0xF3FFFFFF) | (arg1 << 0x1A));
    return arg0;
}
