/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00A7DEE8;

u8 func_009E07E0(void) {
    if (D_00A7DEE8 != NULL) {
        return M2C_FIELD(D_00A7DEE8, u8 *, 0x38);
    }
    return 0U;
}
