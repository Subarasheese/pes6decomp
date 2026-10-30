/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00158BD8(void *, void *);              /* extern */
M2C_UNK func_0019EE30(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
extern char D_011E3980[];
extern char D_011E3A00[];

void func_00159190(s32 arg0, s32 arg1) {
    M2C_FIELD(((void *)D_011E3A00), s32 *, 8) = arg0;
    M2C_FIELD(((void *)D_011E3A00), s32 *, 0xC) = arg1;
    func_00158BD8(((void *)D_011E3A00) + 0x230, ((void *)D_011E3A00) + 0x20);
    func_0019EE30(((void *)D_011E3980), 0xB, 1, ((void *)D_011E3A00), 0x1000, ((void *)D_011E3A00), 0x1000, 0, 0);
}
