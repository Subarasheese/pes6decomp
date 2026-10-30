/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00129600(s32, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
s32 func_00135080(M2C_UNK);                         /* extern */
M2C_UNK func_00136490(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_00137990(M2C_UNK, s32);                /* extern */
extern char D_005BD45C[];
extern char D_011DFF50[];
extern char D_011DFF58[];
extern char D_011DFF9C[];
extern char D_011DFFA0[];
extern char D_011DFFB8[];

void func_0014B048(void) {
    M2C_UNK *var_s1;
    s32 *var_s0;

    if ((M2C_FIELD(((void *)D_011DFFB8), s32 *, 0) >= 0) && (M2C_FIELD(((void *)D_011DFFB8), s32 *, 0) < 7)) {
        var_s1 = ((void *)D_011DFF9C);
        var_s0 = ((void *)D_011DFF50);
        (*(s32 *)D_011DFF50) = func_00129600(func_00135080(0xC9), ((void *)D_011DFF58), 2, 0, ((void *)D_011DFF9C));
        (*(s32 *)D_005BD45C) = -1;
        (*(s32 *)D_011DFFA0) = 0;
    } else {
        var_s1 = (M2C_UNK *)0x011E0000;
        var_s0 = (s32 *)0x011E0000;
    }
    func_00137990(0, M2C_FIELD(var_s1, s32 *, -0x64));
    func_00136490(M2C_FIELD(var_s0, s32 *, -0xB0), M2C_FIELD(((void *)D_011DFFB8), s32 *, -0x48), 6);
}
