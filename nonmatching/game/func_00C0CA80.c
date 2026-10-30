/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002AE670(s32);
s32 func_00951980();                                /* extern */
M2C_UNK func_0096D0A0(s32, u16, M2C_UNK);           /* extern */

s32 func_00C0CA80(s32 arg0, void *arg1) {
    u16 var_s0;

    var_s0 = func_00951980() & 0xFFFF;
    if (M2C_FIELD(arg1, u16 *, 0x34) != 0xFFFF) {
        if (((u32) M2C_FIELD(arg1, u32 *, 0xC) % func_002AE670(4)) != 0) {
            var_s0 = M2C_FIELD(arg1, u16 *, 0x34);
        } else {
            goto block_3;
        }
    } else {
block_3:
        M2C_FIELD(arg1, u16 *, 0x34) = var_s0;
    }
    func_0096D0A0(arg0, var_s0, 0);
    return 3;
}
