/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0096D0A0(void *, u16, M2C_UNK);        /* extern */
s32 func_0098ED30(u8);                              /* extern */
s32 func_009B3070(u16, u16);                        /* extern */
extern char Pes6MatchSquads[];

s32 func_00C07790(void *arg0) {
    s32 var_v0;
    u16 var_s1;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 0x16);
    if ((temp_v1 != 0x40) && (temp_v1 != 4)) {
        if ((M2C_FIELD(arg0, u8 *, 0) == *(u8 *)0x591E4C) && ((u32) M2C_FIELD(arg0, u32 *, 0x110) < 0x40000U)) {
            M2C_FIELD(arg0, s32 *, 0xB4) = 0x8000;
            M2C_FIELD(arg0, u8 *, 0x4C) = 3U;
        }
        func_0096D0A0(arg0, M2C_FIELD(arg0, u16 *, 0x10C), 0);
    } else if (M2C_FIELD(arg0, u8 *, 0x4C) == 3) {
        var_s1 = M2C_FIELD(arg0, u16 *, 0x120);
        if (((func_009B3070(M2C_FIELD(arg0, u16 *, 0x26), var_s1) & 0xFFFF) < 0x3000) && ((func_0098ED30(M2C_FIELD(arg0, u8 *, 0)) & 0xFF) == 5)) {
            if (M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x68) & 1 & 1) {
                var_v0 = M2C_FIELD(arg0, u16 *, 0x26) + 0x2000;
            } else {
                var_v0 = M2C_FIELD(arg0, u16 *, 0x26) - 0x2000;
            }
            var_s1 = var_v0 & 0xFFFF;
        }
        func_0096D0A0(arg0, var_s1, 0);
    }
    return 3;
}
