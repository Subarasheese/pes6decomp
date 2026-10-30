/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CCD8A0[];
extern char D_00CCD8B0[];

void func_00C91680(s32 arg0, s32 arg1) {
    (*(s32 *)D_00CCD8B0) = arg1 + (arg0 * 2);
    (*(s32 *)D_00CCD8A0) |= 4;
}
