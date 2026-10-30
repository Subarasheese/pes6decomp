/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern M2C_UNK (*D_011E0D40)();

void func_001545B0(void) {
    if (D_011E0D40 != NULL) {
        D_011E0D40();
    }
}
