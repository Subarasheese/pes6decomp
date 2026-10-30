/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00129600(s32, M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
s32 func_00135080(M2C_UNK);                         /* extern */
M2C_UNK func_00136490(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_00137990(s32, s32, s32 *);             /* extern */
extern char D_005FBF70[];
extern char D_011DA010[];
extern char D_011DA014[];
extern char D_011DA040[];
extern char D_011DA044[];
extern char D_011DA048[];
extern char D_011DA2A0[];
extern char D_011DA4F8[];
extern char D_011DA4FC[];

void func_0013DCF0(M2C_UNK arg0, M2C_UNK arg1, s32 *arg2) {
    M2C_UNK *var_s1;
    M2C_UNK *var_s2;
    s32 *var_a2;
    s32 *var_s0;

    var_a2 = arg2;
    if ((M2C_FIELD(((void *)D_011DA4FC), s32 *, 0) >= 0) && (M2C_FIELD(((void *)D_011DA4FC), s32 *, 0) < 7)) {
        var_s2 = ((void *)D_011DA040);
        var_s1 = ((void *)D_011DA044);
        var_s0 = ((void *)D_011DA010);
        var_a2 = ((void *)D_011DA4F8);
        (*(s32 *)D_011DA010) = func_00129600(func_00135080(0xDB), ((void *)D_011DA014), 3, ((void *)D_011DA040), ((void *)D_011DA044));
        (*(u8 *)D_011DA2A0) = (*(u8 *)D_005FBF70);
        (*(s32 *)D_011DA4F8) = 0;
        (*(u8 *)D_011DA048) = (*(u8 *)D_005FBF70);
    } else {
        var_s2 = (M2C_UNK *)0x011E0000;
        var_s1 = (M2C_UNK *)0x011E0000;
        var_s0 = (s32 *)0x011E0000;
    }
    func_00137990(M2C_FIELD(var_s2, s32 *, -0x5FC0), M2C_FIELD(var_s1, s32 *, -0x5FBC), var_a2);
    func_00136490(M2C_FIELD(var_s0, s32 *, -0x5FF0), M2C_FIELD(((void *)D_011DA4FC), s32 *, -0x5B04), 8);
}
