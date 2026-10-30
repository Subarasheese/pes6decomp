/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008740E0(void *arg0, s8 *arg1) {
    s32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, s32 *, 0x454);
    if (temp_v0 < 0x400) {
        *arg1 = M2C_FIELD((temp_v0 + arg0), s8 *, 0x40);
        M2C_FIELD(arg0, s32 *, 0x454) = (s32) (M2C_FIELD(arg0, s32 *, 0x454) + 1);
        return 0;
    }
    return -0x1F5;
}
