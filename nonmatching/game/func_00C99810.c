/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_003AE97A[];

s32 func_00C99810(void) {
    if (((*(s8 *)D_003AE97A) != 0xB) && ((*(s8 *)D_003AE97A) != 0xA) && ((*(s8 *)D_003AE97A) != 9)) {
        return 0;
    }
    return 1;
}
