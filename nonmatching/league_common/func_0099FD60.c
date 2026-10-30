/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 *D_003EA994;

s32 func_0099FD60(void) {
    if (D_003EA994 != NULL) {
        return *D_003EA994;
    }
    return 0;
}
