/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EA3C8;

void func_00803010(void) {
    if (D_003EA3C8 != NULL) {
        M2C_FIELD(D_003EA3C8, s32 *, 4) = 1;
    }
}
