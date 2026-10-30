/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002AE670(s32);
extern void *Pes6Ball_Current;

u16 func_00AB4460(void) {
    u16 var_s0;

    var_s0 = M2C_FIELD(Pes6Ball_Current, u16 *, 0x6E);
    if ((s32) var_s0 >= (func_002AE670(0xE0) - 1)) {
        var_s0 = func_002AE670(0xE0) - 1;
    }
    return var_s0;
}
