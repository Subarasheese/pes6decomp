/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00A7E248;

void func_009F3C90(void) {
    if (D_00A7E248 != NULL) {
        M2C_FIELD(D_00A7E248, s8 *, 1) = 0;
        M2C_FIELD(D_00A7E248, s8 *, 0) = 0;
    }
}
