/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00A68D88;

void func_0097AC10(void) {
    if (D_00A68D88 != NULL) {
        M2C_FIELD(D_00A68D88, s8 *, 2) = 1;
    }
}
