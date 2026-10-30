/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EAD44;

u16 func_00AEECE0(void) {
    if (D_003EAD44 != NULL) {
        return M2C_FIELD(D_003EAD44, u16 *, 0x210A);
    }
    return 0xFFFFU;
}
