/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char D_0050D480[];
extern char D_0050D484[];

s32 func_001520C0(void) {
    s32 var_v0;

    var_v0 = (*(s32 *)D_0050D480) == 0;
    if (var_v0 != 0) {
        var_v0 = (*(s32 *)D_0050D484) == 2;
    }
    return var_v0;
}
