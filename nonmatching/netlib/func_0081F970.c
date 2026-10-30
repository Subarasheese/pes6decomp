/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A42A0[];
extern char D_008A42FE[];

s32 func_0081F970(void) {
    (*(s8 *)D_008A42FE) = 1;
    (*(s32 *)D_008A42A0) |= 0x80;
    return 0;
}
