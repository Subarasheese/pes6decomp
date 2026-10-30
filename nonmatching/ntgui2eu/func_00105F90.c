/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0019EE30(M2C_UNK *, s32, M2C_UNK, M2C_UNK *, M2C_UNK, s32 *, M2C_UNK, M2C_UNK, s32); /* extern */
extern char D_002B9E70[];
extern char D_011B19C0[];
extern char D_011B1A00[];

s32 func_00105F90(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(((void *)D_011B19C0), s32 *, 4) = arg1;
    M2C_FIELD(((void *)D_011B19C0), s32 *, 8) = arg2;
    M2C_FIELD(((void *)D_011B19C0), s32 *, 0xC) = arg3;
    M2C_FIELD(((void *)D_011B19C0), s32 *, 0) = arg0;
    func_0019EE30(((void *)D_002B9E70), arg0 | 0x200000, 0, ((void *)D_011B19C0), 0x10, ((void *)D_011B1A00), 0x10, 0, 0);
    return (*(s32 *)D_011B1A00);
}
