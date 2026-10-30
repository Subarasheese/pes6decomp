/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0019EE30(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
extern char D_011FD4C0[];
extern char D_011FD700[];

s32 func_00195700(s32 arg0) {
    M2C_FIELD(((void *)D_011FD700), s32 *, 4) = arg0;
    M2C_FIELD(((void *)D_011FD700), s32 *, 0) = 0xD;
    if (func_0019EE30(((void *)D_011FD4C0), 1, 0, ((void *)D_011FD700), 0x80, ((void *)D_011FD700), 0x80, 0, 0) >= 0) {
        return M2C_FIELD(((void *)D_011FD700), s32 *, 0xC);
    }
    return 0;
}
