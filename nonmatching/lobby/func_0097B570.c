/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00A68D90;

void func_0097B570(void) {
    if (D_00A68D90 != NULL) {
        M2C_FIELD(D_00A68D90, s8 *, 0x38) = 1;
    }
}
