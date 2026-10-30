/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00A7DF00;

void func_009E2CD0(void) {
    if (D_00A7DF00 != NULL) {
        M2C_FIELD(D_00A7DF00, s8 *, 9) = 1;
    }
}
