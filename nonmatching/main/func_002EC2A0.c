/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_002EC2A0(void *arg0, s32 arg1) {
    M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x1940) * 0x18) + arg0), s32 *, 0x191C) = arg1;
}
