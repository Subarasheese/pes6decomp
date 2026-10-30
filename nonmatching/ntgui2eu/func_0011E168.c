/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0011E168(void *arg0) {
    s32 temp_v0;

    temp_v0 = (M2C_FIELD(arg0, s32 *, 0x10) & 7) * 8;
    return (temp_v0 == 0) ? 4 : temp_v0;
}
