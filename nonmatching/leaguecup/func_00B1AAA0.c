/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EAD7C;

s32 func_00B1AAA0(void) {
    if (D_003EAD7C != NULL) {
        return (u32) (M2C_FIELD(((M2C_FIELD(D_003EAD7C, s32 *, 0x5C) * 4) + D_003EAD7C), s32 *, 0x60) - 2) < 2U;
    }
    return 0;
}
