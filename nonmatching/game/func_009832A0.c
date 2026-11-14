/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_009143D0(M2C_UNK);                     /* extern */

void func_009832A0(void *arg0, s8 arg1, s8 arg2) {
    M2C_FIELD(arg0, s8 *, 0x1DD) = arg1;
    M2C_FIELD(arg0, s8 *, 0x1DE) = arg2;
    func_009143D0(0);
}
