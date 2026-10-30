/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char Pes6MatchPlayers[];

u8 func_009938E0(s32 arg0) {
    s32 temp_a0;
    s32 var_a0;
    s32 var_a0_2;
    void *var_a1;

    temp_a0 = (arg0 & 0xFF) * 0xB;
    if ((temp_a0 + 1) == 0xFF) {
        var_a0 = 1;
    } else {
        var_a0 = (temp_a0 % 23) + 1;
    }
    var_a0_2 = 0;
    var_a1 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
loop_5:
    if ((M2C_FIELD(M2C_FIELD(var_a1, void **, 4), u8 *, 0x2C) != 0) && (M2C_FIELD(var_a1, u8 *, 0x16) == 0xD) && ((u32) M2C_FIELD(var_a1, u32 *, 0x110) < 0x100000U)) {
        return M2C_FIELD(var_a1, u8 *, 0);
    }
    var_a0_2 += 1;
    var_a1 += 0x240;
    if (var_a0_2 >= 0xB) {
        return 0U;
    }
    goto loop_5;
}
