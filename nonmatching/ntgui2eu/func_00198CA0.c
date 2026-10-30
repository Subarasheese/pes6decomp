/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_011FEDC0[];

s32 func_00198CA0(s32 arg0, u32 arg1) {
    void *temp_v0;

    if (arg0 >= M2C_FIELD(((void *)D_011FEDC0), s32 *, 0)) {
        return -0xB;
    }
    if (arg1 >= 2U) {
        return -0xC;
    }
    temp_v0 = (arg0 * 0x38) + M2C_FIELD(((void *)D_011FEDC0), s32 *, 4);
    if (arg1 != M2C_FIELD(temp_v0, u32 *, 0xC)) {
        M2C_FIELD(temp_v0, s32 *, 0x14) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x2C) = 0;
        M2C_FIELD(temp_v0, s32 *, 0x30) = 0;
        M2C_FIELD(((void *)D_011FEDC0), s32 *, 0x10) = 0;
        M2C_FIELD(temp_v0, s16 *, 0x20) = 0;
    }
    M2C_FIELD(temp_v0, u32 *, 0xC) = arg1;
    return 0;
}
