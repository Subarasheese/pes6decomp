/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_001760D8(void *arg0) {
    void *temp_a4;

    temp_a4 = arg0 + 0x910;
    M2C_FIELD(((M2C_FIELD(arg0, s32 *, 0x4EC) * 0x1D0) + temp_a4), s8 *, 0x143) = (s8) ((s32) (M2C_FIELD(arg0, s32 *, 0x618) * M2C_FIELD(temp_a4, s32 *, 0x424)) / 255);
}
