/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001B7ED0(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_001C48E8(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00B91490(M2C_UNK);                     /* extern */
M2C_UNK func_00BB1530(M2C_UNK);                     /* extern */
M2C_UNK func_00BB1540(M2C_UNK);                     /* extern */
M2C_UNK func_00BC2520(void *);                      /* extern */
M2C_UNK func_00BC26F0(void *);                      /* extern */
extern char D_00CB6DB0[];

void func_00BC1640(void *arg0, s32 arg1) {
    M2C_UNK var_a0;

    func_001C48E8(0, 0x24);
    M2C_FIELD(arg0, s32 *, 8) = 1;
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, u8 *, 0x16) = (u8) (M2C_FIELD(arg0, u8 *, 0x16) | 2);
    M2C_FIELD(arg0, u8 *, 0x16) = (u8) (M2C_FIELD(arg0, u8 *, 0x16) | 1);
    func_00BC26F0(arg0);
    func_00BC2520(arg0);
    func_00B91490(0x13);
    func_00B91490(0x1D);
    func_00BB1540(2);
    if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        var_a0 = 1;
    } else {
        var_a0 = 0;
    }
    func_00BB1530(var_a0);
    func_001B7ED0(((void *)D_00CB6DB0), 3);
}
