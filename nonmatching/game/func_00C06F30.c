/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0096D0A0(void *, s32, M2C_UNK);        /* extern */
s32 func_009B32D0(u16, u16, M2C_UNK);               /* extern */

s32 func_00C06F30(void *arg0) {
    func_0096D0A0(arg0, func_009B32D0(M2C_FIELD(arg0, u16 *, 0x118), M2C_FIELD(arg0, u16 *, 0x120), 0x2800), 0);
    return 3;
}
