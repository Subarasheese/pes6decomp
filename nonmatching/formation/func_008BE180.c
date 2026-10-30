/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00592800[];

s32 func_008BE180(s32 arg0) {
    M2C_UNK *var_a2;
    s32 temp_a1;
    s32 var_a3;
    s32 var_v0;

    temp_a1 = arg0 & 0xFF;
    if (temp_a1 != 0) {
        return 0;
    }
    var_v0 = 0;
    var_a3 = 0;
    var_a2 = ((void *)D_00592800);
    do {
        if ((M2C_FIELD(var_a2, u8 *, 0) != 0xFF) && (temp_a1 == M2C_FIELD(var_a2, u8 *, 1))) {
            var_v0 = (var_v0 + 1) & 0xFF;
        }
        var_a3 += 1;
        var_a2 += 0x28;
    } while (var_a3 < 8);
    if ((var_v0 & 0xFF) < 2) {
        var_v0 = 2;
    }
    return var_v0;
}
