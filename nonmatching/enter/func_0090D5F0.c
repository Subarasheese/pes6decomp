/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0092F040[];

s32 func_0090D5F0(void) {
    if (((*(u8 *)D_0092F040) & 2) && ((*(u8 *)D_0092F040) & 1)) {
        return 0;
    }
    return 1;
}
