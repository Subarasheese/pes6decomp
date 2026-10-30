/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern M2C_UNK (*D_011D4410)();

void func_00125DC0(void) {
    if (D_011D4410 != NULL) {
        D_011D4410();
    }
}
