/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0096D0A0(u16, M2C_UNK);                /* extern */

s32 func_00C06EA0(void *arg0, void *arg1) {
    s16 var_v0;

    func_0096D0A0(M2C_FIELD(arg0, u16 *, 0x26), 0);
    M2C_FIELD(arg1, u8 *, 0x29) = (u8) (M2C_FIELD(arg1, u8 *, 0x29) + 1);
    if (((s32) M2C_FIELD(arg1, u8 *, 0x29) % 2) == 0) {
        var_v0 = 0xC000;
        M2C_FIELD(arg0, s8 *, 0x100) = 4;
    } else {
        var_v0 = 0x4000;
        M2C_FIELD(arg0, s8 *, 0x100) = 8;
    }
    M2C_FIELD(arg0, s16 *, 0xFC) = var_v0;
    return 3;
}
