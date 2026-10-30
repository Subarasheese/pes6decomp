/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00D395A4[];

s32 func_00D153F0(void) {
    (*(u8 *)D_00D395A4) = ((*(u8 *)D_00D395A4) & ~0x40) | ((0 & 1) << 6);
    return 0;
}
