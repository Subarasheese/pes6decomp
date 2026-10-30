/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00A7DED0;

s32 func_009DE750(void) {
    if (D_00A7DED0 != NULL) {
        return M2C_FIELD(D_00A7DED0, s32 *, 0x1C);
    }
    return 0;
}
