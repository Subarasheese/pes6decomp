/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A4280[];
extern char D_008A42BA[];

s32 func_00820250(void) {
    (*(s8 *)D_008A42BA) = 1;
    (*(s32 *)D_008A4280) |= 0x40;
    return 0;
}
