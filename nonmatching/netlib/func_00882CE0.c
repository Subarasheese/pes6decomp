/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008B24D8[];

s32 func_00882CE0(void) {
    (*(s32 *)D_008B24D8) |= 0x40;
    return 0;
}
