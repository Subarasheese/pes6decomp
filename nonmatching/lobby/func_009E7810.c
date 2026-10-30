/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_009ED5D0(s32 *, M2C_UNK, s32, M2C_UNK); /* extern */
M2C_UNK func_009ED7A0(s32);                         /* extern */
extern char D_00A03304[];
extern char D_00A0330C[];
extern char D_00A03314[];
extern char D_00A7DF50[];
extern char D_00A7DF5C[];

void func_009E7810(s32 arg0, s32 arg1) {
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 var_s0;

    var_s0 = arg0;
    func_001C48E8(((void *)D_00A7DF50), 0, 0x10);
    func_009ED7A0(arg1);
    sp30 = (*(s32 *)D_00A03304);
    sp34 = (*(s32 *)D_00A0330C);
    sp38 = (*(s32 *)D_00A03314);
    if ((var_s0 < 0) || (var_s0 >= 3)) {
        var_s0 = 0;
    }
    func_009ED5D0(&sp30, 3, var_s0, 0x01FC0005);
    (*(s32 *)D_00A7DF5C) = 1;
}
