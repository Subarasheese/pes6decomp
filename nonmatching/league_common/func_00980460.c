/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EA970;

void func_00980460(s8 arg0) {
    if (D_003EA970 != NULL) {
        M2C_FIELD(D_003EA970, s8 *, 5) = arg0;
    }
}
