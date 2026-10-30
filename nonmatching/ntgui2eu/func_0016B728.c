/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 (*D_011F6C34)();

s32 func_0016B728(void) {
    if (D_011F6C34 != NULL) {
        return D_011F6C34();
    }
    return -1;
}
