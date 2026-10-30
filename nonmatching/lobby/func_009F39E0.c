/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00A7E240;

void func_009F39E0(void) {
    if (D_00A7E240 != NULL) {
        M2C_FIELD(D_00A7E240, s8 *, 2) = 1;
    }
}
