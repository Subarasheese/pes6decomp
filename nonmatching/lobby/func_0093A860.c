/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00A435D0[];

s32 func_0093A860(void) {
    if (((void *)D_00A435D0) != NULL) {
        (*(s8 *)D_00A435D0) = 1;
        return 1;
    }
    return 0;
}
