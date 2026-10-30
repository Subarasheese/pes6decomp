/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A4278[];
extern char D_008A42B9[];

s32 func_00820280(void) {
    (*(s8 *)D_008A42B9) = 1;
    (*(s32 *)D_008A4278) |= 0x40;
    return 0;
}
