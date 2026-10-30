/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009143D0(M2C_UNK, M2C_UNK);            /* extern */

void func_00983260(void *arg0, u8 arg1) {
    if (M2C_FIELD(arg0, u8 *, 0x1DD) != (arg1 & 0xFF)) {
        M2C_FIELD(arg0, u8 *, 0x1DD) = arg1;
        M2C_FIELD(arg0, s8 *, 0x1DE) = 0;
        func_009143D0(0, 1);
    }
}
