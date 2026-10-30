/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00194C50(s32, s32, M2C_UNK);           /* extern */
s32 func_0019EE30(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
extern char D_011FD4C0[];
extern char D_011FD700[];

s32 func_00195100(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_v0;

    M2C_FIELD(((void *)D_011FD700), s32 *, 0xC) = arg2;
    M2C_FIELD(((void *)D_011FD700), s32 *, 0x10) = arg3;
    M2C_FIELD(((void *)D_011FD700), s32 *, 0) = 6;
    M2C_FIELD(((void *)D_011FD700), s32 *, 4) = arg0;
    M2C_FIELD(((void *)D_011FD700), s32 *, 8) = arg1;
    if (func_0019EE30(((void *)D_011FD4C0), 1, 0, ((void *)D_011FD700), 0x80, ((void *)D_011FD700), 0x80, 0, 0) >= 0) {
        temp_v0 = M2C_FIELD(((void *)D_011FD700), s32 *, 0x14);
        if (M2C_FIELD(((void *)D_011FD700), s32 *, 0x14) == 1) {
            func_00194C50(arg0, arg1, 2);
        }
        return temp_v0;
    }
    return 0;
}
