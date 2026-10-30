/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A42A0[];
extern char D_008A42F6[];

s32 func_0081FAF0(void) {
    (*(s8 *)D_008A42F6) = 1;
    (*(s32 *)D_008A42A0) |= 0x20;
    return 0;
}
