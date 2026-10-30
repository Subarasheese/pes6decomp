/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EAD68;

u16 func_00B0C770(void) {
    if (D_003EAD68 != NULL) {
        return M2C_FIELD(D_003EAD68, u16 *, 0x13C2);
    }
    return 0xFFFFU;
}
