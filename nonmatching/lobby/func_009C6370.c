/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00A7DD60;

void func_009C6370(void) {
    if ((D_00A7DD60 != NULL) && (M2C_FIELD(D_00A7DD60, u8 *, 0x31) == 1)) {
        M2C_FIELD(D_00A7DD60, u8 *, 0x31) = 2U;
    }
}
