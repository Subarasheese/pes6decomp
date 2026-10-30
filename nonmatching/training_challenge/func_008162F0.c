/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_003710E0(M2C_UNK);                     /* extern */
M2C_UNK func_00816370(s32, s32);                    /* extern */
M2C_UNK func_00BE9ED0(M2C_UNK);                     /* extern */
extern char D_005900B0[];

void func_008162F0(s32 arg0, s32 arg1) {
    M2C_UNK *var_a0;
    u32 var_v1;

    var_v1 = 0;
    var_a0 = ((void *)D_005900B0);
    do {
        M2C_FIELD(var_a0, s8 *, 0x1DD) = 0;
        var_v1 += 5;
        M2C_FIELD(var_a0, s8 *, 0x41D) = 0;
        M2C_FIELD(var_a0, s8 *, 0x65D) = 0;
        M2C_FIELD(var_a0, s8 *, 0x89D) = 0;
        M2C_FIELD(var_a0, s8 *, 0xADD) = 0;
        var_a0 += 0xB40;
    } while (var_v1 < 6U);
    M2C_FIELD(var_a0, s8 *, 0x1DD) = 0;
    func_00BE9ED0(0);
    func_003710E0(0);
    func_00816370(arg0, arg1);
}
