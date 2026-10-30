/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_001974E0(s32 arg0) {
    u32 temp_a0;

    temp_a0 = arg0 & 0xFF;
    return (((temp_a0 / 10U) * 6) + temp_a0) & 0xFF;
}
