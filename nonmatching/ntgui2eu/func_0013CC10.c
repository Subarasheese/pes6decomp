/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00129600(s32, M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
s32 func_00135080(M2C_UNK);                         /* extern */
M2C_UNK func_00136490(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_00137990(s32, s32, s32 *);             /* extern */
extern char D_005FBB90[];
extern char D_011D9D78[];
extern char D_011D9D7C[];
extern char D_011D9DA4[];
extern char D_011D9DA8[];
extern char D_011D9DB0[];
extern char D_011DA008[];
extern char D_011DA00C[];

void func_0013CC10(M2C_UNK arg0, M2C_UNK arg1, s32 *arg2) {
    M2C_UNK *var_s1;
    M2C_UNK *var_s2;
    s32 *var_a2;
    s32 *var_s0;

    var_a2 = arg2;
    if ((M2C_FIELD(((void *)D_011DA00C), s32 *, 0) >= 0) && (M2C_FIELD(((void *)D_011DA00C), s32 *, 0) < 7)) {
        var_s2 = ((void *)D_011D9DA4);
        var_s1 = ((void *)D_011D9DA8);
        var_s0 = ((void *)D_011D9D78);
        var_a2 = ((void *)D_011DA008);
        (*(s32 *)D_011D9D78) = func_00129600(func_00135080(0xF9), ((void *)D_011D9D7C), 3, ((void *)D_011D9DA4), ((void *)D_011D9DA8));
        (*(u8 *)D_011D9DB0) = (*(u8 *)D_005FBB90);
        (*(s32 *)D_011DA008) = 0;
    } else {
        var_s2 = (M2C_UNK *)0x011E0000;
        var_s1 = (M2C_UNK *)0x011E0000;
        var_s0 = (s32 *)0x011E0000;
    }
    func_00137990(M2C_FIELD(var_s2, s32 *, -0x625C), M2C_FIELD(var_s1, s32 *, -0x6258), var_a2);
    func_00136490(M2C_FIELD(var_s0, s32 *, -0x6288), M2C_FIELD(((void *)D_011DA00C), s32 *, -0x5FF4), 0xC);
}
