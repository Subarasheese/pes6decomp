/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EB350;
extern char D_00D395A4[];

s32 func_00D15420(void) {
    D_003EB350 = 0;
    (*(u8 *)D_00D395A4) = ((*(u8 *)D_00D395A4) & ~0x40) | 0x40;
    return 0;
}
