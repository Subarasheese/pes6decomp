/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00129588(s32, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
s32 func_00135080(M2C_UNK);                         /* extern */
M2C_UNK func_00136490(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_00137990(s32, M2C_UNK);                /* extern */
extern char D_011DA500[];
extern char D_011DA514[];
extern char D_011DB86C[];

void func_0013FD10(void) {
    M2C_UNK *var_s1;
    s32 *var_s0;

    if ((M2C_FIELD(((void *)D_011DB86C), s32 *, 0) >= 0) && (M2C_FIELD(((void *)D_011DB86C), s32 *, 0) < 7)) {
        var_s1 = ((void *)D_011DA514);
        var_s0 = ((void *)D_011DA500);
        (*(s32 *)D_011DA500) = func_00129588(func_00135080(0x12A), 1, ((void *)D_011DA514), 0);
    } else {
        var_s1 = (M2C_UNK *)0x011E0000;
        var_s0 = (s32 *)0x011E0000;
    }
    func_00137990(M2C_FIELD(var_s1, s32 *, -0x5AEC), 0);
    func_00136490(M2C_FIELD(var_s0, s32 *, -0x5B00), M2C_FIELD(((void *)D_011DB86C), s32 *, -0x4794), 0x13);
}
