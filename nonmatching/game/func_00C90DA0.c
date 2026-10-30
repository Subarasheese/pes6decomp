/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CCD8A0[];
extern char D_00CCD8A8[];

void func_00C90DA0(s32 arg0) {
    (*(s32 *)D_00CCD8A8) = arg0;
    (*(s32 *)D_00CCD8A0) |= 2;
}
