/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0088AB70[];

s32 func_00805AC0(void) {
    if (((void *)D_0088AB70) != NULL) {
        (*(s8 *)D_0088AB70) = 1;
        return 1;
    }
    return 0;
}
