/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00190550(M2C_UNK *, s32, M2C_UNK);         /* extern */
extern void *D_011FD1CC;
extern char D_011FD1D0[];
extern char D_011FD1F0[];

s32 func_00190628(s32 arg0) {
    s32 var_v0;

    (*(s32 *)D_011FD1F0) = 0;
    var_v0 = func_00190550(((void *)D_011FD1D0), arg0, 0) != 0;
    if (var_v0 == 0) {
        M2C_FIELD(((void *)D_011FD1D0), s32 *, 8) = arg0;
        var_v0 = func_00190550(((void *)D_011FD1D0) + 0x10, arg0, 0) != 0;
        if (var_v0 == 0) {
            M2C_FIELD(((void *)D_011FD1D0), s32 *, 0x18) = arg0;
            var_v0 = 0;
            D_011FD1CC = ((*(s32 *)D_011FD1F0) * 0x10) + ((void *)D_011FD1D0);
        }
    }
    return var_v0;
}
