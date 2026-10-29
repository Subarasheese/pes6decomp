/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern void *Pes6Ball_Current;

s32 func_003112E0(void) {
    s32 var_v0;

    var_v0 = 0;
    if ((M2C_FIELD(Pes6Ball_Current, s32 *, 0x10BC) > 0) && (M2C_FIELD(Pes6Ball_Current, s32 *, 0x10C0) < 0)) {
        var_v0 = 1;
    }
    return var_v0;
}
