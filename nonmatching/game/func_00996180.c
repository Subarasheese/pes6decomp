/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003E7A08;

s32 func_00996180(void) {
    return M2C_FIELD(D_003E7A08, u8 *, 0x28D) & 1;
}
