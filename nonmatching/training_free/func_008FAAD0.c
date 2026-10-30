/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EA6C0;

u8 func_008FAAD0(void) {
    if (D_003EA6C0 != NULL) {
        return M2C_FIELD(D_003EA6C0, u8 *, 0x17C);
    }
    return 1U;
}
