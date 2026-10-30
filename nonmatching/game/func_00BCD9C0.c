/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002727C0(s32);
extern s32 func_00152130(s32, s8);
M2C_UNK func_00BB6100(M2C_UNK);                     /* extern */
M2C_UNK func_00BB6780(s32);                         /* extern */
M2C_UNK func_00BB68C0();                            /* extern */
s32 func_00BCDA70(u8);                              /* extern */
s32 func_00BCDD00(u8);                              /* extern */
extern char D_00592700[];

void func_00BCD9C0(void) {
    M2C_UNK var_a0;
    s32 var_v0;

    func_002727C0(0x1F);
    func_00BB68C0();
    if (((*(u8 *)D_00592700) != 5) && ((*(u8 *)D_00592700) != 6)) {
        var_v0 = func_00BCDD00((*(u8 *)D_00592700));
    } else {
        var_v0 = func_00BCDA70((*(u8 *)D_00592700));
    }
    func_00BB6780(var_v0 & 0xFFFF);
    if (((*(u8 *)D_00592700) != 5) && ((*(u8 *)D_00592700) != 6)) {
        var_a0 = 4;
    } else {
        var_a0 = 0xA;
    }
    func_00BB6100(var_a0);
    func_00152130(0, 0x10);
}
