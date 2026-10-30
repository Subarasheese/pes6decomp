/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s32 func_00214540(M2C_UNK);                         /* extern */
M2C_UNK func_00820F10(M2C_UNK);                     /* extern */
M2C_UNK func_008210C0(M2C_UNK);                     /* extern */
M2C_UNK func_0099C730(s32);                         /* extern */
M2C_UNK func_00D0C770(s32, s32);                    /* extern */
extern char D_00A034A0[];
extern char D_00A7E000[];
extern char D_00A7E00C[];
extern char D_00A7E010[];

void func_009ED7A0(s32 arg0) {
    M2C_UNK *var_s0;
    u32 var_s1;

    func_001C48E8(((void *)D_00A7E000), 0, 0x14);
    (*(s32 *)D_00A7E00C) = func_00214540(0);
    if (arg0 != 0) {
        func_0099C730(arg0);
    }
    func_00820F10(1);
    func_008210C0(0x11);
    var_s1 = 0;
    var_s0 = ((void *)D_00A034A0);
    do {
        func_00D0C770(M2C_FIELD(var_s0, s32 *, 0), M2C_FIELD(var_s0, s32 *, 4));
        var_s1 += 1;
        var_s0 += 8;
    } while (var_s1 < 2U);
    (*(u8 *)D_00A7E010) = ((*(u8 *)D_00A7E010) & ~1) | 1;
}
