/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A4288[];
extern char D_008A42B7[];

s32 func_008202E0(void) {
    (*(s8 *)D_008A42B7) = 1;
    (*(s32 *)D_008A4288) |= 0x20;
    return 0;
}
