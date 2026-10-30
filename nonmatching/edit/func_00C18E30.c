/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B912F0(M2C_UNK, s32);                /* extern */
M2C_UNK func_00B91440(M2C_UNK);                     /* extern */
M2C_UNK func_00BC91D0(M2C_UNK, s32);                /* extern */
s32 func_00C1B400(M2C_UNK);                         /* extern */

void func_00C18E30(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x2E4) = arg1;
    M2C_FIELD(arg0, s32 *, 0x2E8) = 1;
    func_00BC91D0(0, func_00C1B400(0));
    func_00B912F0(0x21, arg2 & 0xFF);
    func_00B91440(0x28);
}
