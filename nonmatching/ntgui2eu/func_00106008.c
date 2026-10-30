/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0019B3A0(M2C_UNK);                     /* extern */
M2C_UNK func_0019B4E0(M2C_UNK *, M2C_UNK);          /* extern */
extern char D_011B0C40[];

void func_00106008(s32 arg0, s32 arg1, s32 arg2) {
    func_0019B3A0(0);
    M2C_FIELD(((void *)D_011B0C40), s32 *, 0) = arg0;
    M2C_FIELD(((void *)D_011B0C40), s32 *, 4) = arg1;
    M2C_FIELD(((void *)D_011B0C40), s32 *, 8) = arg2;
    M2C_FIELD(((void *)D_011B0C40), s32 *, 0xC) = 0;
    func_0019B4E0(((void *)D_011B0C40), 1);
}
