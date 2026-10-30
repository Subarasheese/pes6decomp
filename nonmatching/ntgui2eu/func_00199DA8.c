/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00199DA8(void **arg0, s64 arg1, s64 arg2) {
    void *temp_v0;

    temp_v0 = *arg0;
    M2C_FIELD(temp_v0, s64 *, 0) = arg2;
    M2C_FIELD(temp_v0, u64 *, 8) = (u64) ((u64) (arg1 << 0x20) >> 0x20);
    *arg0 = temp_v0 + 8 + 8;
}
