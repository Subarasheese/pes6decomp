/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK, M2C_UNK);            /* extern */

void func_00825490(void *arg0) {
    func_001C48E8(0, 0x14);
    M2C_FIELD(arg0, s64 *, 0x18) = 0;
    M2C_FIELD(arg0, s16 *, 0x2A) = 0;
    M2C_FIELD(arg0, u8 *, 0x28) = (u8) (M2C_FIELD(arg0, u8 *, 0x28) + 1);
}
