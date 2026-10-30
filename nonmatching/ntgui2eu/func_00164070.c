/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00164070(void *arg0, s32 arg1, s32 arg2, s32 *arg3, s32 *arg4) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), M2C_UNK (**)(s32 *, s32 *), 0x9C)(arg3, arg4);
    *arg3 = arg1 - *arg3;
    *arg4 = arg2 - *arg4;
}
