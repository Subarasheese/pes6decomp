/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00195838(M2C_UNK);                     /* extern */
M2C_UNK func_0019E0A8(M2C_UNK);                     /* extern */
s32 func_0019EE30(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
extern char D_005CA9E0[];
extern char D_011FD4C0[];
extern char D_011FD700[];

s32 func_00194530(void) {
    s32 var_v0;

    func_00195838(0);
    M2C_FIELD(((void *)D_011FD700), s32 *, 0) = 0xF;
    var_v0 = 0;
    if (func_0019EE30(((void *)D_011FD4C0), 1, 0, ((void *)D_011FD700), 0x80, ((void *)D_011FD700), 0x80, 0, 0) >= 0) {
        func_0019E0A8(0x80000019);
        var_v0 = M2C_FIELD(((void *)D_011FD700), s32 *, 0xC);
        if (M2C_FIELD(((void *)D_011FD700), s32 *, 0xC) == 1) {
            (*(s32 *)D_005CA9E0) = 0;
            var_v0 = M2C_FIELD(((void *)D_011FD700), s32 *, 0xC);
        }
    }
    return var_v0;
}
