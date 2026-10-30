/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0019EE30(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
extern char D_011E3980[];
extern char D_011E3A00[];

void func_001590A0(s32 arg0) {
    M2C_FIELD(((void *)D_011E3A00), s32 *, 0xC) = arg0;
    func_0019EE30(((void *)D_011E3980), 8, 1, ((void *)D_011E3A00), 0x1000, ((void *)D_011E3A00), 0x1000, 0, 0);
}
