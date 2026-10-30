/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(u8 *, M2C_UNK, M2C_UNK);      /* extern */

u8 func_0084CDD0(s32 arg0, s32 arg1, u8 *arg2) {
    if (arg1 != -1) {
        if (arg0 == 0) {
            *arg2 &= ~(1 << (arg1 - 1)) & 0xFF;
        } else {
            *arg2 |= (1 << (arg1 - 1)) & 0xFF;
        }
    } else if (arg0 == 0) {
        func_001C48E8(arg2, 0, 1);
    }
    return *arg2;
}
