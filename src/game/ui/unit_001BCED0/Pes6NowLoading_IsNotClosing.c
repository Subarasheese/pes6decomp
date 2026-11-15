/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char Pes6NowLoading[];

s32 Pes6NowLoading_IsNotClosing(void) {
    void *p;
    s32 var_v0;

    var_v0 = 0;
    p = (void *)Pes6NowLoading;
    if ((p != NULL) && (M2C_FIELD(p, s32 *, 0x20) < 5)) {
        var_v0 = 1;
    }
    return var_v0;
}
