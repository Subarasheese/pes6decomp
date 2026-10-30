/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00A68D78;

void func_00979D50(void) {
    if (D_00A68D78 != NULL) {
        M2C_FIELD(D_00A68D78, s8 *, 4) = 1;
    }
}
