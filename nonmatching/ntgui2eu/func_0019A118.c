/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_0019A118(void **arg0, s64 arg1) {
    void *temp_v0;

    temp_v0 = *arg0;
    M2C_FIELD(temp_v0, s32 *, 0) = (s32) ((s64) (arg1 << 0x20) >> 0x20);
    M2C_FIELD(temp_v0, s32 *, 4) = (s32) (arg1 >> 0x20);
    *arg0 = temp_v0 + 4 + 4;
}
