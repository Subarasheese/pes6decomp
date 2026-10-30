/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00129588(s32, M2C_UNK, M2C_UNK, M2C_UNK);  /* extern */
s32 func_00135080(M2C_UNK);                         /* extern */
M2C_UNK func_00136490(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_00137990(M2C_UNK, M2C_UNK);            /* extern */
extern char D_005BD3AC[];
extern char D_011DFAC0[];
extern char D_011DFAD8[];
extern char D_011DFAE4[];

void func_001461C8(void) {
    s32 *var_s0;
    s32 temp_v0;

    if ((M2C_FIELD(((void *)D_011DFAE4), s32 *, 0) >= 0) && (M2C_FIELD(((void *)D_011DFAE4), s32 *, 0) < 7)) {
        var_s0 = ((void *)D_011DFAC0);
        temp_v0 = func_00129588(func_00135080(0x12D), 0, 0, 0);
        (*(s32 *)D_005BD3AC) = -1;
        (*(s32 *)D_011DFAC0) = temp_v0;
        (*(s32 *)D_011DFAD8) = 0;
    } else {
        var_s0 = (s32 *)0x011E0000;
    }
    func_00137990(0, 0);
    func_00136490(M2C_FIELD(var_s0, s32 *, -0x540), M2C_FIELD(((void *)D_011DFAE4), s32 *, -0x51C), 0x14);
}
