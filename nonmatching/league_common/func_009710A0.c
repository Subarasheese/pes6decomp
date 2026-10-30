/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003EA94C;

void func_009710A0(s8 arg0) {
    if (D_003EA94C != NULL) {
        M2C_FIELD(D_003EA94C, s8 *, 0x406) = arg0;
    }
}
