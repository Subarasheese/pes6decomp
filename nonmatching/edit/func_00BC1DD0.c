/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001B7ED0(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_001C48E8(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00B91490(M2C_UNK);                     /* extern */
s32 func_00BA3A00();                                /* extern */
M2C_UNK func_00BC2520(void *);                      /* extern */
M2C_UNK func_00BC26F0(void *);                      /* extern */
extern char D_00CB6DE0[];

void func_00BC1DD0(void *arg0, s32 arg1) {
    M2C_UNK var_a1;

    func_001C48E8(0, 0x24);
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    M2C_FIELD(arg0, u8 *, 0x16) = (u8) (M2C_FIELD(arg0, u8 *, 0x16) | 1);
    M2C_FIELD(arg0, u8 *, 0x16) = (u8) (M2C_FIELD(arg0, u8 *, 0x16) | 2);
    M2C_FIELD(arg0, u8 *, 0x16) = (u8) (M2C_FIELD(arg0, u8 *, 0x16) | 8);
    M2C_FIELD(arg0, u8 *, 0x16) = (u8) (M2C_FIELD(arg0, u8 *, 0x16) | 0x10);
    if (func_00BA3A00() != 0) {
        M2C_FIELD(arg0, u8 *, 0x16) = (u8) (M2C_FIELD(arg0, u8 *, 0x16) | 0x80);
    }
    func_00BC26F0(arg0);
    func_00BC2520(arg0);
    func_00B91490(0x13);
    if (func_00BA3A00() == 0) {
        var_a1 = 3;
    } else {
        var_a1 = 2;
    }
    func_001B7ED0(((void *)D_00CB6DE0), var_a1);
}
