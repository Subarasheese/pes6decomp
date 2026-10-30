/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00C88DD0(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_00C88EC0(M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_00C89260(M2C_UNK, M2C_UNK);            /* extern */
extern char D_00CCCDC0[];
extern M2C_UNK func_00C87170;
extern M2C_UNK func_00C87470;
extern M2C_UNK func_00C875F0;

void func_00C87710(void) {
    func_001C48E8(((void *)D_00CCCDC0), 0, 0x18);
    func_00C89260(2, 0);
    func_00C88EC0(1, &func_00C87170, &func_00C875F0);
    func_00C88DD0(1, &func_00C87470, 0);
}
