/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005926FD[];
extern char D_00592702[];

s32 func_00BFE400(void) {
    s32 var_v0;

    var_v0 = (*(u8 *)D_005926FD) == 1;
    if (var_v0 != 0) {
        var_v0 = (*(u8 *)D_00592702) != 0;
    }
    return var_v0;
}
