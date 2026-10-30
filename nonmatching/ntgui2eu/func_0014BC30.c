/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00129600(s32, M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
s32 func_00135080(M2C_UNK);                         /* extern */
M2C_UNK func_00136490(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_00137990(s32, s32, s32 *);             /* extern */
extern char D_005FC7C0[];
extern char D_011DFFC0[];
extern char D_011DFFC4[];
extern char D_011DFFEC[];
extern char D_011DFFF0[];
extern char D_011DFFF8[];
extern char D_011E0250[];
extern char D_011E0268[];

void func_0014BC30(M2C_UNK arg0, M2C_UNK arg1, s32 *arg2) {
    M2C_UNK *var_s1;
    M2C_UNK *var_s2;
    s32 *var_a2;
    s32 *var_s0;

    var_a2 = arg2;
    if ((M2C_FIELD(((void *)D_011E0268), s32 *, 0) >= 0) && (M2C_FIELD(((void *)D_011E0268), s32 *, 0) < 7)) {
        var_s2 = ((void *)D_011DFFEC);
        var_s1 = ((void *)D_011DFFF0);
        var_s0 = ((void *)D_011DFFC0);
        var_a2 = ((void *)D_011E0250);
        (*(s32 *)D_011DFFC0) = func_00129600(func_00135080(0x118), ((void *)D_011DFFC4), 3, ((void *)D_011DFFEC), ((void *)D_011DFFF0));
        (*(u8 *)D_011DFFF8) = (*(u8 *)D_005FC7C0);
        (*(s32 *)D_011E0250) = 0;
    } else {
        var_s2 = (M2C_UNK *)0x011E0000;
        var_s1 = (M2C_UNK *)0x011E0000;
        var_s0 = (s32 *)0x011E0000;
    }
    func_00137990(M2C_FIELD(var_s2, s32 *, -0x14), M2C_FIELD(var_s1, s32 *, -0x10), var_a2);
    func_00136490(M2C_FIELD(var_s0, s32 *, -0x40), M2C_FIELD(((void *)D_011E0268), s32 *, 0x268), 0x10);
}
