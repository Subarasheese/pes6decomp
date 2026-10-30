/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00129588(s32, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
s32 func_00135080(M2C_UNK);                         /* extern */
M2C_UNK func_00136490(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_00137990(s32, M2C_UNK);                /* extern */
extern char D_011E0A58[];
extern char D_011E0A6C[];
extern char D_011E0A70[];
extern char D_011E0A88[];

void func_0014E308(void) {
    M2C_UNK *var_s1;
    s32 *var_s0;

    if ((M2C_FIELD(((void *)D_011E0A88), s32 *, 0) >= 0) && (M2C_FIELD(((void *)D_011E0A88), s32 *, 0) < 7)) {
        var_s1 = ((void *)D_011E0A6C);
        var_s0 = ((void *)D_011E0A58);
        (*(s32 *)D_011E0A58) = func_00129588(func_00135080(0x11D), 1, ((void *)D_011E0A6C), 0);
        (*(s32 *)D_011E0A70) = 0;
    } else {
        var_s1 = (M2C_UNK *)0x011E0000;
        var_s0 = (s32 *)0x011E0000;
    }
    func_00137990(M2C_FIELD(var_s1, s32 *, 0xA6C), 0);
    func_00136490(M2C_FIELD(var_s0, s32 *, 0xA58), M2C_FIELD(((void *)D_011E0A88), s32 *, 0xA88), 0xF);
}
