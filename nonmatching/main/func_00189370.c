/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0051FF48[];
extern char D_0051FF49[];

s32 func_00189370(s32 arg0) {
    u8 var_v0;

    if (arg0 == 0) {
        var_v0 = (*(u8 *)D_0051FF49);
    } else {
        var_v0 = (*(u8 *)D_0051FF48);
    }
    if (var_v0 != 0) {
        return 1;
    }
    return 0;
}
