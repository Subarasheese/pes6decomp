/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00602580;

f32 func_00100000(void) {
    return 26.0f / (f32) M2C_FIELD(D_00602580, s16 *, 0x1C);
}
