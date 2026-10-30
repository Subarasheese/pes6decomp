/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00105E58();                            /* extern */
extern char D_011B0CB8[];

s32 func_001056D8(s32 arg0) {
    if (arg0 == 0) {
        func_00105E58();
        M2C_FIELD(((void *)D_011B0CB8), s32 *, 0x2C) = 0;
        M2C_FIELD(((void *)D_011B0CB8), s32 *, 0xC) = 0;
        M2C_FIELD(((void *)D_011B0CB8), s32 *, 4) = 0;
        M2C_FIELD(((void *)D_011B0CB8), s32 *, 0) = 0;
        M2C_FIELD(((void *)D_011B0CB8), s32 *, 0x24) = 0;
        M2C_FIELD(((void *)D_011B0CB8), s32 *, 0x1C) = 0;
        M2C_FIELD(((void *)D_011B0CB8), s32 *, 0x20) = 0;
        M2C_FIELD(((void *)D_011B0CB8), s32 *, 0x18) = 0;
        M2C_FIELD(((void *)D_011B0CB8), s32 *, 0x14) = 0;
        M2C_FIELD(((void *)D_011B0CB8), s32 *, 0x34) = 0;
        M2C_FIELD(((void *)D_011B0CB8), s32 *, 0x30) = 0;
    }
    return 1;
}
