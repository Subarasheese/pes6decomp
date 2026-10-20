/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char D_0053821C[];
extern char D_00538250[];

s32 func_0021D3A0(void) {
    s32 var_v0;

    var_v0 = 1;
    if (((*(s32 *)D_0053821C) != 1) && ((*(s32 *)D_00538250) == 0)) {
        var_v0 = 0;
    }
    return var_v0;
}
