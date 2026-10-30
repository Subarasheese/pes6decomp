/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s64 func_00171018(void *arg0) {
    u64 temp_a1;
    u64 temp_v0;

    temp_a1 = M2C_FIELD(arg0, u64 *, 8);
    temp_v0 = (s64) M2C_FIELD(arg0, s32 *, 0x28) << 0xB;
    return (s64) ((temp_a1 < temp_v0) ? temp_a1 : temp_v0) >> 0x20;
}
