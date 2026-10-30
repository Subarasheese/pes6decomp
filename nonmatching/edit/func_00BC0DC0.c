/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001B79C0();                            /* extern */
M2C_UNK func_001B7ED0(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_001C48E8(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00B91490(M2C_UNK);                     /* extern */
M2C_UNK func_00BC2520(void *);                      /* extern */
M2C_UNK func_00BC26F0(void *);                      /* extern */
extern char D_00CB6DD0[];

void func_00BC0DC0(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 var_v0;

    func_001C48E8(0, 0x24);
    M2C_FIELD(arg0, s32 *, 8) = 3;
    M2C_FIELD(arg0, s32 *, 0) = arg1;
    if (arg2 == 0) {
        M2C_FIELD(arg0, u8 *, 0x16) = (u8) (M2C_FIELD(arg0, u8 *, 0x16) | 1);
        M2C_FIELD(arg0, u8 *, 0x16) = (u8) (M2C_FIELD(arg0, u8 *, 0x16) | 8);
        M2C_FIELD(arg0, u8 *, 0x16) = (u8) (M2C_FIELD(arg0, u8 *, 0x16) | 0x10);
        M2C_FIELD(arg0, u8 *, 0x16) = (u8) (M2C_FIELD(arg0, u8 *, 0x16) | 2);
        var_v0 = M2C_FIELD(arg0, u8 *, 0x16) | 4;
        goto block_8;
    }
    switch (arg3) {                                 /* irregular */
    case 0:
        M2C_FIELD(arg0, u8 *, 0x16) = (u8) (M2C_FIELD(arg0, u8 *, 0x16) | 2);
        var_v0 = M2C_FIELD(arg0, u8 *, 0x16) | 4;
block_8:
        M2C_FIELD(arg0, u8 *, 0x16) = var_v0;
        break;
    case 1:
        M2C_FIELD(arg0, u8 *, 0x16) = (u8) (M2C_FIELD(arg0, u8 *, 0x16) | 0x20);
        var_v0 = M2C_FIELD(arg0, u8 *, 0x16) | 0x40;
        goto block_8;
    }
    func_00BC26F0(arg0);
    func_00BC2520(arg0);
    func_00B91490(0x13);
    func_001B79C0();
    func_001B7ED0(((void *)D_00CB6DD0), 2);
}
