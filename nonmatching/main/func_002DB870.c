/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002DB870(s16 *arg0) {
    if (arg0 != NULL) {
        if (*arg0 != 0) {
            return 1;
        }
        goto block_7;
    }
block_7:
    return 0;
}
