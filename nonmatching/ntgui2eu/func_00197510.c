/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00197510(s32 arg0) {
    u32 temp_v0;

    temp_v0 = arg0 & 0xFF;
    return (temp_v0 - ((temp_v0 >> 4) * 6)) & 0xFF;
}
