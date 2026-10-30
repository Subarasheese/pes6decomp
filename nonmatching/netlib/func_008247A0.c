/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008A4398[];
extern char D_008A9DDC[];

s32 func_008247A0(s32 arg0) {
    s32 *var_v0;

    if ((*(s32 *)D_008A4398) == 0) {
        var_v0 = NULL;
    } else if ((*(s32 *)D_008A9DDC) == 0) {
        var_v0 = NULL;
    } else {
        var_v0 = ((void *)D_008A9DDC);
    }
    if (var_v0 != NULL) {
        *var_v0 = arg0;
        return 4;
    }
    return 1;
}
