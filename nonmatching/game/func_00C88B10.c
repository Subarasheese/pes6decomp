/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00C88B50(M2C_UNK);                         /* extern */
extern char D_00591C09[];

s32 func_00C88B10(s32 arg0) {
    s32 var_v0;

    var_v0 = 0;
    if ((*(u8 *)D_00591C09) == 5) {
        return 0;
    }
    if (arg0 != 0) {
        var_v0 = func_00C88B50(5);
    }
    return var_v0;
}
