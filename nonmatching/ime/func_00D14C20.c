/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00D3959C[];
extern char D_00D395A4[];

s32 func_00D14C20(s32 arg0) {
    if (arg0 > 0) {
        (*(s32 *)D_00D3959C) = arg0;
    }
    (*(u8 *)D_00D395A4) = ((*(u8 *)D_00D395A4) & ~0x20) | 0x20;
    return 0;
}
