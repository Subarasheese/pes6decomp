/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A4B70[];
extern char D_008A5674[];
extern char D_008A5C54[];

s32 func_00828C50(void) {
    (*(s32 *)D_008A4B70) = 0;
    (*(s32 *)D_008A5C54) = 0;
    (*(s32 *)D_008A5674) = 0;
    return 4;
}
