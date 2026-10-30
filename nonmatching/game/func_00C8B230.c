/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CCD074[];

void func_00C8B230(void) {
    (*(u8 *)D_00CCD074) = ((*(u8 *)D_00CCD074) & ~0x30) | 0x20;
}
