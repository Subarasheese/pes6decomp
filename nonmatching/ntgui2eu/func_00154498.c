/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern M2C_UNK (*D_011E0D24)();

void func_00154498(void) {
    if (D_011E0D24 != NULL) {
        D_011E0D24();
    }
}
