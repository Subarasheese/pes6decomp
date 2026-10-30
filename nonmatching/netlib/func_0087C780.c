/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */

void func_0087C780(void *arg0) {
    M2C_UNK32 sp28;
    M2C_UNK32 sp2C;

    func_0026E840(0x84008401);
    sp2C = 0;
    sp28 = 2;
    M2C_FIELD(arg0, M2C_UNK32 *, 0) = sp28;
    M2C_FIELD(arg0, M2C_UNK32 *, 4) = sp2C;
}
