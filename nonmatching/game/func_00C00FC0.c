/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBD890[];
extern char D_00CBD894[];

s32 func_00C00FC0(void) {
    s32 var_v0;

    var_v0 = (*(s32 *)D_00CBD890) == 0;
    if (var_v0 != 0) {
        var_v0 = (*(s32 *)D_00CBD894) == 0;
    }
    return var_v0;
}
