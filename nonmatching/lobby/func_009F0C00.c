/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00A7E018;

s32 func_009F0C00(void) {
    return M2C_FIELD(D_00A7E018, u8 *, 1) != 0;
}
