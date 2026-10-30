/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00874540(s32);                             /* extern */

s32 func_0085F2A0(void *arg0, void *arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg1, s32 *, 0x18) + 1;
    M2C_FIELD(arg1, s32 *, 0x18) = temp_v0;
    M2C_FIELD(arg0, s32 *, 8) = temp_v0;
    return (func_00874540(M2C_FIELD(arg1, s32 *, 0)) == 0) ? 0 : -0x3D;
}
