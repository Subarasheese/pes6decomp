/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00129600(s32, M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
s32 func_00135080(M2C_UNK);                         /* extern */
M2C_UNK func_00136490(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_00137990(s32, s32);                    /* extern */
extern char D_005BD3EC[];
extern char D_011DFB18[];
extern char D_011DFB20[];
extern char D_011DFB40[];
extern char D_011DFB44[];
extern char D_011DFB4C[];

void func_00147190(void) {
    M2C_UNK *var_s1;
    M2C_UNK *var_s2;
    s32 *var_s0;
    s32 temp_v0;

    if ((M2C_FIELD(((void *)D_011DFB4C), s32 *, 0) >= 0) && (M2C_FIELD(((void *)D_011DFB4C), s32 *, 0) < 7)) {
        var_s2 = ((void *)D_011DFB40);
        var_s1 = ((void *)D_011DFB44);
        temp_v0 = func_00129600(func_00135080(0x102), ((void *)D_011DFB20), 3, ((void *)D_011DFB40), ((void *)D_011DFB44));
        var_s0 = ((void *)D_011DFB18);
        (*(s32 *)D_005BD3EC) = -1;
        (*(s32 *)D_011DFB18) = temp_v0;
    } else {
        var_s2 = (M2C_UNK *)0x011E0000;
        var_s1 = (M2C_UNK *)0x011E0000;
        var_s0 = (s32 *)0x011E0000;
    }
    func_00137990(M2C_FIELD(var_s2, s32 *, -0x4C0), M2C_FIELD(var_s1, s32 *, -0x4BC));
    func_00136490(M2C_FIELD(var_s0, s32 *, -0x4E8), M2C_FIELD(((void *)D_011DFB4C), s32 *, -0x4B4), 0xD);
}
