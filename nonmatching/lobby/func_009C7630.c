/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00A7DD70;

void func_009C7630(void) {
    if (D_00A7DD70 != NULL) {
        M2C_FIELD(D_00A7DD70, s8 *, 1) = 1;
    }
}
