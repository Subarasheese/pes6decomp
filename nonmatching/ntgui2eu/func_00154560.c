/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern M2C_UNK (*D_011E0D38)();

void func_00154560(void) {
    if (D_011E0D38 != NULL) {
        D_011E0D38();
    }
}
