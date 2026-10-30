/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009909D0(void *arg0, u32 arg1) {
    u32 temp_v0_2;
    u32 var_v1;
    void *temp_v0;

    temp_v0 = ((M2C_FIELD(arg0, u8 *, 0x13) ^ 1) * 0xB) + arg0;
    var_v1 = M2C_FIELD(((M2C_FIELD(temp_v0, u8 *, 0x1B4) * 4) + arg0), u32 *, 0x158);
    temp_v0_2 = M2C_FIELD((arg0 + (M2C_FIELD(temp_v0, u8 *, 0x1B5) * 4)), u32 *, 0x158);
    if (temp_v0_2 < var_v1) {
        var_v1 = temp_v0_2;
    }
    return var_v1 < arg1;
}
