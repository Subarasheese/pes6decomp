/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EA8B0;
extern char D_00CCD904[];

void func_00C931C0(void) {
    if (D_003EA8B0 != 0) {
        (*(u8 *)D_00CCD904) = ((*(u8 *)D_00CCD904) & ~2) | 2;
    }
}
