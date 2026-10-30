/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char Pes6MatchPlayers[];

void func_00B7B920(s8 arg0) {
    M2C_UNK *var_a3;
    s32 var_a2;
    s8 temp_a1;

    var_a2 = 0;
    var_a3 = ((void *)Pes6MatchPlayers);
    temp_a1 = arg0 & 0xFF;
    do {
        M2C_FIELD(var_a3, s8 *, 0x104) = arg0;
        var_a2 += 7;
        M2C_FIELD(var_a3, s8 *, 0x344) = arg0;
        M2C_FIELD(var_a3, s8 *, 0x584) = arg0;
        M2C_FIELD(var_a3, s8 *, 0x7C4) = arg0;
        M2C_FIELD(var_a3, s8 *, 0xA04) = arg0;
        M2C_FIELD(var_a3, s8 *, 0xC44) = arg0;
        M2C_FIELD(var_a3, s8 *, 0xE84) = arg0;
        var_a3 += 0xFC0;
    } while (var_a2 < 0x10);
    M2C_FIELD(var_a3, s8 *, 0x104) = temp_a1;
    M2C_FIELD(var_a3, s8 *, 0x344) = temp_a1;
}
