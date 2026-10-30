/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0090BA30();                            /* extern */
M2C_UNK func_00970590(void *);                      /* extern */
s32 func_009B3070(u16, u16);                        /* extern */
u32 func_009B33A0(void *, s32, M2C_UNK);            /* extern */
s32 func_00A07B40();                                /* extern */
s32 func_00A0DD50(void *);                          /* extern */
M2C_UNK func_00C6A440(void *);                      /* extern */
extern char D_00591E4C[];
extern char D_00CB5324[];

void func_00C666C0(void *arg0) {
    u8 temp_v0;

    func_0090BA30();
    M2C_FIELD(arg0, s8 *, 0x201) = 4;
    if (M2C_FIELD(arg0, u8 *, 0x1DE) == 0) {
        M2C_FIELD(arg0, u8 *, 0x1DE) = 1U;
        M2C_FIELD(arg0, s8 *, 0x20F) = 0;
        M2C_FIELD(arg0, s8 *, 0x210) = 0;
        M2C_FIELD(arg0, u8 *, 0x20E) = 0U;
    }
    temp_v0 = M2C_FIELD(arg0, u8 *, 0x20E);
    if ((s32) temp_v0 > 0) {
        M2C_FIELD(arg0, u8 *, 0x20E) = (u8) (temp_v0 - 1);
    }
    if (M2C_FIELD(arg0, u8 *, 0x1DE) != 1) {

    } else {
        func_00970590(arg0);
        if ((M2C_FIELD(arg0, u8 *, 0x16) == 4) && ((*(u8 *)D_00591E4C) == 0) && ((func_009B3070(M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(arg0, u16 *, 0x120)) & 0xFFFF) >= 0x4001) && (func_009B33A0(arg0, (s32) (13465.0f * (*(f32 *)D_00CB5324)), 0) >= 0x01440001U)) {
            M2C_FIELD(arg0, s32 *, 0xB0) = (s32) (M2C_FIELD(arg0, s32 *, 0xB0) | 0x200);
            M2C_FIELD(arg0, s32 *, 0xB4) = (s32) (M2C_FIELD(arg0, s32 *, 0xB4) | 0x200);
        }
    }
    if ((func_00A0DD50(arg0) == 0) || (func_00A07B40() == 0)) {
        func_00C6A440(arg0);
    }
}
