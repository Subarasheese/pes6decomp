/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001730D8(void *, s32, s32, s32, s32);
s32 func_001B0444(s32);                             /* extern */

s32 func_00172EE8(void *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    u32 temp_v1;

    if ((arg1 == 0) || (temp_v0 = func_001B0444(arg1), temp_v1 = M2C_FIELD(arg0, u32 *, 0xCA0), temp_v0_2 = M2C_FIELD(arg0, s32 *, 0xBF0), ((((temp_v1 >= (u32) (temp_v0_2 + temp_v0)) ? temp_v0 : (temp_v1 - temp_v0_2)) < temp_v0) != 0))) {
        return 0;
    }
    return (func_001730D8(arg0, M2C_FIELD(arg0, s32 *, 0xB8C), arg1, temp_v0, 0) == 0) ? 0 : temp_v0;
}
