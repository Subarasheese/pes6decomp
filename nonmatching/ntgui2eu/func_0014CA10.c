/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00129600(s32, M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
s32 func_00135080(M2C_UNK);                         /* extern */
M2C_UNK func_00136490(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_00137990(s32, s32, u8 *, s32 *);       /* extern */
extern char D_005FCB18[];
extern char D_011E0270[];
extern char D_011E0274[];
extern char D_011E02BC[];
extern char D_011E02C0[];
extern char D_011E02C8[];
extern char D_011E0520[];
extern char D_011E0778[];
extern char D_011E09D0[];
extern char D_011E09E8[];

void func_0014CA10(M2C_UNK arg0, M2C_UNK arg1, u8 *arg2, s32 *arg3) {
    M2C_UNK *var_s1;
    M2C_UNK *var_s2;
    s32 *var_a3;
    s32 *var_s0;
    s32 temp_v0;
    u8 *var_a2;

    var_a2 = arg2;
    var_a3 = arg3;
    if ((M2C_FIELD(((void *)D_011E09E8), s32 *, 0) >= 0) && (M2C_FIELD(((void *)D_011E09E8), s32 *, 0) < 7)) {
        var_s2 = ((void *)D_011E02BC);
        var_s1 = ((void *)D_011E02C0);
        temp_v0 = func_00129600(func_00135080(0xC0), ((void *)D_011E0274), 3, ((void *)D_011E02BC), ((void *)D_011E02C0));
        var_s0 = ((void *)D_011E0270);
        var_a3 = ((void *)D_011E09D0);
        var_a2 = ((void *)D_011E0520);
        (*(u8 *)D_011E0778) = (*(u8 *)D_005FCB18);
        (*(s32 *)D_011E0270) = temp_v0;
        (*(s32 *)D_011E09D0) = 0;
        (*(u8 *)D_011E02C8) = (*(u8 *)D_005FCB18);
        (*(u8 *)D_011E0520) = (*(u8 *)D_005FCB18);
    } else {
        var_s2 = (M2C_UNK *)0x011E0000;
        var_s1 = (M2C_UNK *)0x011E0000;
        var_s0 = (s32 *)0x011E0000;
    }
    func_00137990(M2C_FIELD(var_s2, s32 *, 0x2BC), M2C_FIELD(var_s1, s32 *, 0x2C0), var_a2, var_a3);
    func_00136490(M2C_FIELD(var_s0, s32 *, 0x270), M2C_FIELD(((void *)D_011E09E8), s32 *, 0x9E8), 5);
}
