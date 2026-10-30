/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00166F90(void *arg0, s32 *arg1, s32 *arg2) {
    *arg1 = M2C_FIELD(arg0, s32 *, 0x5AC) + (M2C_FIELD(arg0, s32 *, 0x5D4) * 2);
    *arg2 = M2C_FIELD(arg0, s32 *, 0x5B0) + (M2C_FIELD(arg0, s32 *, 0x5D4) * 2);
}
