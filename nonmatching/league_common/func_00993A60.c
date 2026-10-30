/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EA980;

s32 func_00993A60(void) {
    if (D_003EA980 != NULL) {
        return M2C_FIELD(D_003EA980, s32 *, 0x258);
    }
    return 3;
}
