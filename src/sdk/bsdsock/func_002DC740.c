/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char D_003B3220[];

s32 func_002DC740(void) {
    s32 var_v0;

    var_v0 = (*(s32 *)D_003B3220);
    if (var_v0 >= 4) {
        var_v0 = 3;
    }
    return var_v0;
}
