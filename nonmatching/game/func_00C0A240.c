/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00952910(void *, u16);                     /* extern */
M2C_UNK func_00961AB0(void *, s32, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0096D0A0(void *, s32, M2C_UNK);        /* extern */
s32 func_009B3070(u16, u16);                        /* extern */

s32 func_00C0A240(void *arg0, void *arg1) {
    s32 temp_s1;
    u16 temp_v0;

    temp_v0 = M2C_FIELD(arg1, u16 *, 0x28);
    temp_s1 = temp_v0 & 0xFF;
    if ((func_009B3070(M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(((temp_v0 * 2) + arg0), u16 *, 0x128)) & 0xFFFF) >= 0x3000) {
        func_0096D0A0(arg0, func_00952910(arg0, M2C_FIELD((((temp_s1 & 0xFF) * 2) + arg0), u16 *, 0x128)) & 0xFFFF, 0);
        return 2;
    }
    func_00961AB0(arg0, temp_s1, 0xFF, 0x2000, 1);
    return 4;
}
