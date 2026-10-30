/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0021DF90(s32);
M2C_UNK func_001F0210(s32);                         /* extern */
extern char D_0065D980[];

void func_00645900(void) {
    M2C_UNK *var_a0;
    s32 var_a1;

    func_001F0210(func_0021DF90(0x11));
    var_a1 = 0;
    var_a0 = ((void *)D_0065D980);
    do {
        M2C_FIELD(var_a0, s32 *, 0) = 0;
        var_a1 += 6;
        M2C_FIELD(var_a0, s32 *, 4) = 0;
        M2C_FIELD(var_a0, s32 *, 8) = 0;
        M2C_FIELD(var_a0, s32 *, 0xC) = 0;
        M2C_FIELD(var_a0, s32 *, 0x10) = 0;
        M2C_FIELD(var_a0, s32 *, 0x14) = 0;
        var_a0 += 0x18;
    } while (var_a1 < 0x12);
}
