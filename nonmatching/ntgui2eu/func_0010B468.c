/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001AE7D8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern char D_011B5C80[];

void func_0010B468(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    func_001AE7D8(((void *)D_011B5C80), 0, 0x24);
    M2C_FIELD(((void *)D_011B5C80), s32 *, 4) = arg0;
    M2C_FIELD(((void *)D_011B5C80), s32 *, 0x20) = arg7;
    M2C_FIELD(((void *)D_011B5C80), s32 *, 8) = arg1;
    M2C_FIELD(((void *)D_011B5C80), s32 *, 0xC) = arg4;
    M2C_FIELD(((void *)D_011B5C80), s32 *, 0x10) = arg5;
    M2C_FIELD(((void *)D_011B5C80), s32 *, 0x14) = arg2;
    M2C_FIELD(((void *)D_011B5C80), s32 *, 0x18) = arg3;
    M2C_FIELD(((void *)D_011B5C80), s32 *, 0x1C) = arg6;
}
