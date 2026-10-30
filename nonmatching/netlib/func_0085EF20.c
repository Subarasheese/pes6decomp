/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 *D_003EA358;

s32 func_0085EF20(void) {
    if (D_003EA358 != NULL) {
        return *D_003EA358;
    }
    return -1;
}
