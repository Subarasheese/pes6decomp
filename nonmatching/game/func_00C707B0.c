/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00C70FE0();                            /* extern */
M2C_UNK func_00C88DD0(M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_00C88EC0(M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
extern char D_00CCBCD0[];
extern M2C_UNK func_00C706C0;
extern M2C_UNK func_00C70750;
extern M2C_UNK func_00C70790;
extern M2C_UNK func_00C707A0;

void func_00C707B0(void) {
    func_001C48E8(((void *)D_00CCBCD0), 0, 0x54);
    func_00C70FE0();
    func_00C88EC0(0x18, &func_00C707A0, &func_00C70790);
    func_00C88DD0(0x18, &func_00C706C0, &func_00C70750);
}
