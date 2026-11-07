/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00398660[];

s32 func_001BE760(void) {
    void *p;
    s32 var_v0;

    var_v0 = 0;
    p = (void *)D_00398660;
    if ((p != NULL) && (M2C_FIELD(p, s32 *, 0x20) < 5)) {
        var_v0 = 1;
    }
    return var_v0;
}
