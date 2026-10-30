/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002D5410(void);
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00C88DD0(M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_00C88EC0(M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
s32 func_00C94420(s32);                             /* extern */
M2C_UNK func_00C94440(s32);                         /* extern */
extern s32 D_003EA870;
extern M2C_UNK *D_00CCC070;
extern char D_00CCC080[];
extern M2C_UNK func_00C7F050;
extern M2C_UNK func_00C7F0D0;
extern M2C_UNK func_00C7F3B0;
extern M2C_UNK func_00C7F450;

void func_00C7F4B0(void) {
    M2C_UNK **var_s0;
    M2C_UNK *var_s1;
    s32 temp_v0;
    s32 var_s2;

    func_00C94440(func_002D5410());
    var_s2 = 0;
    var_s1 = ((void *)D_00CCC080);
    var_s0 = &D_00CCC070;
    do {
        D_003EA870 = var_s2;
        func_001C48E8(var_s1, 0, 0x58);
        *var_s0 = var_s1;
        temp_v0 = func_00C94420(var_s2);
        var_s2 += 1;
        var_s1 += 0x58;
        var_s0 += 4;
        M2C_FIELD((((void *)D_00CCC080) + (D_003EA870 * 0x58)), s32 *, 0xC) = temp_v0;
    } while (var_s2 < 2);
    func_00C88EC0(5, &func_00C7F450, &func_00C7F3B0);
    func_00C88DD0(5, &func_00C7F050, &func_00C7F0D0);
}
