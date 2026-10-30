/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0096D0A0(s32, M2C_UNK);                /* extern */

s32 func_00C06380(void *arg0, s32 arg1) {
    func_0096D0A0((M2C_FIELD(arg0, u16 *, 0x2A) + 0x7FFF + 1) & 0xFFFF, 0);
    if (arg1 < 0x90001) {
        return 2;
    }
    return 1;
}
