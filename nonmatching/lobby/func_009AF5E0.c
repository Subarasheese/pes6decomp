/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00A7DBF0;

s32 func_009AF5E0(void) {
    if (D_00A7DBF0 != NULL) {
        return M2C_FIELD(D_00A7DBF0, s32 *, 0x130);
    }
    return 0;
}
