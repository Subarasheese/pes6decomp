/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0025E150(M2C_UNK, M2C_UNK);            /* extern */
s32 func_00BB4780(void *);                          /* extern */

void func_00BB7990(void *arg0) {
    func_0025E150(3, 0);
    M2C_FIELD(arg0, s32 *, 0x40) = func_00BB4780(arg0);
    M2C_FIELD(arg0, s32 *, 0x9C) = 0;
    M2C_FIELD(arg0, s8 *, 0x12) = 0;
    M2C_FIELD(arg0, s8 *, 0x11) = (s8) M2C_FIELD(arg0, s8 *, 0x10);
    M2C_FIELD(arg0, s8 *, 0x10) = 5;
}
