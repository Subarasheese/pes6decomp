/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002AE670(s32);
s32 func_00952910(u16);                             /* extern */
M2C_UNK func_0096D0A0(void *, u16, M2C_UNK);        /* extern */
s32 func_00C0CBF0(void *, u16, void *);             /* extern */

s32 func_00C0CB10(void *arg0, void *arg1) {
    u16 var_s0;

    var_s0 = func_00952910(M2C_FIELD(arg1, u16 *, 0x28)) & 0xFFFF;
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
    if ((s32) M2C_FIELD(arg1, u8 *, 0x37) < 8) {
        if (func_00C0CBF0(arg0, var_s0, arg1) != 0) {
            M2C_FIELD(arg1, u8 *, 0x37) = (u8) (M2C_FIELD(arg1, u8 *, 0x37) + 1);
            M2C_FIELD(arg0, s32 *, 0x1EC) = (s32) (M2C_FIELD(arg0, s32 *, 0x1EC) | 0x800);
            M2C_FIELD(arg0, s32 *, 0xB0) = (s32) M2C_FIELD(arg0, s32 *, 0x1EC);
        }
    }
    return 3;
}
