/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A4B6C[];
extern char D_008A5670[];
extern char D_008A5C50[];

s32 func_00828D70(void) {
    (*(s32 *)D_008A4B6C) = 0;
    (*(s32 *)D_008A5C50) = 0;
    (*(s32 *)D_008A5670) = 0;
    return 4;
}
