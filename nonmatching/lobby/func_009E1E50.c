/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00A7DEF8;

f32 func_009E1E50(void) {
    if (D_00A7DEF8 != NULL) {
        return M2C_FIELD(D_00A7DEF8, f32 *, 0x34);
    }
    return 0.0f;
}
