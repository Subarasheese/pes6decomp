/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s8 *D_003EA694;

s32 func_008FF810(void) {
    if (D_003EA694 != NULL) {
        return *D_003EA694 & 1;
    }
    return 0;
}
