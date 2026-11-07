/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char D_0052AB90[];
extern char D_0052ABAC[];

s32 func_001DA460(s32 arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (((*(s32 *)D_0052ABAC) != 0) && (arg0 >= 0) && (arg0 < (*(s32 *)D_0052AB90))) {
        var_v0 = (*(s32 *)D_0052ABAC) + (arg0 * 0x4C);
    }
    return var_v0;
}
