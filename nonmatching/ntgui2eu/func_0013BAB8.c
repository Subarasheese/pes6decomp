/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00129600(s32, M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
s32 func_00135080(M2C_UNK);                         /* extern */
M2C_UNK func_00136490(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_00137990(s32, s32, s32 *);             /* extern */
extern char D_005BCBEC[];
extern char D_005FB2A0[];
extern char D_011D9610[];
extern char D_011D9614[];
extern char D_011D965C[];
extern char D_011D9660[];
extern char D_011D9668[];
extern char D_011D9D70[];
extern char D_011D9D74[];

void func_0013BAB8(M2C_UNK arg0, M2C_UNK arg1, s32 *arg2) {
    M2C_UNK *var_s1;
    s32 *var_a2;
    s32 *var_s0;
    s32 var_a0_2;
    s32 var_v0;
    u8 *var_a0;

    var_a2 = arg2;
    if ((M2C_FIELD(((void *)D_011D9D74), s32 *, 0) >= 0) && (M2C_FIELD(((void *)D_011D9D74), s32 *, 0) < 7)) {
        var_s1 = ((void *)D_011D9660);
        var_s0 = ((void *)D_011D9610);
        var_a2 = ((void *)D_005BCBEC);
        (*(s32 *)D_011D9610) = func_00129600(func_00135080(0xE2), ((void *)D_011D9614), 3, ((void *)D_011D965C), ((void *)D_011D9660));
        var_a0 = ((void *)D_011D9668) + 0x4B0;
        (*(s32 *)D_011D9D70) = 0;
        var_v0 = 2;
        (*(s32 *)D_005BCBEC) = 0;
        do {
            *var_a0 = (*(u8 *)D_005FB2A0);
            var_v0 -= 1;
            var_a0 -= 0x258;
        } while (var_v0 >= 0);
        var_a0_2 = M2C_FIELD(((void *)D_011D965C), s32 *, -0x69A4);
    } else {
        var_s1 = (M2C_UNK *)0x011E0000;
        var_s0 = (s32 *)0x011E0000;
        var_a0_2 = M2C_FIELD(((void *)D_011D965C), s32 *, 0);
    }
    func_00137990(var_a0_2, M2C_FIELD(var_s1, s32 *, -0x69A0), var_a2);
    func_00136490(M2C_FIELD(var_s0, s32 *, -0x69F0), M2C_FIELD(((void *)D_011D9D74), s32 *, -0x628C), 9);
}
