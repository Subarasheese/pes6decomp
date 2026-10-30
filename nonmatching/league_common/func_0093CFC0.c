/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003E77B0;

s32 func_0093CFC0(void) {
    u32 temp_v1;

    temp_v1 = M2C_FIELD(D_003E77B0, u32 *, 0x20);
    if (!(temp_v1 & 0x4000)) {
        if (!(temp_v1 & 0x2000)) {
            return 0;
        }
        return 2;
    }
    return 1;
}
