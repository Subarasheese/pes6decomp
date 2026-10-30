/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *Pes6Ball_Current;

u8 func_00C76E60(void) {
    u8 var_v0;

    var_v0 = 0;
    if (Pes6Ball_Current != NULL) {
        var_v0 = M2C_FIELD(Pes6Ball_Current, u8 *, 0xC);
    }
    return var_v0;
}
