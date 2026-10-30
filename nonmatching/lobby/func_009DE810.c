/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00A7DED0;

f32 func_009DE810(void) {
    if (D_00A7DED0 != NULL) {
        return M2C_FIELD(D_00A7DED0, f32 *, 0x18);
    }
    return 0.0f;
}
