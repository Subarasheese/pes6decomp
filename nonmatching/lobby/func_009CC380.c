/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_00A7DDA8;

void func_009CC380(s8 arg0) {
    if (D_00A7DDA8 != NULL) {
        M2C_FIELD(D_00A7DDA8, s8 *, 5) = arg0;
    }
}
