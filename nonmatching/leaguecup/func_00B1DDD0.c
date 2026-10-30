/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EAD88;

s32 func_00B1DDD0(void) {
    if (D_003EAD88 != NULL) {
        return M2C_FIELD(D_003EAD88, s32 *, 0xA8) == 0;
    }
    return 0;
}
