/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void func_00CEA680(void *arg0, f32 fparg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, f32 *, 0x58) = fparg0;
    }
}
