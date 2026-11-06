/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"


s32 func_00C88B50();                         /* extern */
extern char D_00591C09[];

s32 func_00C88B10(s32 arg0) {
    s32 var_v0;

    var_v0 = 0;
    if ((*(u8 *)D_00591C09) == 5) {
        return 0;
    }
    if (arg0 != 0) {
        var_v0 = func_00C88B50();
    }
    return var_v0;
}
