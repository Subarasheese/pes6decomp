/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00129588(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
s32 func_00135080(M2C_UNK);                         /* extern */
M2C_UNK func_00136490(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_00137990(M2C_UNK, s32);                /* extern */
M2C_UNK func_00152010(M2C_UNK, M2C_UNK);            /* extern */
extern char D_011E0C78[];
extern char D_011E0C98[];
extern char D_011E0C9C[];
extern char D_011E0CA0[];

void func_00150AA8(void) {
    M2C_UNK *var_s0;
    s32 *var_s1;

    if ((M2C_FIELD(((void *)D_011E0CA0), s32 *, 0) >= 0) && (M2C_FIELD(((void *)D_011E0CA0), s32 *, 0) < 7)) {
        var_s0 = ((void *)D_011E0C98);
        var_s1 = ((void *)D_011E0C78);
        (*(s32 *)D_011E0C78) = func_00129588(func_00135080(0xAE), 2, 0, ((void *)D_011E0C98));
        (*(s32 *)D_011E0C9C) = 0;
    } else {
        var_s0 = (M2C_UNK *)0x011E0000;
        var_s1 = (s32 *)0x011E0000;
    }
    func_00137990(0, M2C_FIELD(var_s0, s32 *, 0xC98));
    func_00152010(0, 0x14);
    func_00136490(M2C_FIELD(var_s1, s32 *, 0xC78), M2C_FIELD(((void *)D_011E0CA0), s32 *, 0xCA0), 2);
}
