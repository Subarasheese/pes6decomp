/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003E9F24;

s32 func_003333F0(s32 arg0) {
    if (D_003E9F24 != NULL) {
        return ((u64) ((s64) M2C_FIELD(D_003E9F24, s32 *, 8) << 0x29) >> 0x33) == arg0;
    }
    return 0x1DDD;
}
