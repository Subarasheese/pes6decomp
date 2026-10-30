/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern s32 D_003EA820;
extern char D_00CCBD28[];
extern char D_00CCBD4F[];

s8 func_00C72310(void) {
    s8 var_v0;

    D_003EA820 = 0;
    var_v0 = 0;
    if ((*(s32 *)D_00CCBD28) != 0) {
        var_v0 = (*(s8 *)D_00CCBD4F);
    }
    return var_v0;
}
