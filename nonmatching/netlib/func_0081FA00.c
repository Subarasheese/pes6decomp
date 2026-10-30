/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A42A8[];
extern char D_008A42FB[];

s32 func_0081FA00(void) {
    (*(s8 *)D_008A42FB) = 1;
    (*(s32 *)D_008A42A8) |= 0x40;
    return 0;
}
