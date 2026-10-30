/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_009083B0[];

s32 func_008F7FD0(void) {
    if (((*(u8 *)D_009083B0) & 2) && ((*(u8 *)D_009083B0) & 1)) {
        return 0;
    }
    return 1;
}
