/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00A7DF00;

s32 func_009E2C90(void) {
    if (D_00A7DF00 != NULL) {
        return M2C_FIELD(D_00A7DF00, u8 *, 5) == 0;
    }
    return 0;
}
