/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00952A50(u16);                             /* extern */
M2C_UNK func_0096D0A0(void *, u16, M2C_UNK);        /* extern */
s32 func_009B3070(u16, u16);                        /* extern */
M2C_UNK func_00C04AD0(void *, M2C_UNK);             /* extern */

s32 func_00C05660(void *arg0, M2C_UNK arg1, void *arg2) {
    u16 temp_s0;
    u8 temp_v1;

    temp_s0 = M2C_FIELD(arg2, u16 *, 0x28);
    if ((func_00952A50(temp_s0) & 0xFF) >= 0x63) {
        func_00C04AD0(arg0, 7);
        goto block_14;
    }
    func_0096D0A0(arg0, temp_s0, 0);
    temp_v1 = M2C_FIELD(arg0, u8 *, 0x16);
    switch (temp_v1) {                              /* irregular */
    case 19:
        if ((func_009B3070(M2C_FIELD(arg0, u16 *, 0x26), temp_s0) & 0xFFFF) < 0x1000) {
block_14:
            return 1;
        }
    case 2:
    case 25:
        return 3;
    default:
        return 1;
    }
}
