/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern char D_00CE5BD0[];
extern M2C_UNK *D_00CE5BD4;
extern char D_00CE5BD8[];
extern char D_00CE5BDC[];
extern M2C_UNK func_00BE5990;

void func_00BE4CC0(void) {
    func_001C48E8(((void *)D_00CE5BD0), 0, 0x10);
    D_00CE5BD4 = &func_00BE5990;
    (*(s16 *)D_00CE5BD8) = 0;
    (*(s32 *)D_00CE5BDC) = 0;
}
