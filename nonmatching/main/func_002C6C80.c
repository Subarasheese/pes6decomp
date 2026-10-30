/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002C6C80(void *arg0, s32 *arg1) {
    *arg1 += 0x14;
    return ((((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x16) << 0x38) >> 0x3F) + ((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x17) << 0x38) >> 0x3F)) * 5) + (((u64) ((s64) M2C_FIELD(arg0, u8 *, 0x21) << 0x3A) >> 0x3F) * 0xA);
}
