/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0092F0D0[];

s32 func_00900470(void) {
    (*(s32 *)D_0092F0D0) &= ~0x1000;
    return 1;
}
