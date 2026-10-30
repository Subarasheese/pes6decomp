/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_002FACA0(s32);                             /* extern */
extern char D_003B4428[];

s32 func_002FAF70(void) {
    s32 var_v0;
    s32 var_v1;

    var_v1 = 0;
    if (((*(s32 *)D_003B4428) == 0) || (var_v0 = func_002FACA0((*(s32 *)D_003B4428)), var_v1 = var_v0, (var_v1 >= 0))) {
        var_v0 = var_v1;
    }
    return var_v0;
}
