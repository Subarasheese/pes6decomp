/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00510FB8[];

s32 func_0017A288(s32 arg0) {
    s32 var_v0;

    var_v0 = 0;
    if ((*(s32 *)D_00510FB8) == 0) {
        (*(s32 *)D_00510FB8) = arg0;
        var_v0 = 1;
    }
    return var_v0;
}
