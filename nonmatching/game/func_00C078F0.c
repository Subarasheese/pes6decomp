/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0096D0A0(u16, M2C_UNK);                /* extern */
s32 func_009937C0();                                /* extern */

s32 func_00C078F0(void *arg0, void *arg1) {
    s16 var_v0;
    u8 temp_v1;
    u8 temp_v1_2;

    func_0096D0A0(M2C_FIELD(arg0, u16 *, 0x26), 0);
    temp_v1 = M2C_FIELD(arg0, u8 *, 0x16);
    if ((temp_v1 != 0x40) && (temp_v1 != 4) && (M2C_FIELD(arg1, s32 *, 0xC) & 1)) {
        M2C_FIELD(arg0, s8 *, 0x100) = 1;
        if (M2C_FIELD(arg1, u8 *, 0x28) == 0) {
            var_v0 = M2C_FIELD(arg0, u16 *, 0x26) + 0x4000;
        } else {
            var_v0 = M2C_FIELD(arg0, u16 *, 0x26) - 0x4000;
        }
        M2C_FIELD(arg0, s16 *, 0xFC) = var_v0;
    }
    temp_v1_2 = M2C_FIELD(arg1, u8 *, 0x29);
    switch (temp_v1_2) {                            /* irregular */
    case 0:
        if ((func_009937C0() & 0xFF) != 0xFF) {
            M2C_FIELD(arg1, u8 *, 0x29) = 1U;
        }
block_16:
    default:
        return 3;
    case 1:
        if ((func_009937C0() & 0xFF) == 0xFF) {
            return 4;
        }
        goto block_16;
    }
}
