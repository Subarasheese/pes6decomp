/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00CCD960;

u8 func_00C949B0(void) {
    return M2C_FIELD(D_00CCD960, u8 *, 4);
}
