/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
M2C_UNK func_00C88DD0(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_00C88EC0(M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_00C89120(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_00C89160(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00C891E0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00C89280(M2C_UNK, M2C_UNK *, f32, f32); /* extern */
extern char D_00CA8A70[];
extern char D_00CA8A74[];
extern char D_00CB5138[];
extern M2C_UNK func_00C92300;
extern M2C_UNK func_00C92340;

void func_00C92380(void) {
    s32 var_v0;

    var_v0 = func_001F08B0(0xB0028);
    if (var_v0 == 0) {
        var_v0 = (s32) ((void *)D_00CB5138);
    }
    func_00C89280(1, (M2C_UNK *) var_v0, (*(f32 *)D_00CA8A70), (*(f32 *)D_00CA8A74));
    func_00C89120(1, 0x43140000, 0);
    func_00C89160(1, 0x11);
    func_00C891E0(1, 0);
    func_00C88EC0(0xD, 0, &func_00C92300);
    func_00C88DD0(0xD, &func_00C92340, 0);
}
