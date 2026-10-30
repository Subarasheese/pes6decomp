/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s8 *D_003EA694;

s32 func_008FF7B0(void) {
    if (D_003EA694 != NULL) {
        return ((s8) *D_003EA694 >> 2) & 1;
    }
    return 0;
}
