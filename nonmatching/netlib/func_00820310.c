/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A4280[];
extern char D_008A42B6[];

s32 func_00820310(void) {
    (*(s8 *)D_008A42B6) = 1;
    (*(s32 *)D_008A4280) |= 0x20;
    return 0;
}
