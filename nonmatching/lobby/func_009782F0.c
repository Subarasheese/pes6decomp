/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00A68D58;

void func_009782F0(void) {
    if (D_00A68D58 != NULL) {
        M2C_FIELD(D_00A68D58, s8 *, 1) = 1;
    }
}
