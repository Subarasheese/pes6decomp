/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_0059274A[];

s32 func_0099E380(s32 arg0) {
    s32 var_v0;

    switch ((*(u16 *)D_0059274A)) {
    case 0x0:
        var_v0 = arg0 - 0x4000;
        arg0 = var_v0 & 0xFFFF;
        break;
    case 0x8000:
        var_v0 = arg0 + 0x4000;
        arg0 = var_v0 & 0xFFFF;
        break;
    }
    return arg0;
}
