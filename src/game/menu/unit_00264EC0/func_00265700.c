/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
s32 func_00256D90(s32);                             /* extern */

s32 func_00265700(s32 *arg0) {
    s32 var_v0;

    var_v0 = 0;
    if (arg0 != NULL) {
        var_v0 = func_00256D90(*arg0);
    }
    return var_v0;
}
