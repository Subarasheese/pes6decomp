/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0017E120(int);
extern void func_002A96D0(void);
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00204D90();                            /* extern */
M2C_UNK func_0027CB60(M2C_UNK);                     /* extern */
s32 func_008F6450();                                /* extern */
M2C_UNK func_009069C0();                            /* extern */
M2C_UNK func_00907F20();                            /* extern */
M2C_UNK func_00B24A80(M2C_UNK, s8 *, u16, u16);     /* extern */
extern char D_0058D7FC[];
extern char D_00591BB0[];
extern char D_00591BB2[];
extern char D_00921D40[];
extern char D_00921D4C[];
extern char D_00921D4E[];
extern char D_00923FD0[];
extern char D_00923FD1[];

s32 func_008FF480(void) {
    s32 var_s0;

    var_s0 = 0;
    func_001C48E8(((void *)D_00921D40), 0, 0x22B8);
    func_0017E120(0);
    func_0027CB60(5);
    if ((*(s32 *)D_0058D7FC) != 0) {
        func_00204D90();
    } else {
        func_002A96D0();
    }
    if (func_008F6450() != 0) {
        var_s0 = 1;
    }
    if (var_s0 != 0) {
        func_009069C0();
        func_00907F20();
    }
    (*(u16 *)D_00921D4C) = (*(u16 *)D_00591BB0);
    (*(u16 *)D_00921D4E) = (*(u16 *)D_00591BB2);
    (*(s8 *)D_00923FD0) = (*(u16 *)D_00591BB0) == 0x126;
    (*(s8 *)D_00923FD1) = (*(u16 *)D_00591BB2) == 0x127;
    func_00B24A80(0, ((void *)D_00923FD1), (*(u16 *)D_00591BB2), (*(u16 *)D_00591BB0));
    return var_s0;
}
