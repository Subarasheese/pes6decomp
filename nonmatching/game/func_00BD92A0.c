/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00BD92A0(void **arg0, s32 arg1, s32 arg2) {
    void *temp_a0;

    if (arg2 >= 0xC) {
        return 0;
    }
    temp_a0 = *arg0;
    return (u32) M2C_FIELD(((M2C_FIELD((arg2 + (((M2C_FIELD(temp_a0, u8 *, 0x13) ^ 1) * 0xB) + temp_a0)), u8 *, 0x1B3) * 4) + temp_a0), u32 *, 0x158) < (u32) (arg1 * arg1);
}
