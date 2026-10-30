/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002AD0B0(void *, u8);
M2C_UNK func_002AD720(u8, s32, M2C_UNK *, u32);     /* extern */
s32 func_00BBB8C0(M2C_UNK);                         /* extern */
s32 func_00BBC8A0(u8, M2C_UNK *, s32);              /* extern */
u8 func_00BBCC10();                                 /* extern */
extern char D_005E2FA0[];
extern char D_005E2FC5[];
extern char D_005E2FC6[];
extern char D_005E30E0[];
extern char D_005E30E1[];
extern char D_005E30E3[];
extern char D_005E31C8[];

s32 func_002BA750(void *arg0) {
    s32 temp_v0;
    s32 temp_v1;
    s32 var_s0;
    u32 temp_a3;

    temp_v0 = func_00BBB8C0(0x64);
    if (temp_v0 < (*(s8 *)D_005E2FC5)) {
        var_s0 = 0xC0;
    } else if (temp_v0 >= ((*(s8 *)D_005E2FC5) + (*(s8 *)D_005E2FC6))) {
        var_s0 = 0x60;
    } else {
        var_s0 = 0xA0;
    }
    if ((*(s32 *)D_005E2FA0) & 0x40) {
        var_s0 |= 1;
    }
    if ((*(s32 *)D_005E2FA0) & 0x80) {
        var_s0 |= 8;
    }
    if ((*(s32 *)D_005E2FA0) & 0x100) {
        var_s0 |= 2;
    }
    if ((*(s32 *)D_005E2FA0) & 0x200) {
        var_s0 |= 4;
    }
    temp_v1 = M2C_FIELD(arg0, s32 *, 4);
    temp_a3 = temp_v1 << 0xF;
    func_002AD720((*(u8 *)D_005E30E1), (((temp_v1 << 0xF) / 180) + (temp_a3 >> 0x1F)) & 0xFFFF, ((void *)D_005E31C8), temp_a3);
    func_002AD0B0(((void *)D_005E30E0), func_00BBC8A0((*(u8 *)D_005E30E1), ((void *)D_005E31C8), var_s0) & 0xFF);
    if ((*(u8 *)D_005E30E3) == 0x2B) {
        func_002AD0B0(((void *)D_005E30E0), func_00BBCC10());
    }
    return 0;
}
