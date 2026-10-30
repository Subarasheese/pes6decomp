/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0096D0A0(void *, u16, M2C_UNK);        /* extern */
s32 func_009B3070(u16, u16);                        /* extern */
s32 func_00C0EB50(void *, u16);                     /* extern */
extern char D_00591BE4[];

s32 func_00C057F0(void *arg0, M2C_UNK arg1, void *arg2) {
    M2C_UNK var_s1;
    s32 temp_v1;
    u16 temp_s2;

    var_s1 = 0;
    temp_s2 = M2C_FIELD(arg2, u16 *, 0x28);
    temp_v1 = func_009B3070(M2C_FIELD(arg0, u16 *, 0x26), temp_s2) & 0xFFFF;
    if ((temp_v1 < 0x1000) || ((temp_v1 < 0x2C01) && (func_00C0EB50(arg0, temp_s2) == 0))) {
        var_s1 = 1;
    }
    func_0096D0A0(arg0, temp_s2, var_s1);
    if ((M2C_FIELD(arg0, u8 *, 0x16) == 0x19) && ((u32) ((u8) (*(u8 *)D_00591BE4) >> 1) < (u32) M2C_FIELD(arg2, u32 *, 0x10))) {
        return 1;
    }
    return 3;
}
