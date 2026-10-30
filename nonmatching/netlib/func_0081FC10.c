/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A4290[];
extern char D_008A42F0[];

s32 func_0081FC10(void) {
    (*(s8 *)D_008A42F0) = 1;
    (*(s32 *)D_008A4290) |= 0x10;
    return 0;
}
