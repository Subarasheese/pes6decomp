/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002C6DE0(void *arg0, s32 *arg1) {
    *arg1 += 0x37;
    return (((M2C_FIELD(arg0, u8 *, 0x1E) & 1) + ((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x15) << 0x38) >> 0x3F)) * 0xF) + (((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x14) << 0x38) >> 0x3F) * 0x19);
}
