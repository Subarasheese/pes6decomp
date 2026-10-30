/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern M2C_UNK (*D_011F6C28)();

void func_0016B860(void) {
    if (D_011F6C28 != NULL) {
        D_011F6C28();
    }
}
