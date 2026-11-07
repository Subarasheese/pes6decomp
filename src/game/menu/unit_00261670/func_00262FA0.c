/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_0058D3C0[];

s32 func_00262FA0(s32 arg0) {
    void *p;
    s32 var_v0;

    var_v0 = 0;
    p = (void *)D_0058D3C0;
    if (p != NULL) {
        M2C_FIELD(p, s32 *, 0x48) = arg0;
        var_v0 = 1;
    }
    return var_v0;
}
