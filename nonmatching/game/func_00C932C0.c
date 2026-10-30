/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001867C0(M2C_UNK);                     /* extern */
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00C88DD0(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_00C88EC0(M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK *D_003EA8B0;
extern char D_00CCD8F0[];
extern M2C_UNK func_00C93200;
extern M2C_UNK func_00C93230;
extern M2C_UNK func_00C93260;

void func_00C932C0(void) {
    if (D_003EA8B0 == NULL) {
        func_001C48E8(((void *)D_00CCD8F0), 0, 0x18);
        D_003EA8B0 = ((void *)D_00CCD8F0);
        func_001867C0(0x8000);
        func_00C88EC0(0x15, &func_00C93260, &func_00C93200);
        func_00C88DD0(0x15, &func_00C93230, 0);
    }
}
