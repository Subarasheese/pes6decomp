/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s64 func_0018AB40(s32, s64);                        /* extern */

s32 func_00189820(void *arg0, s32 arg1, s32 arg2) {
    return arg1 + ((s64) (func_0018AB40(arg2 - arg1, M2C_FIELD(arg0, s64 *, 0x18)) << 0x10) >> 0x20);
}
