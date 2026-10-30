/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CE4F4C[];
extern char D_00CE500C[];

s32 func_00BC9F00(void) {
    s32 var_v0;

    var_v0 = 1;
    if ((*(s32 *)D_00CE4F4C) == 1) {
        goto block_3;
    }
    if ((*(s32 *)D_00CE500C) == 1) {
block_3:
        var_v0 = 0;
    }
    return var_v0;
}
