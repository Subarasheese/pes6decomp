/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591F2C[];
extern char D_0059295B[];
extern char D_0059295C[];

s32 func_00C76460(s32 arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 == 0) {
        if ((((*(u8 *)D_00591F2C) == 2) || ((*(u8 *)D_00591F2C) == 0)) && ((*(u8 *)D_0059295B) == 0xFF)) {
            goto block_7;
        }
    } else if (((u8) (*(u8 *)D_00591F2C) < 2U) && ((*(u8 *)D_0059295C) == 0xFF)) {
block_7:
        var_v0 = 1;
    }
    return var_v0;
}
