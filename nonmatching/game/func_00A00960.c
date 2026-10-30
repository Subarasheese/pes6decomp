/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u16 func_009B32D0(u16, u16, s32);                   /* extern */

void func_00A00960(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, u16 *, 0x26) = func_009B32D0(M2C_FIELD(arg0, u16 *, 0x2C), M2C_FIELD(arg0, u16 *, 0x26), arg1);
}
