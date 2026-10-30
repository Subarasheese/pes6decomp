/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A9A47[];

s32 func_008427F0(void) {
    switch ((*(s8 *)D_008A9A47)) {                           /* irregular */
    case 0:
        return 0;
    case 3:
    case 2:
    case 1:
        return 1;
    default:
        return 0;
    }
}
