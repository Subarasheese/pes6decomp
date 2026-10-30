/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A4298[];
extern char D_008A42F5[];

s32 func_0081FB20(void) {
    (*(s8 *)D_008A42F5) = 1;
    (*(s32 *)D_008A4298) |= 0x20;
    return 0;
}
