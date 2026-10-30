/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern M2C_UNK (*D_011F6C38)();

void func_0016B630(void) {
    if (D_011F6C38 != NULL) {
        D_011F6C38();
    }
}
