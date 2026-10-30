/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A4328[];
extern char D_008A4338[];
extern char D_008A4340[];
extern char D_008A4348[];

s8 func_00821080(void) {
    s8 var_v0;

    var_v0 = (*(s8 *)D_008A4328);
    if (((*(s32 *)D_008A4338) == 0) || ((*(s32 *)D_008A4340) == 0) || ((*(s32 *)D_008A4348) == 0)) {
        var_v0 = 0;
    }
    return var_v0;
}
