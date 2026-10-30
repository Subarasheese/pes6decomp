/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0096D0A0(void *, s32, M2C_UNK);        /* extern */
s32 func_009B3070(u16, u16);                        /* extern */
s32 func_009B32D0(u16, u16, M2C_UNK);               /* extern */
M2C_UNK func_00C04830(void *, M2C_UNK, s32);        /* extern */

s32 func_00C08EF0(void *arg0, void *arg1) {
    s32 temp_s0;
    u16 temp_s2;
    u16 temp_v1;

    temp_v1 = M2C_FIELD(arg1, u16 *, 0x28);
    if (temp_v1 == 0xFF) {
        goto block_7;
    }
    temp_s0 = temp_v1 & 0xFF;
    temp_s2 = M2C_FIELD(((temp_s0 * 2) + arg0), u16 *, 0x128);
    func_0096D0A0(arg0, func_009B32D0(temp_s2, M2C_FIELD(arg0, u16 *, 0x26), 0x4000) & 0xFFFF, 0);
    if ((func_009B3070(M2C_FIELD(arg0, u16 *, 0x26), temp_s2) & 0xFFFF) < 0x3000) {
        func_00C04830(arg0, 3, temp_s0);
block_7:
        return 1;
    }
    return 2;
}
