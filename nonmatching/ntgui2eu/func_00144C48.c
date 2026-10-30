/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00129600(s32, M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
s32 func_00135080(M2C_UNK);                         /* extern */
M2C_UNK func_00136490(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_00137990(s32, s32);                    /* extern */
extern char D_005BD37C[];
extern char D_011DFA88[];
extern char D_011DFA90[];
extern char D_011DFAB0[];
extern char D_011DFAB4[];
extern char D_011DFAB8[];
extern char D_011DFABC[];

void func_00144C48(void) {
    M2C_UNK *var_s1;
    M2C_UNK *var_s2;
    s32 *var_s0;

    if ((M2C_FIELD(((void *)D_011DFABC), s32 *, 0) >= 0) && (M2C_FIELD(((void *)D_011DFABC), s32 *, 0) < 7)) {
        var_s2 = ((void *)D_011DFAB0);
        var_s1 = ((void *)D_011DFAB4);
        var_s0 = ((void *)D_011DFA88);
        (*(s32 *)D_011DFA88) = func_00129600(func_00135080(0xEB), ((void *)D_011DFA90), 3, ((void *)D_011DFAB0), ((void *)D_011DFAB4));
        (*(s32 *)D_005BD37C) = -1;
        (*(s32 *)D_011DFAB8) = 0;
    } else {
        var_s2 = (M2C_UNK *)0x011E0000;
        var_s1 = (M2C_UNK *)0x011E0000;
        var_s0 = (s32 *)0x011E0000;
    }
    func_00137990(M2C_FIELD(var_s2, s32 *, -0x550), M2C_FIELD(var_s1, s32 *, -0x54C));
    func_00136490(M2C_FIELD(var_s0, s32 *, -0x578), M2C_FIELD(((void *)D_011DFABC), s32 *, -0x544), 0xA);
}
