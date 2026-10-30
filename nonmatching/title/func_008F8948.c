/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00900500(M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
extern char D_00901D60[];

s32 func_008F8948(void *arg0, void *arg1, s32 *arg2, void *arg3, s32 *arg4) {
    s32 temp_a6;
    s32 temp_v0;
    s32 var_a5;

    var_a5 = 1;
    temp_a6 = M2C_FIELD(arg0, s32 *, 0x820) * 0x140;
    M2C_FIELD((temp_a6 + arg0), s32 *, 0x6DC) = 1;
    M2C_FIELD(arg0, s32 *, 0x1C0) = 1;
    if (M2C_FIELD(arg0, s32 *, 0x160) == 2) {
        M2C_FIELD(arg1, s32 *, 0) = 0;
        M2C_FIELD(arg1, s32 *, 0x14) = 0;
        M2C_FIELD(arg1, s32 *, 0x10) = 0;
        M2C_FIELD(arg1, s32 *, 4) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x184) != 3) {
        *arg2 = 1;
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x184) == 2;
        M2C_FIELD(arg3, s32 *, 0) = temp_v0;
        M2C_FIELD(arg3, s32 *, 4) = temp_v0;
    } else {
        *arg2 = 2;
    }
    if (M2C_FIELD(arg0, s32 *, 0x160) == 1) {
        func_00900500(((void *)D_00901D60), 2, 1, temp_a6);
        var_a5 = 0;
    }
    *arg4 &= ~1;
    return var_a5;
}
