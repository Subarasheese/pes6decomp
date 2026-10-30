/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00165C78(void *arg0, s32 *arg1, s32 *arg2) {
    *arg2 = M2C_FIELD(arg0, s32 *, 0x5E4);
    *arg1 = M2C_FIELD(arg0, s32 *, 0x5E0);
}
