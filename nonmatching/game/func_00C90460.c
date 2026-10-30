/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CCD8E0[];

void func_00C90460(s32 arg0) {
    (*(u8 *)D_00CCD8E0) = ((*(u8 *)D_00CCD8E0) & ~1) | (arg0 & 1);
}
