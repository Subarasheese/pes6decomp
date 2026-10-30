/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00A7E020;

void func_009F2420(void) {
    if (D_00A7E020 != NULL) {
        M2C_FIELD(D_00A7E020, s8 *, 6) = 1;
    }
}
