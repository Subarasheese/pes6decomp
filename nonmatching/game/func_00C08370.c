/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00961940(void *, M2C_UNK);             /* extern */
M2C_UNK func_0096D0A0(u16, M2C_UNK);                /* extern */

s32 func_00C08370(void *arg0) {
    func_0096D0A0(M2C_FIELD(arg0, u16 *, 0x120), 0);
    func_00961940(arg0, 1);
    return 4;
}
