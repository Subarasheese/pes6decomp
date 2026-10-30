/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0059274A[];

s32 func_0099E380(s32 arg0) {
    s32 var_a0;
    s32 var_v0;

    var_a0 = arg0;
    switch ((*(u16 *)D_0059274A)) {                           /* irregular */
    case 0x8000:
        var_v0 = var_a0 + 0x4000;
block_8:
        var_a0 = var_v0 & 0xFFFF;
        break;
    case 0x0:
        var_v0 = var_a0 - 0x4000;
        goto block_8;
    }
    return var_a0;
}
