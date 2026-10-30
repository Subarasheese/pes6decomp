/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A9BA0[];
extern char D_008A9DDC[];

s32 func_008274C0(void) {
    (*(s32 *)D_008A9BA0) = (*(s32 *)D_008A9DDC);
    return 1;
}
