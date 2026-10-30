/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009ECB50();                            /* extern */

void func_009EEEC0(void *arg0) {
    func_009ECB50();
    M2C_FIELD(arg0, u8 *, 0x40) = (u8) ((M2C_FIELD(arg0, u8 *, 0x40) & ~1) | (0 & 1));
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
}
