/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003E7B0C;

void func_0094C750(s8 arg0) {
    if (D_003E7B0C != NULL) {
        M2C_FIELD(D_003E7B0C, s8 *, 1) = arg0;
    }
}
