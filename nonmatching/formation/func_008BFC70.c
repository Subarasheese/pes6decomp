/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00592800[];

void func_008BFC70(s32 arg0, s32 arg1) {
    M2C_UNK *var_a3;
    s32 var_a4;
    u8 temp_a2;

    var_a4 = 0;
    var_a3 = ((void *)D_00592800);
    do {
        temp_a2 = M2C_FIELD(var_a3, u8 *, 0);
        if (((s32) temp_a2 < 8) && (arg0 == M2C_FIELD(var_a3, u8 *, 1)) && (M2C_FIELD(var_a3, u8 *, 3) == 0)) {
            M2C_FIELD(var_a3, u8 *, 6) = (u8) M2C_FIELD((arg1 + temp_a2), u8 *, 0x75D);
        }
        var_a4 += 1;
        var_a3 += 0x28;
    } while (var_a4 < 8);
}
