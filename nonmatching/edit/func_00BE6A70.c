/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B91440(M2C_UNK);                     /* extern */
M2C_UNK func_00B91490(M2C_UNK);                     /* extern */
M2C_UNK func_00B91590(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00BC3FB0(M2C_UNK);                     /* extern */
s32 func_00BC6100(s32, M2C_UNK);                    /* extern */
M2C_UNK func_00BE6D60(u16);                         /* extern */
M2C_UNK func_00BE6F80();                            /* extern */
M2C_UNK func_00BF45D0(M2C_UNK, u16, s16, M2C_UNK, M2C_UNK); /* extern */
s32 func_00BF73D0();                                /* extern */
M2C_UNK func_00BF77A0(s32, s32);                    /* extern */
M2C_UNK func_00BF7CF0(M2C_UNK);                     /* extern */
M2C_UNK func_00C1B420(M2C_UNK);                     /* extern */
M2C_UNK func_00C1B440(M2C_UNK, u16);                /* extern */
extern char D_00CE5BE8[];
extern char D_00CE5BEC[];

void func_00BE6A70(u16 arg0) {
    s32 var_s0;

    (*(u16 *)D_00CE5BE8) = arg0;
    (*(s32 *)D_00CE5BEC) = 0;
    func_00C1B440(0, arg0);
    if (func_00BF73D0() == 0) {
        func_00B91440(0xC);
        func_00B91440(0x1E);
        func_00BC3FB0(0xB);
        return;
    }
    func_00BF45D0(0, (*(u16 *)D_00CE5BE8), (s16) (*(s32 *)D_00CE5BEC), 0, 0);
    func_00BE6D60((*(u16 *)D_00CE5BE8));
    func_00C1B420(0);
    func_00B91490(0xC);
    func_00BE6F80();
    func_00BF7CF0(0);
    func_00B91590(0x1E, 1);
    func_00BC3FB0(0x1B);
    var_s0 = 0x40;
    do {
        func_00BF77A0(var_s0, func_00BC6100(var_s0, 0) < 0x11);
        var_s0 = (var_s0 + 1) & 0xFFFF;
    } while (var_s0 < 0xCC);
}
