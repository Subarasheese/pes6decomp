/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern M2C_UNK (*D_0092F0A8)();

void func_00900430(void) {
    if (D_0092F0A8 != NULL) {
        D_0092F0A8();
    }
}
