/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0019EE30(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
extern char D_011FD4C0[];
extern char D_011FD510[];
extern char D_011FD700[];

s32 func_001948C0(s32 arg0, s32 arg1) {
    s32 *temp_s1;
    s32 var_v0;

    temp_s1 = (arg1 * 0x1C) + (arg0 * 0x70) + (((void *)D_011FD510) + 0x10);
    var_v0 = 0;
    if (*temp_s1 != 0) {
        M2C_FIELD(((void *)D_011FD700), s32 *, 0) = 0xE;
        M2C_FIELD(((void *)D_011FD700), s32 *, 4) = arg0;
        M2C_FIELD(((void *)D_011FD700), s32 *, 8) = arg1;
        M2C_FIELD(((void *)D_011FD700), s32 *, 0x10) = 1;
        if (func_0019EE30(((void *)D_011FD4C0), 1, 0, ((void *)D_011FD700), 0x80, ((void *)D_011FD700), 0x80, 0, 0) >= 0) {
            *temp_s1 = 0;
            var_v0 = M2C_FIELD(((void *)D_011FD700), s32 *, 0xC);
            /* Duplicate return node #6. Try simplifying control flow for better match */
            return var_v0;
        }
        return 0;
    }
    return var_v0;
}
