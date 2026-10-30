/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_0030E5B0(void);
extern int func_00335370(void);
M2C_UNK func_003414D0(u8 *, M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_008FC310(s32, s32 *, u8);              /* extern */
M2C_UNK func_008FDEF0(s32, s32 *, u8);              /* extern */

s32 func_008FDF40(s32 arg0, s32 *arg1) {
    u8 sp4F;

    if (*arg1 != 0x11) {
        func_003414D0(&sp4F, 2, 0xFF);
    } else if (func_0030E5B0() == 1) {
        sp4F = 0;
    } else {
        sp4F = 1;
    }
    M2C_FIELD(func_00335370(), s32 *, 0x1008) = (s32) sp4F;
    func_008FDEF0(arg0, arg1, sp4F);
    func_008FC310(arg0, arg1, sp4F);
    return 1;
}
