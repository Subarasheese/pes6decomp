/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_0051FFB8;

void func_001857B0(void) {
    if (D_0051FFB8 != NULL) {
        if (M2C_FIELD(D_0051FFB8, s16 *, 6) >= 8) {
            M2C_FIELD(D_0051FFB8, s16 *, 6) = 7;
        }
    }
}
