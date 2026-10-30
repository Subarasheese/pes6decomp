/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0099AF50(s32, s32, M2C_UNK);               /* extern */

void func_009EF9B0(void *arg0, s32 arg1, s32 arg2, s32 *arg3, s32 arg4, s32 arg5) {
    if (*arg3 == 0) {
        *arg3 = func_0099AF50(arg2, arg4, 1);
    }
    M2C_FIELD(arg0, s32 **, 0xC) = arg3;
    M2C_FIELD(arg0, s32 *, 0x10) = arg5;
    M2C_FIELD(arg0, s32 *, 8) = arg1;
}
