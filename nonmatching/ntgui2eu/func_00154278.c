/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 (*D_011E0D08)();

s32 func_00154278(void) {
    if (D_011E0D08 != NULL) {
        return D_011E0D08();
    }
    return 0;
}
