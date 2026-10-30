/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00A7DC30;

void func_009BAC20(void) {
    if (D_00A7DC30 != NULL) {
        M2C_FIELD(D_00A7DC30, s8 *, 1) = 1;
    }
}
