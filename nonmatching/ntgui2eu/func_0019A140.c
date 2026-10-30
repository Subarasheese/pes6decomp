/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_0019A140(void **arg0, s32 arg1, s64 arg2) {
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = *arg0;
    M2C_FIELD(temp_v0, s32 *, 0) = (s32) ((s64) (arg2 << 0x20) >> 0x20);
    temp_v0_2 = temp_v0 + 4;
    M2C_FIELD(temp_v0, s32 *, 4) = (s32) (arg2 >> 0x20);
    *arg0 = temp_v0_2 + 0xC;
    M2C_FIELD(temp_v0_2, s32 *, 4) = arg1;
    M2C_FIELD(temp_v0_2, s32 *, 8) = 0;
}
