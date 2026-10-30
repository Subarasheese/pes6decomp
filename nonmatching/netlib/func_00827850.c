/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A43D8[];
extern char D_008AA0F8[];
extern char D_008AA0FC[];

s32 func_00827850(void) {
    (*(s32 *)D_008AA0F8) = 3;
    (*(s32 *)D_008AA0FC) = 0xA;
    (*(s32 *)D_008A43D8) = 0x3C;
    return 1;
}
