/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *D_003E77AC;

void func_0094C790(s32 arg0) {
    if (D_003E77AC != NULL) {
        M2C_FIELD(D_003E77AC, s32 *, 4) = arg0;
    }
}
