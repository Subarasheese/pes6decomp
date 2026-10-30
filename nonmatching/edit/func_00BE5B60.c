/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern char D_00CE5BE0[];
extern M2C_UNK *D_00CE5BE4;
extern char D_00CE5BE8[];
extern char D_00CE5BEC[];
extern M2C_UNK func_00BE6F30;

void func_00BE5B60(void) {
    func_001C48E8(((void *)D_00CE5BE0), 0, 0x14);
    D_00CE5BE4 = &func_00BE6F30;
    (*(s16 *)D_00CE5BE8) = 0x40;
    (*(s32 *)D_00CE5BEC) = 0;
}
