/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 (*D_011E0D00)();

s32 func_00154218(void) {
    if (D_011E0D00 != NULL) {
        return D_011E0D00();
    }
    return 0;
}
