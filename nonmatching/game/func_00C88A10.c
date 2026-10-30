/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00C88DD0(M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_00C88EC0(M2C_UNK, M2C_UNK *, M2C_UNK *, M2C_UNK, u8); /* extern */
extern char D_00CCCDF0[];
extern char D_00CCCE04[];
extern char D_00CCCE08[];
extern char D_00CCCE0C[];
extern M2C_UNK func_00C88320;
extern M2C_UNK func_00C88350;
extern M2C_UNK func_00C88390;
extern M2C_UNK func_00C88950;

void func_00C88A10(void) {
    u8 temp_a4;

    func_001C48E8(((void *)D_00CCCDF0), 0, 0x28);
    (*(s32 *)D_00CCCE0C) = 3;
    (*(s32 *)D_00CCCE08) = 3;
    temp_a4 = (*(u8 *)D_00CCCE04);
    (*(u8 *)D_00CCCE04) = (temp_a4 & ~4) | 4;
    func_00C88EC0(3, &func_00C88390, &func_00C88950, 4, temp_a4);
    func_00C88DD0(3, &func_00C88350, &func_00C88320);
}
