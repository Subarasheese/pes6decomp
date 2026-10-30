/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0088A930[];

s32 func_008045D0(void) {
    if (((void *)D_0088A930) != NULL) {
        (*(s8 *)D_0088A930) = 1;
        return 1;
    }
    return 0;
}
