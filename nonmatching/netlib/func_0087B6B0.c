/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0087BE50();                            /* extern */
M2C_UNK func_00C88DD0(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_00C88EC0(M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
extern s32 D_003EA378;
extern M2C_UNK *D_003EA37C;
extern char D_008B23B0[];
extern M2C_UNK func_0087B4F0;
extern M2C_UNK func_0087B520;
extern M2C_UNK func_0087B680;

void func_0087B6B0(void) {
    D_003EA378 = 0;
    func_001C48E8(((void *)D_008B23B0), 0, 0x48);
    D_003EA37C = ((void *)D_008B23B0);
    func_0087BE50();
    func_00C88EC0(0x1E, &func_0087B680, &func_0087B520);
    func_00C88DD0(0x1E, &func_0087B4F0, 0);
}
